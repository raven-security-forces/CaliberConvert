// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = param [2,true,[true]];
//Just for grins
_activated = true;

if (_activated) then {

  _moneyToLose = _logic getVariable "MoneyToLose";
  _syncedObjects = synchronizedObjects _logic;

  {

    _x setVariable ["moneyToLose", _moneyToLose];

  } forEach _syncedObjects;

  {

    _unit = _x;
    _unit addMPEventHandler ["MPKilled", {_moneyToLoseEH = (_this select 0) getVariable "moneyToLose"; _killer = _this select 1; [_killer, _moneyToLoseEH] call s39_fnc_loseMoney}];

  } forEach _syncedObjects;

};
