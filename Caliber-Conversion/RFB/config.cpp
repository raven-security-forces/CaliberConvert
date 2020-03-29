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

#include "RFB-Units-Config.cpp"

class WeaponSlotsInfo;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class Mode_SemiAuto;

class CfgWeapons
{

	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class SDAR_base_F : Rifle_Base_F {};

	class arifle_SDAR_F: SDAR_base_F
    {
        displayName="RFB";
		descriptionShort = "Assault Rifle Gun<br />Caliber: 7.62x51 mm";
		magazines[] =
		{
		"20Rnd_556x45_UW_mag",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd_Blank",
		"UK3CB_BAF_762_20Rnd_T"
		};
		magazineWell[] = {CBA_762x51_M14};		
		modes[]=
		{
			"Single",
		};
		ACE_barrelTwist = 286;
		ACE_barrelLength = 460;
		ACE_twistDirection = 1;
		mass = 81.571;
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] =
				{
				"rhs_acc_rakurspm",
				"rhs_acc_1p87",
				"ffaa_optic_acog",
				"optic_yorris",
				"rhs_acc_dh520x56",
				"rhs_acc_ekp8_18",
				"ffaa_optic_elcan",
				"ffaa_optic_elcan_ard",
				"ffaa_optic_enasa",
				"ffaa_optic_holografico",
				"rksl_optic_eot552",
				"rksl_optic_eot552_c",
				"rksl_optic_eot552x",
				"rksl_optic_eot552x_c",
				"uk3cb_baf_kite",
				"uk3cb_baf_maxikite",
				"rksl_optic_lds",
				"rksl_optic_lds_c",
				"uk3cb_baf_specterlds",
				"rhsusf_acc_premier_mrds",
				"rhsusf_acc_leupoldmk4_2_mrds",
				"ffaa_optic_Mk4_v1",
				"ffaa_optic_Mk4_v2",
				"ffaa_optic_lv",
				"rksl_optic_rmr_ms19",
				"rksl_optic_rmr_ms19_fde",
				"rksl_optic_rmr_rm33",
				"rksl_optic_rmr_rm33_fde",
				"rhsgref_acc_rx01_nofilter_camo",
				"rhsgref_acc_rx01_camo",
				"rksl_optic_pmii_312",
				"rksl_optic_pmii_312_des",
				"rksl_optic_pmii_312_sunshade",
				"rksl_optic_pmii_312_sunshade_des",
				"rksl_optic_pmii_312_sunshade_wdl",
				"rksl_optic_pmii_312_wdl",
				"rksl_optic_pmii_525",
				"rksl_optic_pmii_525_des",
				"rksl_optic_pmii_525_wdl",
				"ffaa_optic_3x12x50",
				"ffaa_optic_5x25x56",
				"uk3cb_baf_suit",
				"uk3cb_baf_susat",
				"ffaa_optic_susat",
				"uk3cb_baf_ta31f",
				"uk3cb_baf_ta31f_hornbill",
				"uk3cb_baf_ta648",
				"uk3cb_baf_ta648_308",
				"optic_ico_01_f",
				"optic_ico_01_black_f",
				"optic_ico_01_sand_f",
				"optic_ico_01_camo_f",
				"optic_Nightstalker",
				"optic_tws",
				"optic_tws_mg",
				"optic_NVS",
				"optic_DMS",
				"optic_LRPS",
				"optic_ams",
				"optic_AMS_snd",
				"optic_AMS_khk",
				"optic_KHS_blk",
				"optic_KHS_tan",
				"optic_KHS_hex",
				"optic_KHS_old",
				"optic_SOS",
				"optic_MRCO",
				"optic_Arco",
				"optic_aco",
				"optic_ACO_grn",
				"optic_aco_smg",
				"optic_ACO_grn_smg",
				"optic_hamr",
				"optic_Holosight",
				"optic_Holosight_smg",
				"optic_Hamr_khk_F",
				"optic_SOS_khk_F",
				"optic_Arco_ghex_F",
				"optic_Arco_blk_F",
				"optic_DMS_ghex_F",
				"optic_ERCO_blk_F",
				"optic_ERCO_khk_F",
				"optic_ERCO_snd_F",
				"optic_LRPS_ghex_F",
				"optic_LRPS_tna_F",
				"optic_Holosight_blk_F",
				"optic_Holosight_khk_F",
				"optic_Holosight_smg_blk_F",
				"optic_Holosight_smg_khk_F",
				"optic_DMS_weathered_F",
				"optic_DMS_weathered_Kir_F",
				"optic_Arco_lush_F",
				"optic_Arco_arid_F",
				"optic_Arco_AK_blk_F",
				"optic_Arco_AK_lush_F",
				"optic_Arco_AK_arid_F",
				"optic_Holosight_lush_F",
				"optic_Holosight_arid_F",
				"rhsusf_acc_LEUPOLDMK4",
				"rhsusf_acc_LEUPOLDMK4_d",
				"rhsusf_acc_LEUPOLDMK4_wd",
				"rhsusf_acc_LEUPOLDMK4_2",
				"rhsusf_acc_LEUPOLDMK4_2_d",
				"rhsusf_acc_premier",
				"rhsusf_acc_premier_low",
				"rhsusf_acc_premier_anpvs27",
				"rhsusf_acc_ACOG_anpvs27",
				"rhsusf_acc_M8541",
				"rhsusf_acc_M8541_low",
				"rhsusf_acc_M8541_low_d",
				"rhsusf_acc_M8541_low_wd",
				"rhsusf_acc_SpecterDR_pvs27",
				"rhsusf_acc_EOTECH",
				"rhsusf_acc_eotech_552",
				"rhsusf_acc_eotech_552_d",
				"rhsusf_acc_eotech_552_wd",
				"rhsusf_acc_eotech_xps3",
				"rhsusf_acc_g33_xps3",
				"rhsusf_acc_g33_xps3_flip",
				"rhsusf_acc_g33_xps3_tan",
				"rhsusf_acc_g33_xps3_tan_flip",
				"rhsusf_acc_g33_t1",
				"rhsusf_acc_g33_t1_flip",
				"rhsusf_acc_compm4",
				"rhsusf_acc_T1_high",
				"rhsusf_acc_T1_low",
				"rhsusf_acc_RX01",
				"rhsusf_acc_RX01_NoFilter",
				"rhsusf_acc_RX01_tan",
				"rhsusf_acc_RX01_NoFilter_tan",
				"rhsusf_acc_RM05",
				"rhsusf_acc_mrds",
				"rhsusf_acc_mrds_c",
				"rhsusf_acc_ACOG",
				"rhsusf_acc_ACOG2",
				"rhsusf_acc_ACOG3",
				"rhsusf_acc_ACOG_wd",
				"rhsusf_acc_ACOG_d",
				"rhsusf_acc_ACOG_sa",
				"rhsusf_acc_ACOG_USMC",
				"rhsusf_acc_ACOG2_USMC",
				"rhsusf_acc_ACOG3_USMC",
				"rhsusf_acc_ACOG_RMR",
				"rhsusf_acc_ACOG_PIP",
				"rhsusf_acc_ACOG2_pip",
				"rhsusf_acc_ACOG3_pip",
				"rhsusf_acc_ACOG_wd_pip",
				"rhsusf_acc_ACOG_d_pip",
				"rhsusf_acc_ACOG_sa_pip",
				"rhsusf_acc_ACOG_USMC_pip",
				"rhsusf_acc_ACOG2_USMC_pip",
				"rhsusf_acc_ACOG3_USMC_pip",
				"rhsusf_acc_ACOG_RMR_PIP",
				"rhsusf_acc_ACOG_3d",
				"rhsusf_acc_ACOG2_3d",
				"rhsusf_acc_ACOG3_3d",
				"rhsusf_acc_ACOG_wd_3d",
				"rhsusf_acc_ACOG_d_3d",
				"rhsusf_acc_ACOG_sa_3d",
				"rhsusf_acc_ACOG_USMC_3d",
				"rhsusf_acc_ACOG2_USMC_3d",
				"rhsusf_acc_ACOG3_USMC_3d",
				"rhsusf_acc_ACOG_RMR_3d",
				"rhsusf_acc_ELCAN",
				"rhsusf_acc_ELCAN_ard",
				"rhsusf_acc_ELCAN_3d",
				"rhsusf_acc_ELCAN_ard_3d",
				"rhsusf_acc_ELCAN_PIP",
				"rhsusf_acc_ELCAN_ard_PIP",
				"rhsusf_acc_su230",
				"rhsusf_acc_su230_mrds",
				"rhsusf_acc_su230a",
				"rhsusf_acc_su230a_mrds",
				"rhsusf_acc_su230_c",
				"rhsusf_acc_su230_mrds_c",
				"rhsusf_acc_su230a_c",
				"rhsusf_acc_su230a_mrds_c",
				"rhsusf_acc_su230_3d",
				"rhsusf_acc_su230_mrds_3d",
				"rhsusf_acc_su230a_3d",
				"rhsusf_acc_su230a_mrds_3d",
				"rhsusf_acc_su230_c_3d",
				"rhsusf_acc_su230_mrds_c_3d",
				"rhsusf_acc_su230a_c_3d",
				"rhsusf_acc_su230a_mrds_c_3d",
				"rhsusf_acc_SpecterDR",
				"rhsusf_acc_SpecterDR_3d",
				"rhsusf_acc_SpecterDR_A",
				"rhsusf_acc_SpecterDR_A_3d",
				"rhsusf_acc_SpecterDR_CX",
				"rhsusf_acc_SpecterDR_CX_3D",
				"rhsusf_acc_SpecterDR_D",
				"rhsusf_acc_SpecterDR_OD",
				"rhsusf_acc_SpecterDR_D_3D",
				"rhsusf_acc_SpecterDR_OD_3D",
				"rhsusf_acc_anpvs27",
				"rhsusf_acc_anpas13gv1",
				"rhsusf_acc_M2A1",
				"rhsusf_acc_ACOG_MDO",
				"ACE_optic_Hamr_2D",
				"ACE_optic_Hamr_PIP",
				"ACE_optic_Arco_2D",
				"ACE_optic_Arco_PIP",
				"ACE_optic_MRCO_2D",
				"ACE_optic_MRCO_PIP",
				"ACE_optic_SOS_2D",
				"ACE_optic_SOS_PIP",
				"ACE_optic_LRPS_2D",
				"ACE_optic_LRPS_PIP",
				"rhs_acc_okp7_picatinny"
				};
			};
		};
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
	displayName = "7.62 mm 20Rnd Mag";
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