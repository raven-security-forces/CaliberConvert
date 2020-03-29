class CfgPatches
{
	class achilles_data_f_achilles
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
			"A3_Structures_F"
		};
		addonRootClass="A3_Structures_F";
	};
};
class CfgVehicles
{
	class All;
	class FloatingStructure_F: All
	{
	};
	class RoadCone_L_F: FloatingStructure_F
	{
		scopeCurator=2;
	};
};
class cfgMusic
{
	class LeadTrack01a_F
	{
		duration=74;
		musicClass="Lead";
		name="This is War - Part 1";
	};
	class LeadTrack01b_F
	{
		duration=66;
		musicClass="Lead";
		name="This is War - Part 2";
	};
	class LeadTrack04a_F
	{
		musicClass="Action";
	};
	class LeadTrack03_F_EPA
	{
		musicClass="Action";
	};
	class LeadTrack02a_F_EPB
	{
		musicClass="Action";
	};
	class LeadTrack01a_F_EPB
	{
		musicClass="Action";
	};
	class LeadTrack02a_F_EPA
	{
		musicClass="Action";
	};
	class LeadTrack02b_F_EPA
	{
		musicClass="Action";
	};
	class Defcon
	{
		duration=193;
		musicClass="Stealth";
		name="A2 EW - Defcon";
	};
	class SkyNet
	{
		duration=233;
		musicClass="Stealth";
		name="A2 EW - Sky Net";
	};
	class Wasteland
	{
		duration=194;
		musicClass="Stealth";
		name="A2 EW - Wasteland";
	};
	class Fallout
	{
		duration=207;
		musicClass="Stealth";
		name="A2 EW - Fallout";
	};
	class Mad
	{
		duration=198;
		musicClass="Stealth";
		name="A2 EW - Mad";
	};
	class AmbientTrack04a_F
	{
		musicClass="Stealth";
	};
	class AmbientTrack01a_F
	{
		duration=184;
		musicClass="Stealth";
		name="The East Wind - No Voice";
	};
	class LeadTrack06_F
	{
		musicClass="Stealth";
	};
	class EventTrack01a_F_EPB
	{
		musicClass="Stealth";
	};
	class BackgroundTrack01a_F
	{
		musicClass="Calm";
	};
	class AmbientTrack03_F
	{
		musicClass="Calm";
	};
	class BackgroundTrack03_F
	{
		musicClass="Calm";
	};
	class EventTrack01a_F_Tacops
	{
		musicClass="Action";
	};
	class EventTrack01b_F_Tacops
	{
		musicClass="Action";
	};
	class EventTrack02a_F_Tacops
	{
		musicClass="Action";
	};
	class EventTrack02b_F_Tacops
	{
		musicClass="Action";
	};
	class EventTrack03a_F_Tacops
	{
		musicClass="Action";
	};
	class EventTrack03b_F_Tacops
	{
		musicClass="Action";
	};
};
class cfgMods
{
	author="";
	timepacked="1580181270";
};
