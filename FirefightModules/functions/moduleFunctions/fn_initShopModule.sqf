// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = param [2,true,[true]];
//Just for grins
_activated = true;

//Global variable definitions
allGameRifles = ["rifles"] call s39_fnc_get_configs;
allGamePistols = ["pistols"] call s39_fnc_get_configs;
allGameLaunchers = ["launchers"] call s39_fnc_get_configs;
allGameExplosives = ["explosives"] call s39_fnc_get_configs;
allGameUtility = ["utility"] call s39_fnc_get_configs;
allGameAmmo = ["ammo"] call s39_fnc_get_configs;
allGamePacks = ["packs"] call s39_fnc_get_configs;
allGameHeadgear = ["headgear"] call s39_fnc_get_configs;
allGameUniforms = ["uniforms"] call s39_fnc_get_configs;
allGameVests = ["vests"] call s39_fnc_get_configs;
allGameWepAccs = ["wep_accs"] call s39_fnc_get_configs;
allGameBoxes = ["armoryBoxes"] call s39_fnc_get_configs;
allGameFactions = ["all"] call s39_fnc_gui_get_factions;
gameFactionsWest = ["WEST"] call s39_fnc_gui_get_factions;
gameFactionsEast = ["EAST"] call s39_fnc_gui_get_factions;
gameFactionsIndep = ["GUER"] call s39_fnc_gui_get_factions;
armoryOutput = objNull;
initWallet = false;
//End Global variable defs

if (_activated) then {
	 _syncedObjects = synchronizedObjects _logic;
   _outputBoxes = [];
   _addViewItems = [];

   {
		 _cfgName = typeOf _x;
     if(_cfgName in allGameBoxes) then {
       _outputBoxes pushBack _x;
     } else {
       _addViewItems pushBack _x
     };
   } forEach _syncedObjects;

  armoryOutput = _outputBoxes select 0;
	initArmory = _logic getVariable "InitArmory";
	initQMaster = _logic getVariable "InitQMaster";
	initRecruit = _logic getVariable "InitRecruit";

	{
		if (initArmory) then {
			[_x, ["Shop the arsenal", {createDialog "spartekArmoryDialog"},[],1.5,true,true,"","true",5]] remoteExec ["addAction"];
		};

		if (initQMaster) then {
			[_x, ["Shop the quartermaster", {createDialog "spartekQuartermasterDialog"},[],1.5,true,true,"","true",5]] remoteExec ["addAction"];
		};

		if (initRecruit) then {
			[_x, ["Get reinforcements", {createDialog "recruitDisplay"},[],1.5,true,true,"","true",5]] remoteExec ["addAction"];
		};


	} forEach _addViewItems;

   initWallet = _logic getVariable "InitWallet";
};

if (initWallet) then {
	walletHandlerRes = addMissionEventHandler ["PlayerConnected", {
		params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];
		waitUntil { not isNull player };
		_pWallet = [] call s39_fnc_initWallet;
		_chkWalletAction = player addAction [ "Check Wallet", { [] call s39_fnc_checkWallet; }, [], 1.5, true, true, "", "_this == _originalTarget", -1, false, "", "" ];
		}];

	walletRespawnHandlerRes = addMissionEventHandler ["EntityRespawned", {
		params ["_entity", "_corpse"];
		if (isNull _corpse) exitWith {};
		_corpse removeAction 0;
		_entity addAction ["Check Wallet", { [] spawn s39_fnc_checkWallet;}, [], 1.5, true, true, "", "_this == _originalTarget", -1, false, "", ""];
	}];
};
// Module function is executed by spawn command, so returned value is not necessary, but it's good practice.
true
