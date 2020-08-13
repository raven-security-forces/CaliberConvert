class CfgPatches 
{
    class RSF_MG5_Conversion 
    {
    name = "RSF MG5 Conversion Mod";
    author = "Nero";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
    requiredAddons[] = 
	{
	"A3_Weapons_F_Mark",
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

#include "faction_config_navid.cpp"

class WeaponSlotsInfo;
class asdg_MuzzleSlot_762MG;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class CfgWeapons 
{
	class Rifle_Long_Base_F;
	class MMG_01_base_F : Rifle_Long_Base_F
	{
	descriptionShort = "Medium Machine Gun<br />Caliber: 7.62x51 mm";
	displayName = "MG5";
	magazines[] = {"150Rnd_93x64_Mag"};
	magazineWell[] = {"RSF_93x64_LINKS","CBA_762x51_LINKS"};	
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class CowsSlot : asdg_OpticRail1913 {};
			class MuzzleSlot : asdg_MuzzleSlot_762MG {};
			class PointerSlot : asdg_FrontSideRail {};
			class UnderBarrelSlot : asdg_UnderSlot {};
		};
	};

	class MMG_01_hex_F: MMG_01_base_F
    {
        displayName="MG5 (Hex)";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 246.9177;		
			class CowsSlot : asdg_OpticRail1913 {};
			class MuzzleSlot : asdg_MuzzleSlot_762MG {};
			class PointerSlot : asdg_FrontSideRail {};
			class UnderBarrelSlot : asdg_UnderSlot {};
		};
	};		

	class MMG_01_tan_F: MMG_01_hex_F
    {
        displayName="MG5 (Tan)";
    };
};

class CfgMagazines
{
	class CA_Magazine;
  
	class 150Rnd_93x64_Mag : CA_Magazine
	{
	ACE_isBelt = 1;
	ammo = "B_762x51_Ball";
	author = "Bohemia Interactive";
	count = 120;
	descriptionShort = "Caliber: 7.62x51mm<br />Rounds: 120<br />Used in: MG5";
	displayName = "7.62mm 120Rnd Mixed Box";
	displayNameShort = "";
	initSpeed = 768;
	lastRoundsTracer = 6;
	mass = 38;
	maxLeadSpeed = 25;
	maxThrowHoldTime = 2;
	maxThrowIntensityCoef = 1.4;
	minThrowIntensityCoef = 0.3;
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "";
	nameSound = "magazine";
	picture = "\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
	quickReload = 0;
	reloadAction = "";
	scope = 2;
	selectionFireAnim = "zasleh";
	simulation = "ProxyMagazines";
	tracersEvery = 5;
	type = 256;
	useAction = 0;
	useActionTitle = "";
	value = 1;
	weaponpoolavailable = 1;
	weight = 0;	
	};
	
	class 150Rnd_93x64_Mag_2 : 150Rnd_93x64_Mag
	{
	displayName = "7.62mm 120Rnd Box";	
	lastRoundsTracer = 0;	
	tracersEvery = 0;	
	};	
	
	class 150Rnd_93x64_Mag_Tracer : 150Rnd_93x64_Mag
	{
	displayName = "7.62mm 120Rnd Tracer Box";	
	lastRoundsTracer = 0;	
	tracersEvery = 1;	
	};	
};

class CfgMagazineWells
{
	class RSF_93x64_LINKS
	{
	BI_mags[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag_2","150Rnd_93x64_Mag_Tracer"};	
	};
};