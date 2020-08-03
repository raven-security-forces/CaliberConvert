class CfgPatches
{
	class RSF_Cutscene_F
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.2;
		requiredAddons[] = {"FIR_AWS_Cutscene_F","A3_Map_Stratis","A3_Map_Altis","A3_Map_Stratis_Scenes_F","A3_Map_Altis_Scenes_F","A3_Map_VR_Scenes_F","A3_Map_Malden_Scenes_F","A3_Missions_F_Orange","A3_Map_Tanoa_Scenes_F"};
		
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class Stratis_intro1
		{
			directory = "RSF-Cutscene\rsf_stratis_cutscene.Stratis"; 
		};
		class Altis_intro1
		{
			directory = "RSF-Cutscene\rsf_stratis_cutscene.Stratis"; 
		};
		class Map_VR_anim01
		{
			directory = "RSF-Cutscene\rsf_stratis_cutscene.Stratis"; 
		};
		class Tanoa_intro1
		{
			directory = "RSF-Cutscene\rsf_stratis_cutscene.Stratis"; 
		};
		class Malden_intro
		{
			directory = "RSF-Cutscene\rsf_stratis_cutscene.Stratis"; 
		};
	};
};

class CfgMusic 
{

	class Funny_How_You_Sometimes_Find_Things
	{
		name = "Funny How You Sometimes Find Things";
		sound[] = {
				"RSF-Cutscene\music\The_Stolen_Orchestra_-_Funny_How_You_Sometimes_Find_Things2.ogg", 1.000000, 1.000000
		};
		duration = 361;
		musicClass = "Calm";
	};
};

class CfgAddons 
{
	class PreloadAddons 
	{
		delete FIR_AWS_Cutscene_F;
	
		class RSF_Cutscene_F
		{
			list[] = {
					"RSF_Cutscene_F",
			};
		};
	};
};