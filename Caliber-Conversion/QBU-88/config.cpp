class CfgPatches
{
    class RSF_QBU88_Conversion
    {
    name = "RSF QBU-88 Conversion Mod";
    author = "Nero";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
    requiredAddons[] = 
	{
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

#include "faction_config_cmr.cpp"

class WeaponSlotsInfo;
class PointerSlot;
class asdg_MuzzleSlot_58;
class asdg_OpticRail1913;
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class DMR_07_base_F : Rifle_Long_Base_F
	{
	descriptionShort = "Marksman Rifle<br />Caliber: 5.8x42 mm";
	displayName = "QBU-88";
	magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_Tracer_F"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
		allowedSlots[] = {901};		
		mass = 90.38;	
			class CowsSlot : asdg_OpticRail1913 {};
			class MuzzleSlot : asdg_MuzzleSlot_58 {};
			class PointerSlot {};
		};
	};
	
	class srifle_DMR_07_blk_F: DMR_07_base_F
    {
        displayName="QBU-88 (Black)";
    };

	class srifle_DMR_07_hex_F: DMR_07_base_F
    {
        displayName="QBU-88 (Hex)";
    };

	class srifle_DMR_07_ghex_F: DMR_07_base_F
    {
        displayName="QBU-88 (Green Hex)";
    };
};

class CfgMagazines
{
	class CA_Magazine;
	
	class 20Rnd_650x39_Cased_Mag_F : CA_Magazine
	{
	ammo="B_580x42_Ball_F";
	author = "Bohemia Interactive";
	count = 10;
	descriptionShort = "Caliber: 5.8x42 mm<br />Rounds: 10<br />Used in: QBZ-95-1, QBZ-95-1 GL, QBU-88";
	displayName = "5.8 mm 10Rnd Mag";
	displayNameShort = "";
	initSpeed = 950;
	lastRoundsTracer = 0;
	mass = 3;
	maxLeadSpeed = 25;
	maxThrowHoldTime = 2;
	maxThrowIntensityCoef = 1.4;
	minThrowIntensityCoef = 0.3;
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "";
	nameSound = "magazine";
	picture = "\A3\Weapons_F_Exp\Data\UI\icon_20Rnd_650x39_Cased_Mag_F_ca.paa";
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
  
 	class 20Rnd_650x39_Cased_Mag_Tracer_F: 20Rnd_650x39_Cased_Mag_F
	{
	displayName = "5.8 mm 10Rnd Tracer (Green) Mag";
	tracersEvery=1;
	lastRoundsTracer=10;
	};
};
