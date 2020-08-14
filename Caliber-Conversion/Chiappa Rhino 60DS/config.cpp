class CfgPatches
{
    class RSF_Chiappa_Conversion
    {
    name = "RSF Chiappa Rhino 60DS Conversion Mod";
    author = "Nero";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
    requiredAddons[] = 
	{
	"A3_Weapons_F",
	"ace_ballistics",
	"ace_common",
	"ace_smallarms",
	"ace_realisticnames",
	"cba_jr"
	};
    units[] = {};
    weapons[] = {};
    };
};

class CfgWeapons
{
	class Pistol_Base_F;
	
	class hgun_Pistol_heavy_02_F : Pistol_Base_F
	{
	magazineWell[] = {"RSF_9x21_Chiappa"};
	};
};

class CfgMagazines
{
	class 11Rnd_45ACP_Mag;

	class 6Rnd_45ACP_Cylinder : 11Rnd_45ACP_Mag
	{
	ammo = "B_9x21_Ball";	
	descriptionShort = "Caliber: 9x21mm<br />Rounds: 6<br />Used in: Chiappa Rhino";	
	displayName = "9x21 6Rnd Cylinder";	
	initSpeed = 430;
	};	
};

class CfgMagazineWells
{
	class RSF_9x21_Chiappa
	{
	BI_mags[] = {"6Rnd_45ACP_Cylinder"};	
	};
};