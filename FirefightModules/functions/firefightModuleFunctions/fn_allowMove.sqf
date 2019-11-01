_syncedTrigger = _this select 0;
_groups = [];
_allUnits = [];

_syncedObjects = synchronizedObjects _syncedTrigger;

{_groups pushBack group _x;} forEach _syncedObjects;

{_allUnits append units _x} forEach _groups;

{_x enableAI "PATH"; _x setUnitPos "AUTO";} forEach _allUnits;

{_x setBehaviour "COMBAT";_x setCombatMode "RED";_x setSpeedMode "NORMAL"; [_x] call CBA_fnc_taskDefend;} forEach _groups;
