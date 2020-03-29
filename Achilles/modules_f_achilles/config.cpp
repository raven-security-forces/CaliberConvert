class CfgPatches
{
	class achilles_modules_f_achilles
	{
		weapons[]={};
		requiredVersion=0.1;
		author="ArmA 3 Achilles Mod Inc.";
		authorUrl="https://github.com/ArmaAchilles/AresModAchillesExpansion";
		version="1.0.0";
		versionStr="1.0.0";
		versionAr[]={0,1,0};
		units[]=
		{
			"Achilles_ACE_Injury_Module",
			"Achilles_ACE_ImmersiveHeal_Module",
			"Achilles_Change_Ability_Module",
			"Achilles_DevTools_ShowInAnimViewer",
			"Achilles_Module_Player_Set_Frequencies",
			"Achilles_Module_Rotation",
			"Achilles_Nuke_Module",
			"Achilles_Module_Arsenal_CopyToClipboard",
			"Achilles_Module_Arsenal_Paste",
			"Achilles_Suppressive_Fire_Module",
			"Achilles_Module_Supply_Drop",
			"Achilles_CAS_Module",
		};
		requiredAddons[]=
		{
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Modules_F",
			"A3_Modules_F_Curator",
			"A3_Modules_F_Bootcamp_Misc",
			"ace_zeus",
			"zen_modules",
			"tfar_static_radios",
		};
	};
};
class CfgFunctions
{
	class Achilles
	{
		class Achilles_ACE_Function_Base
		{
			file="achilles\modules_f_achilles\ACE\functions";
			class ModuleACEInjury
			{
			};
			class ModuleACEImmersiveHeal
			{
			};
		};
		class Achilles_Arsenal_Function_Base
		{
			file="\achilles\modules_f_achilles\Arsenal\functions";
			class ArsenalCopyToClipboard
			{
			};
			class ArsenalPaste
			{
			};
		};
		class Achilles_Behaviours_Function_Base
		{
			file="\achilles\modules_f_achilles\Behaviours\functions";
			class BehaviourChangeAbility
			{
			};
		};
		class Achilles_DevTools_Function_Base
		{
			file="\achilles\modules_f_achilles\DevTools\functions";
			class DevToolsShowInAnimViewer
			{
			};
		};
		class Achilles_FireSupport_FunctionBase
		{
			file="\achilles\modules_f_achilles\FireSupport\functions";
			class ModuleFireSupportNuke
			{
			};
			class ModuleFireSupportSuppressiveFire
			{
			};
			class ModuleFireSupportCAS
			{
			};			
		};
		class Achilles_Objects_Function_Base
		{
			file="\achilles\modules_f_achilles\Objects\functions";
			class ObjectsRotation
			{
			};
		};
		class PlayerModules
		{
			file="\achilles\modules_f_achilles\Player\functions";
			class PlayerSetFrequencies
			{
			};
		};
		class Achilles_Reinforcements_Function_Base
		{
			file="\achilles\modules_f_achilles\Reinforcements\functions";
			class ReinforcementsSupplyDrop;
		};		
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class ace_zeus_Medical
	{
		displayName="ACE Medical";
	};
	class Achilles_fac_Buildings: NO_CATEGORY
	{
		displayName="$STR_AMAE_BUILDINGS";
	};
	class Achilles_fac_Objects: NO_CATEGORY
	{
		displayName="$STR_AMAE_OBJECTS";
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
	};
	class Achilles_Module_Base: Module_F
	{
		mapSize=1;
		author="Kex";
		vehicleClass="Modules";
		category="Achilles";
		side=7;
		scope=1;
		scopeCurator=1;
		displayName="Achilles Module Base";
		icon="\achilles\data_f_ares\icons\icon_default.paa";
		picture="\achilles\data_f_ares\icons\icon_default.paa";
		portrait="\achilles\data_f_ares\icons\icon_default.paa";
		function="";
		functionPriority=1;
		isGlobal=2;
		isTriggerActivated=0;
		isDisposable=0;
		dlc="Achilles";
		class Arguments
		{
		};
		class ModuleDescription: ModuleDescription
		{
			description="Achilles Module Base";
		};
	};
	class Enyo_Module_Base: Achilles_Module_Base
	{
		author="CreepPork_LV";
		category="Enyo";
		displayName="Enyo Module Base";
		dlc="Enyo";
		class ModuleDescription: ModuleDescription
		{
			description="Enyo Module Base";
		};
	};
	class All;
	class Thing: All
	{
	};
	class ModuleEmpty_F: Thing
	{
	};
	
	class Achilles_ACE_Module_Base: Achilles_Module_Base
	{
		category="ace_zeus_Medical";
		icon="achilles\data_f_achilles\icons\icon_default_unit.paa";
		picture="achilles\data_f_achilles\icons\icon_default_unit.paa";
		portrait="achilles\data_f_achilles\icons\icon_default_unit.paa";
	};
	class Achilles_ACE_Injury_Module: Achilles_ACE_Module_Base
	{
		scopeCurator=1;
		_generalMacro="Achilles_ACE_Injury_Module";
		displayName="$STR_AMAE_INJURY";
		function="Achilles_fnc_ModuleACEInjury";
	};
	class Achilles_ACE_ImmersiveHeal_Module: Achilles_ACE_Module_Base
	{
		scopeCurator=1;
		_generalMacro="Achilles_ACE_ImmersiveHeal_Module";
		displayName="$STR_AMAE_IMMERSIVE_HEAL";
		function="Achilles_fnc_ModuleACEImmersiveHeal";
	};
	
	class Achilles_Arsenal_Module_Base: Achilles_Module_Base
	{
		Category="ace_zeus_Utility";
		icon="\achilles\data_f_achilles\icons\icon_default_object.paa";
		portrait="\achilles\data_f_achilles\icons\icon_default_object.paa";
	};
	class Achilles_Module_Arsenal_CopyToClipboard: Achilles_Arsenal_Module_Base
	{
		scopeCurator=1;
		displayName="$STR_AMAE_COPY_TO_CLIPBOARD";
		function="Achilles_fnc_ArsenalCopyToClipboard";
		icon="\achilles\data_f_achilles\icons\icon_object.paa";
		portrait="\achilles\data_f_achilles\icons\icon_object.paa";
	};
	class Achilles_Module_Arsenal_Paste: Achilles_Arsenal_Module_Base
	{
		scopeCurator=1;
		displayName="$STR_AMAE_ARSENAL_PASTE";
		function="Achilles_fnc_ArsenalPaste";
		icon="\achilles\data_f_achilles\icons\icon_object.paa";
		portrait="\achilles\data_f_achilles\icons\icon_object.paa";
	};
	
	class Achilles_Behaviours_Module_Base: Achilles_Module_Base
	{
		Category="zen_modules_AI";
		icon="\achilles\data_f_achilles\icons\icon_default_unit.paa";
		portrait="\achilles\data_f_achilles\icons\icon_default_unit.paa";
	};
	class Enyo_Behaviours_Module_Base: Enyo_Module_Base
	{
		Category="zen_modules_AI";
		icon="\achilles\data_f_achilles\icons\icon_unit.paa";
		portrait="\achilles\data_f_achilles\icons\icon_unit.paa";
	};
	class Achilles_Change_Ability_Module: Achilles_Behaviours_Module_Base
	{
		scopeCurator=1;
		curatorCanAttach=1;
		_generalMacro="Achilles_Change_Ability_Module";
		displayName="$STR_AMAE_CHANGE_ABILITIES";
		function="Achilles_fnc_BehaviourChangeAbility";
	};

	class Achilles_Dev_Tools_Module_Base: Achilles_Module_Base
	{
		Category="Achilles_fac_DevTools";
	};

	class Achilles_Module_Manage_Advanced_Compositions: Achilles_Dev_Tools_Module_Base
	{
		scopeCurator=1;
		displayName="$STR_AMAE_ADVANCED_COMPOSITION";
		function="Achilles_fnc_DevTools_manageAdvancedCompositions";
	};
	class Achilles_DevTools_ShowInAnimViewer: Achilles_Dev_Tools_Module_Base
	{
		scopeCurator=1;
		_generalMacro="Achilles_DevTools_ShowInAnimViewer";
		displayName="$STR_AMAE_SHOW_IN_ANIM_VIEWER";
		function="Achilles_fnc_DevToolsShowInAnimViewer";
		icon="\achilles\data_f_achilles\icons\icon_unit.paa";
		portrait="\achilles\data_f_achilles\icons\icon_unit.paa";
	};
	
	class Achilles_FireSupport_ModuleBase: Achilles_Module_Base
	{
		category="Ordnance";
	};
	class Achilles_Nuke_Module: Achilles_FireSupport_ModuleBase
	{
		scopeCurator=1;
		_generalMacro="Achilles_Nuke_Module";
		displayName="$STR_AMAE_ATOMIC_BOMB";
		function="Achilles_fnc_ModuleFireSupportNuke";
		icon="\achilles\data_f_achilles\icons\icon_nuclear.paa";
		portrait="\achilles\data_f_achilles\icons\icon_nuclear.paa";
	};
	class Achilles_Suppressive_Fire_Module: Achilles_FireSupport_ModuleBase
	{
		scopeCurator=1;
		_generalMacro="Achilles_Suppressive_Fire_Module";
		displayName="$STR_AMAE_SUPPRESIVE_FIRE";
		function="Achilles_fnc_ModuleFireSupportSuppressiveFire";
		icon="\achilles\data_f_achilles\icons\icon_suppress.paa";
		portrait="\achilles\data_f_achilles\icons\icon_suppress.paa";
		curatorCanAttach=1;
	};
	class Achilles_CAS_Module: Achilles_FireSupport_ModuleBase
	{
		scopeCurator=1;
		_generalMacro="Achilles_CAS_Module";
		displayName="$STR_AMAE_ADVANCED_CAS";
		function="Achilles_fnc_ModuleFireSupportCAS";
		icon="\achilles\data_f_achilles\icons\icon_cas.paa";
		portrait="\achilles\data_f_achilles\icons\icon_cas.paa";
		curatorCanAttach=1;
	};
	
	class Achilles_Objects_Module_Base: Achilles_Module_Base
	{
		Category="Achilles_fac_Objects";
	};
	class Enyo_Objects_Module_Base: Enyo_Module_Base
	{
		category="Achilles_fac_Objects";
		icon="\achilles\data_f_achilles\icons\icon_object.paa";
		portrait="\achilles\data_f_achilles\icons\icon_object.paa";
	};
	class Achilles_Transfer_Ownership_Module: Achilles_Objects_Module_Base
	{
		scopeCurator=1;
		_generalMacro="Achilles_Transfer_Ownership_Module";
		displayName="$STR_AMAE_TRANSFER_OWNERSHIP";
		function="Achilles_fnc_ObjectsTransferOwnership";
		icon="\achilles\data_f_achilles\icons\icon_transferOwnership.paa";
		portrait="\achilles\data_f_achilles\icons\icon_transferOwnership.paa";
	};
	class Achilles_Module_Rotation: Achilles_Objects_Module_Base
	{
		scopeCurator=1;
		displayName="$STR_AMAE_ROTATION_MODULE";
		function="Achilles_fnc_ObjectsRotation";
		icon="\achilles\data_f_achilles\icons\icon_rotateObjects.paa";
		portrait="\achilles\data_f_achilles\icons\icon_rotateObjects.paa";
	};
	
	class Achilles_Player_Module_Base: Achilles_Module_Base
	{
		Category="TFAR";
	};
	class Achilles_Module_Player_Set_Frequencies: Achilles_Player_Module_Base
	{
		scopeCurator=1;
		displayName="$STR_AMAE_SET_FREQUENCIES";
		function="Achilles_fnc_PlayerSetFrequencies";
		icon="\achilles\data_f_achilles\icons\icon_TFARFreqs.paa";
		portrait="\achilles\data_f_achilles\icons\icon_TFARFreqs.paa";
	};
	
	class Achilles_Reinforcements_Module_Base: Achilles_Module_Base
	{
		Category="Achilles_fac_Reinforcements";
	};
	class Achilles_Module_Supply_Drop: Achilles_Reinforcements_Module_Base
	{
		scopeCurator=1;
		curatorCanAttach=1;
		displayName="$STR_AMAE_SUPPLY_DROP";
		function="Achilles_fnc_ReinforcementsSupplyDrop";
		icon="\achilles\data_f_achilles\icons\icon_supplyDrop.paa";
		portrait="\achilles\data_f_achilles\icons\icon_supplyDrop.paa";
	};
};
class cfgMods
{
	author="";
	timepacked="1580181272";
};
