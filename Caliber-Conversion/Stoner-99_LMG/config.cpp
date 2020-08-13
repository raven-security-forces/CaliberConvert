class CfgPatches
{
    class RSF_Stoner_99_Conversion
    {
    name = "RSF Stoner 99 Conversion Mod";
    author ="Nero";
    url = "";
    version="0.0.1";
	versionStr="0.0.1";
    requiredAddons[] = {
	"A3_Weapons_F",
	"A3_Weapons_F_Enoch",
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

#include "faction_config_mk200.cpp"

class WeaponSlotsInfo;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
    {
        displayName="Stoner 99 LMG (Tan)";
		descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazines[] = {"200Rnd_65x39_cased_Box"};
		magazineWell[] = {"Mk200_65x39","CBA_556x45_MINIMI","M249_556x45"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		allowedSlots[] = {901};	
		mass = 114;
			class CowsSlot : asdg_OpticRail1913
			{
			iconPosition[]={0.551,0.319};
			iconScale=0.2;		
			};
			class MuzzleSlot : asdg_MuzzleSlot_556 
			{
				compatibleItems[]=
				{
					"ace_muzzle_mzls_l",
					"muzzle_snds_m",
					"muzzle_snds_m_khk_f",
					"muzzle_snds_m_snd_f",
				};	
			iconPosition[]={-0.07,0.389};
			iconScale=0.2;	
			};
			class PointerSlot : asdg_FrontSideRail 
			{
			iconPosition[]={0.25400001,0.40599999};
			iconScale=0.23;				
			};
			class UnderBarrelSlot : asdg_UnderSlot {
			iconPosition[]={0.20400001,0.80599999};
			iconScale=0.3;		
			};	
		};			
    };

    class LMG_Mk200_black_F: LMG_Mk200_F
    {
        displayName="Stoner 99 LMG (Black)";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		allowedSlots[] = {901};	
		mass = 114;
			class CowsSlot : asdg_OpticRail1913
			{
			iconPosition[]={0.551,0.319};
			iconScale=0.2;		
			};
			class MuzzleSlot : asdg_MuzzleSlot_556 
			{
				compatibleItems[]=
				{
					"ace_muzzle_mzls_l",
					"muzzle_snds_m",
					"muzzle_snds_m_khk_f",
					"muzzle_snds_m_snd_f",
				};	
			iconPosition[]={-0.07,0.389};
			iconScale=0.2;	
			};
			class PointerSlot : asdg_FrontSideRail 
			{
			iconPosition[]={0.25400001,0.40599999};
			iconScale=0.23;				
			};
			class UnderBarrelSlot : asdg_UnderSlot {
			iconPosition[]={0.20400001,0.80599999};
			iconScale=0.3;		
			};	
		};
    };
};

class CfgMagazines
{
	class 100Rnd_65x39_caseless_mag;
	
	class 200Rnd_65x39_cased_Box : 100Rnd_65x39_caseless_mag
	{
	ACE_isBelt = 1;
	ammo = "B_556x45_Ball_Tracer_Yellow";
	author = "Bohemia Interactive";
	count = 200;
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 200<br />Used in: Stoner 99";
	displayName = "5.56 mm 200Rnd Belt";
	displayNameShort = "";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"};
	initSpeed = 743;
	lastRoundsTracer = 3;
	mass = 50;
	maxLeadSpeed = 25;
	maxThrowHoldTime = 2;
	maxThrowIntensityCoef = 1.4;
	minThrowIntensityCoef = 0.3;
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_100rnd.p3d";
	modelSpecialIsProxy = 1;
	nameSound = "mgun";
	picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
	quickReload = 0;
	reloadAction = "";
	scope = 2;
	selectionFireAnim = "zasleh";
	simulation = "ProxyMagazines";
	tracersEvery = 5;
	type = "2*		256";
	useAction = 0;
	useActionTitle = "";
	value = 1;
	weaponpoolavailable = 1;
	weight = 0;
	};

	class 200Rnd_65x39_cased_Box_Red : 200Rnd_65x39_cased_Box
	{
	ammo = "B_556x45_Ball_Tracer_Red";
	displayName = "5.56 mm 200Rnd Reload Tracer (Red) Belt";
	};

	class 200Rnd_65x39_cased_Box_Tracer : 200Rnd_65x39_cased_Box
	{
	ammo = "B_556x45_Ball_Tracer_Yellow";	
	descriptionShort = "Caliber: 5.56x45 mm Tracer - Yellow<br />Rounds: 200<br />Used in: Stoner 99";
	displayName = "5.56 mm 200Rnd Belt Tracer (Yellow) Belt";
	displaynameshort = "Tracer";
	lastRoundsTracer = 200;
	picture = "\A3\Weapons_F\Data\UI\m_200rnd_65x39_yellow_ca.paa";
	tracersEvery = 1;
	};
	
	class 200Rnd_65x39_cased_Box_Tracer_Red : 200Rnd_65x39_cased_Box
	{
	ammo = "B_556x45_Ball_Tracer_Red";	
	descriptionShort = "Caliber: 5.56x45 mm Tracer - Yellow<br />Rounds: 200<br />Used in: Stoner 99";
	displayName = "5.56 mm 200Rnd Belt Tracer (Red) Belt";
	displaynameshort = "Tracer";
	lastRoundsTracer = 200;
	picture = "\A3\Weapons_F\Data\UI\m_200rnd_65x39_red_ca.paa";
	tracersEvery = 1;
	};	
};
