// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = param [2,true,[true]];
//Just for grins
_activated = true;

if (_activated) then {

  _syncedObjects = synchronizedObjects _logic;
  _moneyToAdd = _logic getVariable "MoneyToAdd";

  {

    _x setVariable ["moneyToAdd", _moneyToAdd];

  } forEach _syncedObjects;

  {

    _unit = _x;
    _unit addMPEventHandler ["MPKilled", {_moneyToAddEH = (_this select 0) getVariable "moneyToAdd"; _killer = _this select 1; [_killer, _moneyToAddEH] call s39_fnc_makeMoney}];

  } forEach _syncedObjects;

};
