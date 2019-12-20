if(is3DEN) exitWith {false};

// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = param [2,true,[true]];
//Just for grins
_activated = true;
// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {
  _displayName = _logic getVariable ["Name", -1];
  _skirmishLocation = getPos _logic;
  _logic setVariable ["skirmishLocation", _skirmishLocation, true];
};
// Module function is executed by spawn command, so returned value is not necessary, but it's good practice.
true
