// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = param [2,true,[true]];
//Just for grins
_activated = true;

//Global variable definitions
allGameMapMarkers = [];

allGameFactions = ["all"] call s39_fnc_gui_get_factions;
gameFactionsWest = ["WEST"] call s39_fnc_gui_get_factions;
gameFactionsEast = ["EAST"] call s39_fnc_gui_get_factions;
gameFactionsIndep = ["GUER"] call s39_fnc_gui_get_factions;

if (_activated) then {
	 _syncedObjects = synchronizedObjects _logic;
   _locationModules = [];
   _addViewItems = [];

   {
     if( typeOf _x == "s39_firefightPositionModule") then {
       _locationModules pushBack _x;
     } else {
       _addViewItems pushBack _x
     };
   } forEach _syncedObjects;

  {
    _displayName = _x getVariable "Name";
    _skirmishLocation = str (_x getVariable "skirmishLocation");

		if (_displayName == "Unnamed") then {
			_displayName = text nearestLocation [(parseSimpleArray _skirmishLocation), ""];
		};

    allGameMapMarkers pushBack [_displayName, _skirmishLocation];
  } forEach _locationModules;
	s39_ff_module_AddMoneyVal = _logic getVariable "MoneyToAdd";

	{
		[_x, ["Open Skirmish Display", { createDialog "skirmishDisplay"; }, [], 1.5, true, true, "", "true", 10, false, "", ""]] remoteExec ["addAction"];
	} forEach _addViewItems;

   //Broadcast our variables now;
	 publicVariable "allGameMapMarkers";
};
// Module function is executed by spawn command, so returned value is not necessary, but it's good practice.
true
