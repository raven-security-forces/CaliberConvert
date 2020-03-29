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

#include "FIA-AAF-FactionConfigs.cpp"

class WeaponSlotsInfo;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class CfgWeapons
{
	class Rifle_Long_Base_F;

	class LMG_Mk200_F: Rifle_Long_Base_F
    {
        displayName="Stoner 99";
		descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45 mm";
		linkProxy="\A3\data_f\proxies\weapon_slots\MAGAZINESLOT";
		magazines[] =
		{
		"200Rnd_65x39_cased_Box",
		"200Rnd_65x39_cased_Box_Red",
		"200Rnd_65x39_cased_Box_Tracer",
		"200Rnd_65x39_cased_Box_Tracer_Red",
		"rhsusf_200Rnd_556x45_box",
		"rhsusf_200rnd_556x45_mixed_box",
		"rhsusf_200rnd_556x45_M855_box",
		"rhsusf_200rnd_556x45_M855_mixed_box",
		"rhsusf_200Rnd_556x45_soft_pouch",
		"rhsusf_200Rnd_556x45_mixed_soft_pouch",
		"rhsusf_200Rnd_556x45_soft_pouch_ucp",
		"rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp",
		"rhsusf_200Rnd_556x45_soft_pouch_coyote",
		"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",
		"rhsusf_200Rnd_556x45_M855_soft_pouch",
		"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",
		"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",
		"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",
		"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",
		"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_mixed_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_M855_soft_pouch",
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",
		"rhsusf_100Rnd_556x45_M855_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_M855_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_M200_soft_pouch",
		"rhsusf_100Rnd_556x45_M200_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_M200_soft_pouch_coyote"		
		};
		ACE_barrelTwist = 178;
		ACE_barrelLength = 318;
		ACE_twistDirection = 1;
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]= 
				{
				"ace_muzzle_mzls_l",
				"ffaa_snds_gt_556",
				"rhsusf_acc_nt4_black",
				"rhsusf_acc_nt4_tan",
				"rhsusf_acc_rotex5_grey",
				"rhsusf_acc_rotex5_tan",
				"muzzle_snds_m_snd_f",
				"muzzle_snds_m_khk_f",
				"muzzle_snds_m",			
				};
			};
		};			
    };

    class LMG_Mk200_black_F: LMG_Mk200_F
    {
        displayName="Stoner 99 (Black)";
		descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45 mm";
		linkProxy="\A3\data_f\proxies\weapon_slots\MAGAZINESLOT";
		magazines[] =
		{
		"200Rnd_65x39_cased_Box",
		"200Rnd_65x39_cased_Box_Red",
		"200Rnd_65x39_cased_Box_Tracer",
		"200Rnd_65x39_cased_Box_Tracer_Red",
		"rhsusf_200Rnd_556x45_box",
		"rhsusf_200rnd_556x45_mixed_box",
		"rhsusf_200rnd_556x45_M855_box",
		"rhsusf_200rnd_556x45_M855_mixed_box",
		"rhsusf_200Rnd_556x45_soft_pouch",
		"rhsusf_200Rnd_556x45_mixed_soft_pouch",
		"rhsusf_200Rnd_556x45_soft_pouch_ucp",
		"rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp",
		"rhsusf_200Rnd_556x45_soft_pouch_coyote",
		"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",
		"rhsusf_200Rnd_556x45_M855_soft_pouch",
		"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",
		"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",
		"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",
		"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",
		"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_mixed_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_M855_soft_pouch",
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",
		"rhsusf_100Rnd_556x45_M855_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_M855_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote",
		"rhsusf_100Rnd_556x45_M200_soft_pouch",
		"rhsusf_100Rnd_556x45_M200_soft_pouch_ucp",
		"rhsusf_100Rnd_556x45_M200_soft_pouch_coyote"		
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
