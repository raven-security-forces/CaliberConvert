/*

Generates some secondary objectives to be inserted into the firefights.
Params:

 0 - Array - Center of FF location, or manually set.
 1 - Integer - Radius we'll be searching for positions to spawn objectives in.

*/

_ffLocation = param [0, [0,0,0], [[]]];
_radius = param [1, 0, [0]];

//Now some objective location definitions.
_evidenceTable = [[
	["Land_RattanTable_01_F",[0.20752,-0.708008,0],150.215,1,0,[0,-0],"","",true,false],
	["Land_Money_F",[0.358887,-0.421875,0.813],198.726,1,0,[0,0],"money2","",true,false],
	["Land_Money_F",[0.216309,-0.582031,0.813],0,1,0,[0,0],"money1","",true,false],
	["Land_MobilePhone_smart_F",[0.0200195,-0.77832,0.813],134.305,1,0,[0,-0],"opforCom","",true,false],
	["Land_Money_F",[0.48877,-0.748047,0.813],333.435,1,0,[0,0],"money3","",true,false],
	["Land_Map_F",[-0.0102539,-0.993164,0.813],84.579,1,0,[0,0],"opforMap","",true,false]
], "evidenceTable", "B_Quadbike_01_F"];

_smallCache = [[
	["rhs_weapon_crate",[0.0341797,-1.10791,0],177.599,1,0,[],"smallCacheBox","",true,false],
	["rhs_mags_crate",[0.86377,0.774414,0],246.66,1,0,[],"smallAmmoBox1","",true,false],
	["rhs_mags_crate",[-0.199707,1.43164,0],0,1,0,[],"smallAmmoBox2","",true,false],
	["Land_BagFence_Round_F",[1.34082,1.58887,-0.00130129],225,1,0,[],"","",true,false],
	["Land_BagFence_Round_F",[-1.38232,1.6665,-0.00130129],135,1,0,[],"","",true,false],
	["Land_BagFence_Round_F",[1.29834,-2.05371,-0.00130129],315,1,0,[],"","",true,false],
	["Land_BagFence_Round_F",[-1.42432,-1.97607,-0.00130129],45,1,0,[],"","",true,false]
], "smallCache", "B_MRAP_01_F"];

_bigCache = [[
	["Box_IND_Ammo_F",[1.05078,0.507324,0],95.9177,1,0,[0,-0],"bigCacheAmmo1","",true,false],
	["Land_EmergencyBlanket_01_stack_F",[-0.716309,-1.10645,0],26.2363,1,0,[0,0],"","",true,false],
	["Land_FirstAidKit_01_closed_F",[-0.768555,-1.09326,0.255],318.711,1,0,[0,0],"","",true,false],
	["Box_FIA_Wps_F",[0.526367,-0.720703,0],318.009,1,0,[0,0],"bigCacheTgt","",true,false],
	["Land_Sleeping_bag_folded_F",[-0.478516,-1.62695,0],318.009,1,0,[0,0],"","",true,false],
	["Box_IND_Grenades_F",[1.75439,0.137695,0],194.732,1,0,[0,0],"bigCacheAmmo2","",true,false],
	["Land_WaterBottle_01_pack_F",[1.46191,-1.09668,0],318.009,1,0,[0,0],"","",true,false],
	["Land_WaterBottle_01_pack_F",[1.47998,-1.36279,0],74.3657,1,0,[0,0],"","",true,false],
	["Land_FoodSacks_01_small_brown_F",[1.95459,-0.668945,0],72.8206,1,0,[0,0],"","",true,false]
], "bigCache", "B_MRAP_01_F"];

//safe size B_Plane_CAS_01_dynamicLoadout_F
_fuelDrop = [[
	["Land_Tank_rust_F",[1.42529,-0.492188,0],89.319,1,0,[0,0],"fuelDropTgt","",true,false],
	["Land_MetalBarrel_F",[1.62939,3.0376,0],101.105,1,0,[0,-0],"","",true,false],
	["B_G_Van_01_fuel_F",[-2.71094,1.43262,0.127322],226.807,1,0,[0,0],"fuelDropTruck","",true,false],
	["Land_MetalBarrel_F",[2.63477,3.10205,0],116.111,1,0,[0,-0],"","",true,false],
	["Land_MetalBarrel_F",[3.31055,2.4917,0],206.1,1,0,[0,0],"","",true,false],
	["Land_PaperBox_closed_F",[4.11426,0.890625,0],344.319,1,0,[0,0],"","",true,false],
	["Land_MetalBarrel_empty_F",[1.30127,4.06445,0],326.115,1,0,[0,0],"","",true,false],
	["Land_MetalBarrel_empty_F",[0.544922,4.37451,0],206.115,1,0,[0,0],"","",true,false],
	["Land_Pallet_F",[4.31641,-1.34912,0],14.3192,1,0,[0,0],"","",true,false],
	["Land_MetalBarrel_F",[4.92725,-0.234375,0],299.315,1,0,[0,0],"","",true,false],
	["Land_MetalBarrel_F",[2.62598,4.21924,0],206.1,1,0,[0,0],"","",true,false],
	["Land_MetalBarrel_empty_F",[1.37939,4.94043,0],146.115,1,0,[0,-0],"","",true,false],
	["Land_CanisterFuel_F",[3.51807,3.78369,0],146.114,1,0,[0,-0],"","",true,false],
	["Land_CanisterFuel_F",[3.62451,4.28711,0],206.137,1,0,[0,0],"","",true,false],
	["Land_MetalBarrel_F",[5.67822,-0.206543,0],14.3242,1,0,[0,0],"","",true,false]
], "fuelDrop", "B_Plane_CAS_01_dynamicLoadout_F"];

_dataRelay = [[
	["Land_PortableGenerator_01_F",[1.56152,0.649902,0],165.637,1,0,[0,-0],"dataRelayTgt_1","",true,false],
	["Land_CampingChair_V1_F",[1.53662,-0.746094,0],254.929,1,0,[0,0],"","",true,false],
	["Land_BagFence_Round_F",[1.50439,-1.64258,-0.00130129],0,1,0,[0,0],"","",true,false],
	["Land_CampingTable_small_F",[2.01367,-0.535645,0],239.935,1,0,[0,0],"","",true,false],
	["Land_BagFence_Round_F",[1.64551,1.66895,-0.00130129],179.65,1,0,[0,-0],"","",true,false],
	["Land_Laptop_unfolded_F",[1.94873,-0.621094,0.813],245.895,1,0,[0,0],"dataRelayTgt_2","",true,false],
	["Land_BagFence_Long_F",[-2.34229,-0.238281,-0.000999928],268.901,1,0,[0,0],"","",true,false],
	["Land_SatelliteAntenna_01_F",[2.20117,0.278809,0],60.0055,1,0,[0,0],"dataRelayTgt_3","",true,false],
	["Land_BagFence_Long_F",[-1.36084,2.24414,-0.000999928],314,1,0,[0,0],"","",true,false],
	["Land_BagFence_Long_F",[-1.22021,-2.58936,-0.000999928],39.655,1,0,[0,0],"","",true,false],
	["Land_BagFence_Round_F",[3.29639,-0.0849609,-0.00130129],270.265,1,0,[0,0],"","",true,false]
], "dataRelay", "B_MRAP_01_F"];

_heliCrashSite = [[
	["Land_ShellCrater_01_F",[0.146973,-1.85693,0],0,1,0,[0,0],"","",true,false],
	["CraterLong_02_F",[0.982422,-4.49561,-0.0401669],150,1,0,[0,-0],"","",true,false],
	["Land_ShellCrater_02_decal_F",[-2.78662,1.91992,0],0,1,0,[0,0],"","",true,false],
	["Land_ShellCrater_02_decal_F",[3.70361,1.66992,0],90,1,0,[0,-0],"","",true,false],
	["CraterLong_02_small_F",[-1.21533,6.04932,0],0,1,0,[0,0],"","",true,false],
	["Land_Wreck_Heli_02_Wreck_01_F",[-0.428711,-4.11182,-0.517661],330,1,0,[0,0],"heliCrashTgt","",true,false],
	["Land_ShellCrater_02_decal_F",[-3.05469,-4.82129,0],270,1,0,[0,0],"","",true,false],
	["Land_ShellCrater_02_decal_F",[3.43506,-5.07129,0],180,1,0,[0,0],"","",true,false],
	["Land_Wreck_Heli_02_Wreck_02_F",[-1.73828,5.02637,-0.540195],0,1,0,[0,0],"","",true,false],
	["Land_Wreck_Heli_02_Wreck_04_F",[4.9209,-4.69922,0],60,1,0,[0,0],"","",true,false],
	["Land_Wreck_Heli_02_Wreck_03_F",[-2.12109,-6.96973,0],270,1,0,[0,0],"","",true,false]
], "heliCrashSite", "B_Plane_CAS_01_dynamicLoadout_F"];

_possibleObjs = [_smallCache, _bigCache, _fuelDrop, _dataRelay, _heliCrashSite];

_objective = selectRandom _possibleObjs;

_objects = _objective select 0;
_type = _objective select 1;
_safeZoneArea = _objective select 2;

_objSpawnLoc = [_ffLocation, 5, _radius, 3, 0, 20, 0] call BIS_fnc_findSafePos;
[_objSpawnLoc, random 360, _objects] call BIS_fnc_ObjectsMapper;

switch (_type) do {
  case "evidenceTable" : {

    [
    	opforCom,											// Object the action is attached to
    	"Secure Intel",										// Title of the action
    	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",	// Idle icon shown on screen
    	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",	// Progress icon shown on screen
    	"_this distance _target < 3",						// Condition for the action to be shown
    	"_caller distance _target < 3",						// Condition for the action to progress
    	{},													// Code executed when action starts
    	{},													// Code executed on every progress tick
    	{ [true, ["foundIntelComplete", "ffAreaObj"], ["","Found Intel",""], objNull, "SUCCEEDED"] call BIS_fnc_taskCreate; },				// Code executed on completion
    	{},													// Code executed on interrupted
    	[],													// Arguments passed to the scripts as _this select 3
    	10,													// Action duration [s]
    	0,													// Priority
    	true,												// Remove on completion
    	false												// Show in unconscious state
    ] remoteExec ["BIS_fnc_holdActionAdd", 0, opforCom];

		{ _x addCuratorEditableObjects [[opforCom],false];} forEach allCurators;

  };

  case "smallCache" : {

		smallCacheBox setVariable ["ace_cookoff_enableammocookoff", false, true];
		smallAmmoBox1 setVariable ["ace_cookoff_enableammocookoff", true, true];
		smallAmmoBox2 setVariable ["ace_cookoff_enableammocookoff", false, true];
		smallCacheBox addMPEventHandler ["MPKilled", {[true, ["smallCacheDestroyed", "ffAreaObj"], ["","Destroyed Cache",""], objNull, "SUCCEEDED"] call BIS_fnc_taskCreate;}];
		{ _x addCuratorEditableObjects [[smallCacheBox, smallAmmoBox1, smallAmmoBox2],false];} forEach allCurators;
	};

  case "bigCache" : {

		bigCacheTgt setVariable ["ace_cookoff_enableammocookoff", false, true];
		bigCacheAmmo1 setVariable ["ace_cookoff_enableammocookoff", true, true];
		bigCacheAmmo2 setVariable ["ace_cookoff_enableammocookoff", false, true];
		bigCacheTgt addMPEventHandler ["MPKilled", {[true, ["bigCacheDestroyed", "ffAreaObj"], ["","Destroyed Cache",""], objNull, "SUCCEEDED"] call BIS_fnc_taskCreate;}];
		{ _x addCuratorEditableObjects [[bigCacheTgt, bigCacheAmmo1, bigCacheAmmo2],false];} forEach allCurators;
	};

  case "fuelDrop" : {

		fuelDropTgt addMPEventHandler ["MPKilled", {[true, ["fuelDropDestroyed", "ffAreaObj"], ["","Destroyed fuel cache",""], objNull, "SUCCEEDED"] call BIS_fnc_taskCreate;}];
		{ _x addCuratorEditableObjects [[fuelDropTgt],false];} forEach allCurators;
	};

  case "dataRelay" : {

    [
    	dataRelayTgt_2,											// Object the action is attached to
    	"Disable Comms",										// Title of the action
    	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa",	// Idle icon shown on screen
    	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa",	// Progress icon shown on screen
    	"_this distance _target < 3",						// Condition for the action to be shown
    	"_caller distance _target < 3",						// Condition for the action to progress
    	{},													// Code executed when action starts
    	{},													// Code executed on every progress tick
    	{ [true, ["disabledCommsComplete", "ffAreaObj"], ["","Disabled Comms",""], objNull, "SUCCEEDED"] call BIS_fnc_taskCreate; },				// Code executed on completion
    	{},													// Code executed on interrupted
    	[],													// Arguments passed to the scripts as _this select 3
    	10,													// Action duration [s]
    	0,													// Priority
    	true,												// Remove on completion
    	false												// Show in unconscious state
    ] remoteExec ["BIS_fnc_holdActionAdd", 0, dataRelayTgt_2];
		{ _x addCuratorEditableObjects [[dataRelayTgt_2],false];} forEach allCurators;

  };

  case "heliCrashSite" : {

    [
    	heliCrashTgt,											// Object the action is attached to
    	"Secure Black Box",										// Title of the action
    	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",	// Idle icon shown on screen
    	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",	// Progress icon shown on screen
    	"_this distance _target < 3",						// Condition for the action to be shown
    	"_caller distance _target < 3",						// Condition for the action to progress
    	{},													// Code executed when action starts
    	{},													// Code executed on every progress tick
    	{ [true, ["secureBlackboxComplete", "ffAreaObj"], ["","Secured Black Box",""], objNull, "SUCCEEDED"] call BIS_fnc_taskCreate; },				// Code executed on completion
    	{},													// Code executed on interrupted
    	[],													// Arguments passed to the scripts as _this select 3
    	12,													// Action duration [s]
    	0,													// Priority
    	true,												// Remove on completion
    	false												// Show in unconscious state
    ] remoteExec ["BIS_fnc_holdActionAdd", 0, heliCrashTgt];

		["test_EmptyObjectForSmoke", (position heliCrashTgt), [],0,"CAN_COLLIDE"] remoteExec ["createVehicle", 0, true];

		{ _x addCuratorEditableObjects [[heliCrashTgt],false];} forEach allCurators;

  };

  default {
    false;
  };

};
