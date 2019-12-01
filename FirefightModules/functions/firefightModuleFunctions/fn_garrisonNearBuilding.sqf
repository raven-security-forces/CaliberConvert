/* Garrison a group of units into a nearby building.
 * Can be used on its own or in conjunection with other
 * functions.
 *
 * Params:
 * 0 - _faction - Name of the facion you want soldiers from
 * 1 - _pos - position to spawn/garrison the soldiers near.
 * 2 - _allowMove - bool - whether or not to add a trigger which allows the garrison to leave the building.
 * 3 - _soldierConfigs - array - array of available entries to spawn soldiers from.
 * returns - BOOL - true if success, false if failed.
 *
 * Exampe:
 * ['IND_F', position player] call s39_fnc_garrisonNearBuilding;
 *
*/

//Define parameters
_faction = param [0,"",[""]];
_pos = param [1,[0,0,0],[position player]];
_allowMove = param [2,false,[false]];
_soldierConfigs = _this select 3;

//Get our list of available troops to spawn, as well as their side.
_side = 1;

_singleSolder = _soldierConfigs select 0;

_sideNum = getNumber (_singleSolder >> 'side');

switch (_sideNum) do {

    case 0: {
      _side = EAST;
    };

    case 1: {
      _side = WEST;
    };

    case 2: {
      _side = resistance;
    };

    default {
      _side = EAST;
    };

};

// Find our nearest building and get its number of available positions as well
// as their locations
_bld = nearestBuilding _pos;
_numPositions = count([_bld] call BIS_fnc_buildingPositions);

_bldPosLocs = [];
for "_i" from 0 to (_numPositions - 1) do {

 _pos = _bld buildingPos _i;
 _bldPosLocs pushBack _pos;

};

//sanity check to prevent huge garrisons of troops in a single building.
if (_numPositions > 8) then {
  _numPositions = 8;
};
//Create our group of soldiers and spawn it.
_troopsToSpawn = [];

for "_i" from 1 to _numPositions do {
  _soldier = selectRandom _soldierConfigs;
  _troopsToSpawn pushBack configName _soldier;
};

_spawnedGroup = [_pos, _side, _troopsToSpawn] call BIS_fnc_spawnGroup;

//Now we move the soldiers into the building and garrison garrison them
//as well as add them to zeus and add our money eventhandler
_soldiers = units _spawnedGroup;

{
 _soldier = _x;
 _pos = selectRandom _bldPosLocs;
 _soldier setPosATL _pos;
 _bldPosLocs deleteAt (_bldPosLocs find _pos);
 _soldier disableAI "PATH";
 {_x addCuratorEditableObjects [[_soldier] , false];} forEach allCurators;

} forEach _soldiers;

if (_allowMove) then {

  //Create our close-in allowMove trigger so units will move out of the
  //building is players get too close.
  _trg = createTrigger ["EmptyDetector", getPos leader _spawnedGroup, true];

  _syncUnits = { _trg synchronizeObjectsAdd [_x]; } forEach _soldiers;

  _trg setTriggerArea [25, 25, 0, false, 25];

  _trg setTriggerActivation ["WEST", "PRESENT", false];
  _trg setTriggerStatements [

   "this",
   "[thisTrigger] call s39_fnc_allowMove;",
   ""
  ];

};

//Return true
TRUE
