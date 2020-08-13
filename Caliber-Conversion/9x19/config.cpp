class CfgPatches
{
    class RSF_9x19_Conversion
    {
    name = "RSF 9x19 Conversion Mod";
    author = "Nero";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
    requiredAddons[] = 
	{
	"A3_Weapons_F",
	"A3_Weapons_F_Exp",
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

#include "faction_config_mp443.cpp"

class CfgWeapons
{
	class Pistol_Base_F;
	class Rifle_Short_Base_F;

	class hgun_P07_F : Pistol_Base_F
	{
	descriptionShort = "Handgun<br />Caliber: 9x19 mm";	
	magazines[] = {"16Rnd_9x21_Mag"};	
	magazineWell[] = {"RSF_9x19_P99","CBA_9x19_P08",};
	};

	class pdw2000_base_F : Rifle_Short_Base_F
	{
	descriptionShort = "Submachine Gun<br/>Caliber: 9x19 mm";	
	magazines[] = {"30Rnd_9x21_Mag"};
	magazineWell[] = {"RSF_9x19_CPW"};
	};

	class SMG_02_base_F : Rifle_Short_Base_F
	{
	descriptionShort = "Submachine Gun<br/>Caliber: 9x19 mm";	
	magazines[] = {"30Rnd_9x21_Mag_SMG_02"};
	magazineWell[] = {"CBA_9x19_ScorpionEvo3"};
	};	
	
	class hgun_Rook40_F : Pistol_Base_F
	{
	descriptionShort = "Handgun<br />Caliber: 9x19 mm";
	magazines[] = {"18Rnd_9x19_Mag"};
	magazineWell[] = {"RSF_9x19_MP443","CBA_9x19_MP443"};
	};
	
	class hgun_Pistol_01_F : Pistol_Base_F
	{
	descriptionShort = "Handgun<br />Caliber: 9x18 mm";	
	displayName = "Makarov PMM";
	magazines[] = {"10Rnd_9x21_Mag"};	
	magazineWell[] = {"RSF_9x18_PMM","CBA_9x18_PMM"};
	};
};

class CfgAmmo
{
	class ACE_9x19_Ball;
	
	// Tracer Ammo Variants of 9x19 mm Ball
	class RSF_9x19_Ball_T_G : ACE_9x19_Ball
	{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	nvgOnly = 0;
	};
	
	class RSF_9x19_Ball_T_R : ACE_9x19_Ball
	{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
	nvgOnly = 0;
	};
	
	class RSF_9x19_Ball_T_Y : ACE_9x19_Ball
	{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
	nvgOnly = 0;
	};

	// Experimental 9x18 Cartrige based off of 9x19
	// I've spend an hour breaking my head trying to calculate hit and airfriction and i can't find a working formular
	// I just hope the caliber is correct. Hit n airfriction is copied from 9x19
	class RSF_9x18_Ball: ACE_9x19_Ball
	{
	airFriction=-0.001234;
    typicalSpeed=420;
    hit=6;
	caliber = 2.268;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	
	// CPW
	class 30Rnd_9x21_Mag : CA_Magazine
	{
	ammo = "ACE_9x19_Ball";
	count = 30;	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: CPW";
	displayName = "9x19 mm 30Rnd Mag";
	displaynameshort = "9x19 mm";
	};
	class 30Rnd_9x21_Green_Mag : 30Rnd_9x21_Mag
	{
	ammo = "RSF_9x19_Ball_T_G";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: CPW";
	displayName = "9x19 mm 30Rnd Reload Tracer (Green) Mag";
	displaynameshort = "9x19 mm";
	};
	class 30Rnd_9x21_Red_Mag : 30Rnd_9x21_Mag
	{
	ammo = "RSF_9x19_Ball_T_R";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: CPW";
	displayName = "9x19 mm 30Rnd Reload Tracer (Red) Mag";
	displaynameshort = "9x19 mm";
	};
	class 30Rnd_9x21_Yellow_Mag : 30Rnd_9x21_Mag
	{
	ammo = "RSF_9x19_Ball_T_Y";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: CPW";
	displayName = "9x19 mm 30Rnd Reload Tracer (Yellow) Mag";
	displaynameshort = "9x19 mm";
	};
	
	// P99
	class 16Rnd_9x21_Mag : 30Rnd_9x21_Mag
	{
	mass = 5.8129;
	count = 15;	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P99";
	displayName = "9x19 mm 15Rnd Mag";
	displaynameshort = "9x19 mm";
	};
	class 16Rnd_9x21_green_Mag : 16Rnd_9x21_Mag
	{
	ammo = "RSF_9x19_Ball_T_G";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P99";
	displayName = "9x19 mm 15Rnd Reload Tracer (Green) Mag";
	displaynameshort = "9x19 mm";
	};
	class 16Rnd_9x21_red_Mag : 16Rnd_9x21_Mag
	{
	ammo = "RSF_9x19_Ball_T_R";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P99";
	displayName = "9x19 mm 15Rnd Reload Tracer (Red) Mag";
	displaynameshort = "9x19 mm";
	};
	class 16Rnd_9x21_yellow_Mag : 16Rnd_9x21_Mag
	{
	ammo = "RSF_9x19_Ball_T_Y";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P99";
	displayName = "9x19 mm 15Rnd Reload Tracer (Yellow) Mag";
	displaynameshort = "9x19 mm";
	};
	
	// MP-433 Custom mags
	class 18Rnd_9x19_Mag : 16Rnd_9x21_Mag
	{
	mass = 6.97548;
	count = 18;
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 18<br />Used in: MP-443";
	displayName = "9x19 mm 18Rnd Mag";
	displaynameshort = "9x19 mm";
	};
	class 18Rnd_9x19_green_Mag : 18Rnd_9x19_Mag
	{
	ammo = "RSF_9x19_Ball_T_G";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 18<br />Used in: MP-443";
	displayName = "9x19 mm 18Rnd Reload Tracer (Green) Mag";
	displaynameshort = "9x19 mm";
	};
	class 18Rnd_9x19_red_Mag : 18Rnd_9x19_Mag
	{
	ammo = "RSF_9x19_Ball_T_R";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 18<br />Used in: MP-443";
	displayName = "9x19 mm 18Rnd Reload Tracer (Red) Mag";
	displaynameshort = "9x19 mm";
	};
	class 18Rnd_9x19_yellow_Mag : 18Rnd_9x19_Mag
	{
	ammo = "RSF_9x19_Ball_T_Y";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 18<br />Used in: MP-443";
	displayName = "9x19 mm 18Rnd Reload Tracer (Yellow) Mag";
	displaynameshort = "9x19 mm";
	};

	// Scorpion EVO
	class 30Rnd_9x21_Mag_SMG_02 : 30Rnd_9x21_Mag
	{	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: Scorpion Evo 3 A1, MP5K";
	displayName = "9x19 mm 30Rnd Mag";
	displaynameshort = "9x19 mm";			
	};
	
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green : 30Rnd_9x21_Mag_SMG_02
	{
	ammo = "RSF_9x19_Ball_T_G";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: Scorpion Evo 3 A1, MP5K";
	displayName = "9x19 mm 30Rnd Reload Tracer (Green) Mag";
	displaynameshort = "9x19 mm";		
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red : 30Rnd_9x21_Mag_SMG_02
	{
	ammo = "RSF_9x19_Ball_T_R";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: Scorpion Evo 3 A1, MP5K";
	displayName = "9x19 mm 30Rnd Reload Tracer (Red) Mag";
	displaynameshort = "9x19 mm";		
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow : 30Rnd_9x21_Mag_SMG_02
	{
	ammo = "RSF_9x19_Ball_T_Y";	
	descriptionShort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: Scorpion Evo 3 A1, MP5K";
	displayName = "9x19 mm 30Rnd Reload Tracer (Yellow) Mag";
	displaynameshort = "9x19 mm";	
	};
	
	// Makarov PMM
	
	class 10Rnd_9x21_Mag : 16Rnd_9x21_Mag
	{
	ammo = "RSF_9x18_Ball";	
	descriptionShort = "Caliber: 9x18 mm<br />Rounds: 10<br />Used in: PMM";
	displayName = "9x18 mm 10Rnd Mag";
	displaynameshort = "9x18 mm";
	};
	class 12Rnd_9x18_Mag : 10Rnd_9x21_Mag
	{
	count = 12;
	descriptionShort = "Caliber: 9x18 mm<br />Rounds: 12<br />Used in: PMM";
	displayName = "9x18 mm 12Rnd Mag";	
	mass = 4.8;
	};
};

class CfgMagazineWells
{	
	class RSF_9x19_P99
	{
	BI_mags[] = {"16Rnd_9x21_Mag","16Rnd_9x21_green_Mag","16Rnd_9x21_red_Mag","16Rnd_9x21_yellow_Mag"};	
	};
	
	class RSF_9x19_CPW
	{
	BI_mags[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Green_Mag","30Rnd_9x21_Red_Mag","30Rnd_9x21_Yellow_Mag"};	
	};
	
	class CBA_9x19_ScorpionEvo3
	{
	BI_mags[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Green"};	
	};
	
	class RSF_9x19_MP443
	{
	BI_mags[] = {"18Rnd_9x19_Mag","18Rnd_9x19_green_Mag","18Rnd_9x19_red_Mag","18Rnd_9x19_yellow_Mag"};			
	};
	
	class RSF_9x18_PMM
	{
	BI_mags[] = {"10Rnd_9x21_Mag","12Rnd_9x18_Mag"};			
	};
	
};