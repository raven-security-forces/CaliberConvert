class cfgPatches
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
		"rhsusf_200Rnd_556x45_soft_pouch"
		};
        magazineWell[] = {"M249_556x45"};
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
		"rhsusf_200Rnd_556x45_soft_pouch"
		};
        magazineWell[] = {"M249_556x45"};
    };
};
