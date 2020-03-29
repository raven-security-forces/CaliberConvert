class CfgPatches
{
	class achilles_functions_f_ares
	{
		weapons[]={};
		requiredVersion=0.1;
		author="Anton Struyk";
		authorUrl="https://github.com/astruyk/";
		version="1.8.1";
		versionStr="1.8.1";
		versionAr[]={1,8,1};
		units[]={};
		requiredAddons[]=
		{
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Modules_F",
			"A3_Modules_F_Curator",
			"achilles_language_f"
		};
	};
};
class CfgFunctions
{
	class Ares
	{
		class functions_f_common
		{
			file="\achilles\functions_f_ares\common";
			class CreateLogic;
			class GetArrayDataFromUser;
			class GetFarthest;
			class GetGroupUnderCursor;
			class GetNearest;
			class GetPhoneticName;
			class GetSafePos;
			class GetUnitUnderCursor;
			class IsZeus;
			class LogMessage;
			class ShowZeusMessage;
			class StringContains;
			class WaitForZeus;
			class ExecuteCustomModuleCode;
			class RegisterCustomModule;
		};
		class functions_f_features
		{
			file="\achilles\functions_f_ares\features";
			class addIntel;
			class AddUnitsToCurator;
			class GenerateArsenalBlacklist;
			class GenerateArsenalDataList;
			class SearchBuilding;
			class TeleportPlayers;
			class ZenOccupyHouse;
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1580181267";
};
