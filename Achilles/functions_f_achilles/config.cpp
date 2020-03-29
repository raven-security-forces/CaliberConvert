class CfgPatches
{
	class achilles_functions_f_achilles
	{
		weapons[]={};
		requiredVersion=0.1;
		author="ArmA 3 Achilles Mod Inc.";
		authorUrl="https://github.com/ArmaAchilles/AresModAchillesExpansion";
		version="1.0.0";
		versionStr="1.0.0";
		versionAr[]={0,1,0};
		units[]={};
		requiredAddons[]=
		{
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Functions_F_Mark",
			"A3_Modules_F",
			"A3_Modules_F_Curator",
		};
	};
};
class CfgFunctions
{
	class Achilles
	{
		project="Achilles";
		tag="Achilles";
		class Init
		{
			file="\achilles\functions_f_achilles\functions\init";
			class onCuratorStart;
		};
		class functions_f_common
		{
			file="\achilles\functions_f_achilles\functions\common";
			class sum;
			class pushBack;
			class TextToVariableName;
			class HigherConfigHierarchyLevel;
			class ClassNamesWhichInheritsFromCfgClass;
			class getAllTurretConfig;
			class weaponsAllTurrets;
			class getVehicleAmmo;
			class getAllTurrets;
			class getUnitAmmoDef;
			class setUnitAmmoDef;
			class setVehicleAmmo;
			class setMagazineAmmo;
			class setTurretAmmo;
			class checkLineOfFire2D;
			class dikToLetter;
			class getCuratorSelected;
			class deadlyExplosion;
			class disablingExplosion;
			class fakeExplosion;
			class spawn;
			class spawn_remote;
			class ShowChooseDialog;
			class showZeusErrorMessage;
			class log;
			class getLogics;
			class createDummyLogic;
			class isACELoaded;
			class returnChildren;
			class logicSelector;
			class updateStandardInventory;
			class updateVirtualArsenal;
			class getVirtualArsenal;
			class getWeaponsMuzzlesMagazines;
			class forceWeaponFire;
			class drawArrow3D;
			class drawRectangle3D;
			class vectAngleXY;
			class getDirPitchBank;
			class vectDirUpFromDirPitchBank;
			class arrayStdDev;
			class transferOwnership;
			class getAceMedicalFunction;
		};
		class interpolation
		{
			file="\achilles\functions_f_achilles\functions\interpolation";
			class interpolation_cubicBezier1D;
			class interpolation_cubicBezier1D_slope;
		};
		class selectUnit
		{
			file="\achilles\functions_f_achilles\functions\selectUnit";
			class switchUnit_start;
			class switchUnit_exit;
		};
		class changeAttributes
		{
			file="\achilles\functions_f_achilles\functions\changeAttributes";
			class changeAbility;
			class changePylonAmmo;
			class changeSideAttribute;
			class changeSide_local;
			class changeSkills;
			class damageComponents;
			class setSensors;
		};
		class functions_f_features
		{
			file="\achilles\functions_f_achilles\functions\features";
			class ACS_toggleGrouping;
			class ambientAnim;
			class ambientAnimGetParams;
			class Animation;
			class Chatter;
			class chute;
			class eject_passengers;
			class LaunchCM;
			class SwitchZeusSide;
			class CopyObjectsToClipboard;
			class PasteObjectsFromClipboard;
			class groupObjects;
			class ungroupObjects;
			class setCuratorVisionModes;
			class damageBuildings;
			class preplaceMode;
			class addBreachDoorAction;
			class breachStun;
			class setACEInjury;
			class setVanillaInjury;
			class suppressiveFire;
			class changeNVGBrightness;
			class createIED;
			class createSuicideBomber;
			class IED_DamageHandler;
			class setSRFrequencies;
			class setLRFrequencies;
			class effectFire;
			class instantBuildingGarrison;
			class changeAccessoires;
			class advancedPlaneCAS;
			class advancedHeliCAS;
			class advancedBlackfishCAS;
			class surrenderUnit;
		};
	};
	class A3_Mark
	{
		class Vehicles
		{
			delete garage;
		};
		class Achilles
		{
			file="\achilles\functions_f_achilles\functions\replacement";
			class garage;
			class garageZeus;
		};
	};
	class A3_Functions_F_Curator
	{
		class Curator
		{
			delete showCuratorAttributes;
			delete curatorObjectPlaced;
			delete curatorObjectEdited;
			delete toggleCuratorVisionMode;
		};
		class Achilles
		{
			file="\achilles\functions_f_achilles\functions\replacement";
			class showCuratorAttributes;
			class curatorObjectPlaced;
			class curatorObjectEdited;
			class toggleCuratorVisionMode;
		};
	};
};
class cfgWaypoints
{
	class Achilles
	{
		displayName="Achilles";
		class Fastroping
		{
			displayName="$STR_AMAE_FASTROPING_WP_NAME";
			displayNameDebug="FASTROPING";
			file="\achilles\functions_f_achilles\scripts\fn_wpFastrope.sqf";
			icon="\achilles\data_f_achilles\icons\icon_position.paa";
		};
		class Land
		{
			displayName="$STR_A3_CfgWaypoints_Land";
			displayNameDebug="LAND";
			file="\achilles\functions_f_achilles\scripts\fn_wpLand.sqf";
			icon="\achilles\data_f_achilles\icons\icon_position.paa";
		};
		class Paradrop
		{
			displayName="$STR_AMAE_PARADROP";
			displayNameDebug="PARADROP";
			file="\achilles\functions_f_achilles\scripts\fn_wpParadrop.sqf";
			icon="\achilles\data_f_achilles\icons\icon_dropzone.paa";
		};
		class SearchBuilding
		{
			displayName="$STR_AMAE_WP_SEARCH_BUILDING";
			displayNameDebug="SearchBuilding";
			file="\achilles\functions_f_achilles\scripts\fn_wpSearchBuilding.sqf";
			icon="\achilles\data_f_achilles\icons\icon_position.paa";
		};
		class Repair
		{
			displayName="$STR_AMAE_WP_REPAIR";
			displayNameDebug="Repair";
			file="\achilles\functions_f_achilles\scripts\fn_wpRepair.sqf";
			icon="\achilles\data_f_achilles\icons\icon_position.paa";
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1580181274";
};
