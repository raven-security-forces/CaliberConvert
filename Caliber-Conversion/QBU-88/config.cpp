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
		"A3_Weapons_F",
		"A3_Anims_F_Config_Sdr",
		"A3_Data_F",
		"A3_Ui_F",
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

#include "csatpacconfig.cpp"

class WeaponSlotsInfo;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class CfgWeapons
{

class DMR_07_base_F;

	class srifle_DMR_07_blk_F: DMR_07_base_F
    {
        displayName="QBU-88 (Black)";
		descriptionShort = "Marksman Rifle<br />Caliber: 5.8x42 mm";
		magazines[] =
		{
		"20Rnd_650x39_Cased_Mag_F",
		"20Rnd_650x39_Cased_Mag_Tracer_F",
		};
		ACE_barrelTwist = 229;
		ACE_barrelLength = 640;
		ACE_twistDirection = 1;
		mass = 90.3895;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
				"muzzle_snds_58_blk_f",
				"muzzle_snds_58_hex_f",
				"muzzle_snds_58_ghex_f"
				};
			};
		};
		
		class PointerSlot: PointerSlot //Doesn't have a rail so none
			{
				compatibleItems[] =
				{
				""
				};
			};
    };

	class srifle_DMR_07_hex_F: DMR_07_base_F
    {
        displayName="QBU-88 (Hex)";
		descriptionShort = "Marksman Rifle<br />Caliber: 5.8x42 mm";
		magazines[] =
		{
		"20Rnd_650x39_Cased_Mag_F",
		"20Rnd_650x39_Cased_Mag_Tracer_F",
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
				"muzzle_snds_58_blk_f",
				"muzzle_snds_58_hex_f",
				"muzzle_snds_58_ghex_f"
				};
			};
		};
    };

		class srifle_DMR_07_ghex_F: DMR_07_base_F
    {
        displayName="QBU-88 (Green Hex)";
		descriptionShort = "Marksman Rifle<br />Caliber: 5.8x42 mm";
		magazines[] =
		{
		"20Rnd_650x39_Cased_Mag_F",
		"20Rnd_650x39_Cased_Mag_Tracer_F",
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
				"muzzle_snds_58_blk_f",
				"muzzle_snds_58_hex_f",
				"muzzle_snds_58_ghex_f"
				};
			};
		};
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
