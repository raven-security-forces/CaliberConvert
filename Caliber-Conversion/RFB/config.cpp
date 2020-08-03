class cfgPatches
{
    class RSF_RFB_Conversion
    {
    name = "RSF RFB Conversion Mod";
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

#include "faction_config_sdar.cpp"

class WeaponSlotsInfo;
class asdg_OpticRail1913;
class CfgWeapons
{
	class Rifle_Base_F;
	class SDAR_base_F : Rifle_Base_F
	{
	displayName="RFB";
	descriptionShort = "Assault Rifle Gun<br />Caliber: 7.62x51 mm";	
	modes[]= {"Single"};
	magazines[] = {"20Rnd_556x45_UW_mag"};
	magazineWell[] = {"CBA_762x51_M14","CBA_762x51_MkI_EMR"};
	class WeaponSlotsInfo: WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 81.571;	
			class CowsSlot : asdg_OpticRail1913 {};
		};
	};
	
	class arifle_SDAR_F : SDAR_base_F
	{
	displayName="RFB";	
	descriptionShort = "Assault Rifle Gun<br />Caliber: 7.62x51 mm";
	mass = 81.571;	
	};
};

class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class 20Rnd_556x45_UW_mag : 30Rnd_556x45_Stanag
	{
	ammo = "B_762x51_Ball";
	author = "Bohemia Interactive";
	count = 20;
	descriptionShort = "Caliber: 7.62x51 mm Dual Purpose<br />Rounds: 20<br />Used in: RFB";
	displayName = "7.62 mm 20Rnd Mag (RFB)";
	displaynameshort = "";
	initSpeed = 827;
	lastRoundsTracer = 0;
	mass = 12;
	maxLeadSpeed = 25;
	maxThrowHoldTime = 2;
	maxThrowIntensityCoef = 1.4;
	minThrowIntensityCoef = 0.3;
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
	modelSpecialIsProxy = 1;
	nameSound = "magazine";
	picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
	quickReload = 0;
	reloadAction = "";
	scope = 2;
	selectionFireAnim = "zasleh";
	simulation = "ProxyMagazines";
	tracersEvery = 0;
	type = 256;
	useAction = 0;
	useActionTitle = "";
	value = 1;
	weaponpoolavailable = 1;
	weight = 0;
	};	
};