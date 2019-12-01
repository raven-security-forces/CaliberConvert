/* Create a patrol..
 * Can be used on its own or in conjunection with other functions.
 *
 * Params:
 * 0 - _faction - Name of the facion you want soldiers from
 * 1 - _pos - position to spawn/garrison the soldiers near.
 * 2 - _soldierConfigs - array - array of available entries to spawn soldiers from.
 * returns - BOOL - true if success, false if failed.
 *
 * Exampe:
 * ["IND_F", 0,0,0, _soldierConfigs] call s39_fnc_createPatrol;
 *
*/

//Parameters
_faction = param [0,"",[""]];
_pos = param [1,[0,0,0],[position player]];
_soldierConfigs = _this select 2;

//Get our list of available troops to spawn, as well as their side.
_side = EAST;


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

_troopsToSpawn =[];

//Spawn the patrol group
for "_i" from 1 to 4 do {
  _soldier = selectRandom _soldierConfigs;
  _troopsToSpawn pushBack configName _soldier;
};

_spawnedGroup = [_pos, _side, _troopsToSpawn] call BIS_fnc_spawnGroup;
[_spawnedGroup, getPos leader _spawnedGroup, 100] call BIS_fnc_taskPatrol;

{
  _soldier = _x;
  {_x addCuratorEditableObjects [[_soldier] , false];} forEach allCurators;
} forEach units _spawnedGroup;

TRUE
