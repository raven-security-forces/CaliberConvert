/*
 * Utility function created to clear firefights and objectives spawned by
 * the firefight module system.
 *
 * Params:
 * None.
 *
 * Returns:
 * Nothing.
 *
 * Exampe:
 * [] call s39_fnc_clearFirefight.
 *
*/

//Check if our task exists and bail if it doesn't.
_taskExists = ["ffAreaObj"] call BIS_fnc_taskExists;

if (!_taskExists) exitWith {_handle = [] spawn {hint "No skirmish to clear!"; sleep 3; hintSilent "";};};

//Set our loction and radius, then delete everything within it that radius.
_location = "ffAreaObj" call BIS_fnc_taskDestination;
_radius = 300;

{

  deleteVehicle _x;

} forEach nearestObjects [_location, ["all"], _radius];

//Delete our tasks that exist.

{
  _taskExists = [_x] call BIS_fnc_taskExists;
  if(_taskExists) then {
    [_x] call BIS_fnc_deleteTask;
  };
} forEach ["foundIntelComplete", "smallCacheDestroyed", "bigCacheDestroyed", "fuelDropDestroyed", "disabledCommsComplete", "secureBlackboxComplete", "ffAreaObj"];

_handle = [] spawn {hint "Skirmish cleared!"; sleep 3; hintSilent "";};
