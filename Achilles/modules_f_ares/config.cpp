class CfgPatches
{
	class achilles_modules_f_ares
	{
		weapons[]={};
		requiredVersion=0.1;
		author="Anton Struyk";
		authorUrl="https://github.com/astruyk/";
		version="1.8.1";
		versionStr="1.8.1";
		versionAr[]={1,8,1};
		units[]=
		{
		"Ares_Module_Dev_Tools_Create_Mission_SQF",	
		"Ares_Module_Spawn_Submarine",
		"Ares_Module_Spawn_Trawler",		
		};
		requiredAddons[]=
		{
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Modules_F",
			"A3_Modules_F_Curator",
			"A3_Modules_F_Orange",
			"achilles_language_f",
			"achilles_functions_f_ares",
			"achilles_functions_f_achilles",
			"achilles_data_f_achilles",
			"achilles_data_f_ares",
			"cba_main"
		};
	};
};
class CfgFunctions
{
	class Ares
	{
		class DevToolModules
		{
			file="\achilles\modules_f_ares\DevTools\functions";
			class CreateMissionSQF
			{
			};
		};
		class SpawnModules
		{
			file="\achilles\modules_f_ares\Spawn\functions";
			class SpawnSubmarine;
			class SpawnTrawler;
		};
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class Achilles_fac_Arsenal: NO_CATEGORY
	{
		displayName="$STR_AMAE_ARSENAL";
	};
	class Achilles_fac_Behaviours: NO_CATEGORY
	{
		displayName="$STR_AMAE_AI_BEHAVIOUR";
	};
	class Achilles_fac_DevTools: NO_CATEGORY
	{
		displayName="$STR_AMAE_DEV_TOOLS";
	};
	class Achilles_fac_Equipment: NO_CATEGORY
	{
		displayName="$STR_AMAE_EQUIPMENT";
	};
	class Achilles_fac_Player: NO_CATEGORY
	{
		displayName="$STR_AMAE_PLAYERS";
	};
	class Achilles_fac_Reinforcements: NO_CATEGORY
	{
		displayName="$STR_AMAE_REINFORCEMENTS";
	};
	class Achilles_fac_Spawn: NO_CATEGORY
	{
		displayName="$STR_AMAE_SPAWN";
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
	class Ares_Module_Base: Module_F
	{
		mapSize=1;
		author="Anton Struyk";
		vehicleClass="Modules";
		category="Ares";
		side=7;
		scope=1;
		scopeCurator=1;
		displayName="Ares Module Base";
		icon="\achilles\data_f_ares\icons\icon_default.paa";
		picture="\achilles\data_f_ares\icons\icon_default.paa";
		portrait="\achilles\data_f_ares\icons\icon_default.paa";
		function="";
		functionPriority=1;
		isGlobal=2;
		isTriggerActivated=0;
		isDisposable=0;
		dlc="Ares";
		class Arguments
		{
		};
		class ModuleDescription: ModuleDescription
		{
			description="Ares Module Base";
		};
	};
	
	class Ares_Dev_Tools_Module_Base: Ares_Module_Base
	{
		Category="Achilles_fac_DevTools";
	};
	class Ares_Module_Dev_Tools_Create_Mission_SQF: Ares_Dev_Tools_Module_Base
	{
		scopeCurator=1;
		displayName="$STR_AMAE_COPY_MISSION_SQF";
		function="Ares_fnc_CreateMissionSQF";
		icon="\achilles\data_f_achilles\icons\icon_position.paa";
		portrait="\achilles\data_f_achilles\icons\icon_position.paa";
	};

	class Ares_Spawn_Module_Base: Ares_Module_Base
	{
		Category="Achilles_fac_Spawn";
	};
	class Ares_Module_Spawn_Submarine: Ares_Spawn_Module_Base
	{
		scopeCurator=1;
		displayName="$STR_AMAE_SUBMARINE";
		function="Ares_fnc_SpawnSubmarine";
		icon="\achilles\data_f_achilles\icons\icon_submarine.paa";
		portrait="\achilles\data_f_achilles\icons\icon_submarine.paa";
	};
	class Ares_Module_Spawn_Trawler: Ares_Spawn_Module_Base
	{
		scopeCurator=1;
		displayName="$STR_AMAE_TRAWLER";
		function="Ares_fnc_SpawnTrawler";
		icon="\achilles\data_f_achilles\icons\icon_trawler.paa";
		portrait="\achilles\data_f_achilles\icons\icon_trawler.paa";
	};
};
class cfgMods
{
	author="";
	timepacked="1580181270";
};
