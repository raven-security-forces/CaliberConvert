class CfgPatches
{
	class rsf_reskin_f2000
	{
		name="RSF Reskins F2000";
		units[]=
		{
		};
		weapons[]=
		{
			"arifle_Mk20_GL_plain_F"
		};
		requiredVersion=;
		requiredAddons[]=
		{
		"A3_Weapons_F","A3_Weapons_F_Beta"
		};
		author="NeroTheHero111";
		authors[]=
		{
			"NeroTheHero111"
		};
		url="";
		version="0.0.1";
		versionStr="0.0.1";
	};

};

class CfgWeapons
{
	class arifle_Mk20_GL_F;
	class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F
	{
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_co.paa","\Weapon-Reskins\F2000-Variants\Tan\Data\mk20_utilities_tanfix_CO_2.paa"};
	};
};