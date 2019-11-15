/*
 * Garrisons buildings near a given map marker with infantry units of the
 * specified faction. Also spawns up to 5 patrolling groups of the same faction.
 * Some garrisoned units will leave their garrison if BLUFOR gets within 25m of the
 * leader of the group. Group max size is 8 for garrisons, 4 for patrols.
 *
 * Random garrisoned units will be able to leave their positions if BLUFOR is
 * within 25 meters.
 *
 * Params:
 * _firefightMarker - string - Marker position.
 * _faction - string - facion name from CfgFactions
 * _radius [optional] - integer - Radius to fill buildings in. 150 is default.
 * _level [optional] - string - how heavy the garrison should be. Defaults to full
 *     Options:
 *     light
 *     medium
 *     heavy
 *     full
 *
 * Example:
 * ["firefightMarker", "OPF_G_F"] call s39_fnc_initFirefight;
 * Will fill many buildings with FIA guerillas. When blufor gets close enough
 *
 *
*/

if (hasInterface && not isServer) exitWith {};

//Parameters we need.
_firefightMarker = param [0, "", [""]];
_faction = param[1, "", [""]];
_radius = param [2, 150, [150]];
_level = param[3, "full",[""]];

_soldierConfigs = "getText (_x >> 'simulation') == 'soldier' AND getText (_x >> 'faction') == _faction AND getNumber (_x >> 'scope') isEqualTo 2 AND getText (_x >> 'role') != 'Unarmed' AND getText (_x >> 'role') != 'Crewman'" configClasses (configFile >> 'CfgVehicles');

_taskExists = ["ffAreaObj"] call BIS_fnc_taskExists;
_taskComplete = "ffAreaObj" call BIS_fnc_taskCompleted;

if (_taskExists && !_taskComplete) exitWith { _handle = [] spawn {hint "Skirmish already exists! Clear or complete it first."; sleep 3; hintSilent "";}; };

_firefightLoc = parseSimpleArray _firefightMarker;

//Get the buildings in our fight area that have more than 3 positions.
_bldngs = nearestObjects [_firefightLoc, ["house","building"], _radius, true];
_garrisonableBldngs = [];
{

  _posCount = count ([_x] call BIS_fnc_buildingPositions);
  if (_posCount > 1) then {
    _garrisonableBldngs pushBack _x;
  };

} forEach _bldngs;

_roads = _firefightLoc nearRoads _radius;
_roadPositions = [];
{
  _position = getPos _x;
  _roadPositions pushBack _position;
} forEach _roads;

//count up how many garrisonable buildings there are to get our max groups.
_garrisonableBldngsCount = round (count _garrisonableBldngs);

//Sanity checking to prevent huge spawns. if there are more than 30 Buildings
//then we'll set our upper limit to 30
if (_garrisonableBldngsCount > 30) then {
  _garrisonableBldngsCount = 30;
};

//change the amount of garrisoned units depending on level passed.
switch (_level) do {

    case "light": {
      _garrisonableBldngsCount = round (_garrisonableBldngsCount * .6);
    };

    case "medium": {
      _garrisonableBldngsCount = round (_garrisonableBldngsCount * .8 );
    };

    case "heavy": {
      _garrisonableBldngsCount = _garrisonableBldngsCount;
    };

    default {
      _garrisonableBldngsCount = _garrisonableBldngsCount
    };

};


_garrisonableBldngsCountHalf = round (_garrisonableBldngsCount * .5);


//Get how many patrols there should be in the area, max of five.
_numPatrols = round (random [1, (_garrisonableBldngsCountHalf / 2), _garrisonableBldngsCountHalf]);
if (_numPatrols > 5) then {
  _numPatrols = round (_numpatrols * .75);
};

//Generate our list of buildings to garrison and patrol position
_bldgsToGarrison = [];
_patrolPositions = [];

for "_i" from 0 to _garrisonableBldngsCount do {
  _bldg = selectRandom _garrisonableBldngs;
  _status = _bldgsToGarrison pushBackUnique position _bldg;

  if(_status == -1) then {
    _bldg = selectRandom _garrisonableBldngs;
    _status = _bldgsToGarrison pushBackUnique position _bldg;
  };

};

diag_log format ["road pos - %1 --- roads - %2 --- FF Location - %3", _roadPositions, _roads, _firefightLoc];

for "_x" from 0 to _numPatrols do {

  _patPos = selectRandom _roadPositions;
  _patrolPositions pushBack _patPos;

};

//Garrison our buildings
{

_allowMove = selectRandom [true,false];
[_faction, _x, _allowMove, _soldierConfigs] call s39_fnc_garrisonNearBuilding;

} forEach _bldgsToGarrison;

// and spawn our patrols
{

[_faction, _x, _soldierConfigs] call s39_fnc_createPatrol;

} forEach _patrolPositions;

//Setup our secondary objectives, we'll do two for now.
[_firefightLoc, _radius] call s39_fnc_secondaryObjectives;

[_firefightLoc, _radius] call s39_fnc_secondaryObjectives;
//Create our task. Sanity checking to remove/readd the task if it was previously created/completed.
if (_taskExists) then {
  ["ffAreaObj"] call BIS_fnc_deleteTask;
};

[true, "ffAreaObj", ["Clear the area","Skirmish","attack"], _firefightLoc, "ASSIGNED",1,true,"attack"] call BIS_fnc_taskCreate;


//Create the completion trigger
_objTrigger = createTrigger ["EmptyDetector", _firefightLoc, true];
_objTrigger setTriggerArea [_radius, _radius, 0, false, 50];
_objTrigger setTriggerActivation ["WEST SEIZED","PRESENT",false];
_objTrigger setTriggerStatements ["this", "['ffAreaObj','SUCCEEDED'] call BIS_fnc_taskSetState;",""];

TRUE
