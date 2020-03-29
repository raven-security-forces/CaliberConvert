class CfgPatches
{
	class s39_msbs_conversion_rsf
	{
		name = "SHI MSBS Radon Conversion";
		author = "SpartanD39";
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=1817044629";
		version="0.8.0";
		versionStr="0.8.0";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Enoch",
			"A3_characters_f_enoch",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F",
			"rhsusf_c_weapons",
			"rhsusf_weapon_sounds",
			"ace_ballistics",
			"ace_common",
			"ace_smallarms",
			"ace_realisticnames",
			"ace_compat_rhs_usf3",
			"cba_jr"
		};
		units[] = {};
		weapons[] = {};
	};
};

#include "ldfconfig.cpp"

class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;
	
	class 30Rnd_65x39_caseless_msbs_mag : 30Rnd_65x39_caseless_mag
	{
	ammo = "B_65x39_Caseless";
	author = "Bohemia Interactive";
	count = 30;
	descriptionShort = "Caliber: 5.56x45 mm STANAG Caseless<br />Rounds: 30<br />Used in: MSBS Grot B";
	displayName = "5.56 mm 30Rnd Mag";
	displaynameshort = "5.56mm";
	DLC = "Enoch";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	initSpeed = 774;
	lastRoundsTracer = 0;
	mass = 10;
	maxLeadSpeed = 25;
	maxThrowHoldTime = 2;
	maxThrowIntensityCoef = 1.4;
	minThrowIntensityCoef = 0.3;
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
	modelSpecialIsProxy = 1;
	nameSound = "magazine";
	picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
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
	
	class 30Rnd_65x39_caseless_msbs_mag_Tracer : 30Rnd_65x39_caseless_msbs_mag
	{	
	displayName = "5.56 mm 30Rnd Tracer Mag";	
	displayNameShort = "Tracer";
	picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_Tracer_CA.paa";
	tracersEvery = 1;
	};
};

class Mode_FullAuto;
class Mode_Burst;
class Mode_SemiAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class PointerSlot;
class CowsSlot;
class BaseSoundModeType;

class cfgWeapons
{
	class Rifle_Base_F;
	
	//Base MSBS rifle definitions.
	class arifle_MSBS65_base_F: Rifle_Base_F
	{
		descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[] = 
		{
		"30Rnd_65x39_caseless_msbs_mag",
		"30Rnd_65x39_caseless_msbs_mag_Tracer"
		};
		magazineWell[] = {"CBA_556x45_STANAG"};
		modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		mass = 75;
		ACE_barrelLength = 406;
		ACE_barrelTwist = 178;
		ACE_twistDirection = 1;
		
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = 
				{
					"Msbs65_01_Shot_SoundSet",
					"Msbs65_01_Tail_SoundSet",
					"Mx_Tail_Contact_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = 
				{
					"Msbs65_01_Shot_Silencer_SoundSet",
					"Msbs65_01_Tail_Int_Silencer_SoundSet"
				};
			};
		};

		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"Standardsound",
				"SilencedSound"
			};
			class StandardSound: baseSoundModeType
			{
				soundSetShot[] = 
				{
					"Msbs65_01_Shot_SoundSet",
					"Msbs65_01_Tail_SoundSet",
					"Mx_Tail_Contact_SoundSet"
				};
			};
			class SilencedSound: baseSoundModeType
			{
				soundSetShot[] = 
				{
					"Msbs65_01_Shot_Silencer_SoundSet",
					"Msbs65_01_Tail_Int_Silencer_SoundSet"
				};
			};
		};

		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = 
				{
					"Msbs65_01_Shot_SoundSet",
					"Msbs65_01_Tail_SoundSet",
					"Mx_Tail_Contact_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = 
				{
					"Msbs65_01_Shot_Silencer_SoundSet",
					"Msbs65_01_Tail_Int_Silencer_SoundSet"
				};
			};
		};
	
		class WeaponSlotsInfo: WeaponSlotsInfo //Inheriting from the primitive class we imported above.
		{
			class MuzzleSlot: MuzzleSlot //Suppressors and flashiders.
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE"; //This is needed to be able to display models.
				compatibleItems[] = //our actual list of items, all classnames from in-game.
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
				"rhsusf_acc_SF3P556",
				"rhsusf_acc_SFMB556",
				};
			};
			
			class CowsSlot: CowsSlot
			{
				compatibleItems[] =
				{
				"rhs_acc_rakurspm",
				"rhs_acc_1p87",
				"ffaa_optic_acog",
				"optic_yorris",
				"rhs_acc_dh520x56",
				"rhs_acc_ekp8_18",
				"rhs_acc_okp7_picatinny",
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
				"rhsusf_acc_ELCAN",
				"rhsusf_acc_ELCAN_ard",
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
				"rhsusf_acc_SpecterDR",
				"rhsusf_acc_SpecterDR_A",
				"rhsusf_acc_SpecterDR_CX",
				"rhsusf_acc_SpecterDR_D",
				"rhsusf_acc_SpecterDR_OD",
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
				"ACE_optic_LRPS_PIP"
				};
			};
			
			class PointerSlot: Pointerslot
			{
			compatibleItems[]=
				{
				"rhs_acc_2dpzenit_ris",
				"rhsusf_acc_anpeq15side",
				"rhsusf_acc_anpeq15_top",
				"rhsusf_acc_anpeq15_wmx",
				"rhsusf_acc_anpeq15_wmx_light",
				"rhsusf_acc_anpeq15side_bk",				
				"rhsusf_acc_anpeq15_bk_top",					
				"rhsusf_acc_anpeq15",					
				"rhsusf_acc_anpeq15_light",					
				"rhsusf_acc_anpeq15_bk",			
				"rhsusf_acc_anpeq15_bk_light",					
				"rhsusf_acc_anpeq15a",					
				"rhsusf_acc_anpeq16a",			
				"rhsusf_acc_anpeq16a_light",
				"rhsusf_acc_anpeq16a_top",
				"rhsusf_acc_anpeq16a_light_top",
				"ffaa_acc_puntero_ir",
				"ace_acc_pointer_green",
				"acc_pointer_ir",
				"uk3cb_baf_llm_flashlight_black",
				"uk3cb_baf_llm_flashlight_tan",
				"uk3cb_baf_llm_ir_black",
				"uk3cb_baf_llm_ir_tan",
				"rhsusf_acc_m952v",
				"rhs_acc_perst1ik_ris",
				"rhs_acc_perst3",
				"acc_flashlight",
				"rhsusf_acc_wmx",
				"rhsusf_acc_wmx_bk",
				};
			};
		};
	};
	
	//More core definitions and inheritances, all gleaned from the config
	//viewer in the editor.
	class arifle_MSBS65_base_black_F: arifle_MSBS65_base_F {};
	class arifle_MSBS65_base_camo_F: arifle_MSBS65_base_F {};
	class arifle_MSBS65_base_sand_F: arifle_MSBS65_base_F {};

	class arifle_MSBS65_GL_base_F: arifle_MSBS65_base_F 
	{
	mass = 100;
	};
	class arifle_MSBS65_GL_base_black_F;
	class arifle_MSBS65_GL_base_camo_F;
	class arifle_MSBS65_GL_base_sand_F;

	class arifle_MSBS65_UBS_base_F: arifle_MSBS65_base_F 
	{
	mass = 115;
	};
	
	class arifle_MSBS65_UBS_base_black_F;
	class arifle_MSBS65_UBS_base_camo_F;
	class arifle_MSBS65_UBS_base_sand_F;
	
	class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F 
	{
		class WeaponSlotsInfo: WeaponSlotsInfo //Inheriting from the primitive class we imported above.
		{
			class MuzzleSlot: MuzzleSlot //Suppressors and flashiders.
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE"; //This is needed to be able to display models.
				compatibleItems[] = //our actual list of items, all classnames from in-game.
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
				"rhsusf_acc_SF3P556",
				"rhsusf_acc_SFMB556",
				};
			};
			
			class CowsSlot: CowsSlot
			{
				compatibleItems[] =
				{
				"rhs_acc_rakurspm",
				"rhs_acc_1p87",
				"ffaa_optic_acog",
				"optic_yorris",
				"rhs_acc_dh520x56",
				"rhs_acc_ekp8_18",
				"rhs_acc_okp7_picatinny",
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
				"rhsusf_acc_ELCAN",
				"rhsusf_acc_ELCAN_ard",
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
				"rhsusf_acc_SpecterDR",
				"rhsusf_acc_SpecterDR_A",
				"rhsusf_acc_SpecterDR_CX",
				"rhsusf_acc_SpecterDR_D",
				"rhsusf_acc_SpecterDR_OD",
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
				"ACE_optic_LRPS_PIP"
				};
			};
			
			class PointerSlot: Pointerslot
			{
			compatibleItems[]=
				{
				"rhs_acc_2dpzenit_ris",
				"rhsusf_acc_anpeq15side",
				"rhsusf_acc_anpeq15_top",
				"rhsusf_acc_anpeq15_wmx",
				"rhsusf_acc_anpeq15_wmx_light",
				"rhsusf_acc_anpeq15side_bk",				
				"rhsusf_acc_anpeq15_bk_top",					
				"rhsusf_acc_anpeq15",					
				"rhsusf_acc_anpeq15_light",					
				"rhsusf_acc_anpeq15_bk",			
				"rhsusf_acc_anpeq15_bk_light",					
				"rhsusf_acc_anpeq15a",					
				"rhsusf_acc_anpeq16a",			
				"rhsusf_acc_anpeq16a_light",
				"rhsusf_acc_anpeq16a_top",
				"rhsusf_acc_anpeq16a_light_top",
				"ffaa_acc_puntero_ir",
				"ace_acc_pointer_green",
				"acc_pointer_ir",
				"uk3cb_baf_llm_flashlight_black",
				"uk3cb_baf_llm_flashlight_tan",
				"uk3cb_baf_llm_ir_black",
				"uk3cb_baf_llm_ir_tan",
				"rhsusf_acc_m952v",
				"rhs_acc_perst1ik_ris",
				"rhs_acc_perst3",
				"acc_flashlight",
				"rhsusf_acc_wmx",
				"rhsusf_acc_wmx_bk",
				};
			};
		};
		descriptionShort = "Assault Rifle<br />Caliber: 5.56x45mm NATO";
		mass = 95;
		ACE_barrelLength = 406;
		ACE_barrelTwist = 178;
		ACE_twistDirection = 1;
	};

	class arifle_MSBS65_Mark_base_black_F;
	class arifle_MSBS65_Mark_base_camo_F;
	class arifle_MSBS65_Mark_base_sand_F;

	//Base MSBS
	class arifle_MSBS65_F: arifle_MSBS65_base_F
	{
		displayName="MSBS Grot B";
	};


	class arifle_MSBS65_black_F: arifle_MSBS65_base_black_F
	{
		displayName="MSBS Grot B (Black)";
	};


	class arifle_MSBS65_camo_F: arifle_MSBS65_base_camo_F
	{
		displayName="MSBS Grot B (Camo)";
	};


	class arifle_MSBS65_sand_F: arifle_MSBS65_base_sand_F
	{
		displayName="MSBS Grot B (Sand)";
	};

	//MSBS GL
	class arifle_MSBS65_GL_F: arifle_MSBS65_GL_base_F
	{
		displayName="MSBS Grot B UGL";
	};

	class arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_base_black_F
	{
		displayName="MSBS Grot B UGL (Black)";
	};

	class arifle_MSBS65_GL_camo_F: arifle_MSBS65_GL_base_camo_F
	{
		displayName="MSBS Grot B UGL (Camo)";
	};

	class arifle_MSBS65_GL_sand_F: arifle_MSBS65_GL_base_sand_F
	{
		displayName="MSBS Grot B UGL (Sand)";
	};

	//MSBS Marksman
	class arifle_MSBS65_Mark_F: arifle_MSBS65_Mark_base_F
	{
		displayName="MSBS Grot B DMR";
	};

	class arifle_MSBS65_Mark_black_F: arifle_MSBS65_Mark_base_black_F
	{
		displayName="MSBS Grot B DMR (Black)";
	};

	class arifle_MSBS65_Mark_camo_F: arifle_MSBS65_Mark_base_camo_F
	{
		displayName="MSBS Grot B DMR (Camo)";
	};

	class arifle_MSBS65_Mark_sand_F: arifle_MSBS65_Mark_base_sand_F
	{
		displayName="MSBS Grot B DMR (Sand)";
	};

	//MSBS Uderbarrel Shotgun
	class arifle_MSBS65_UBS_F: arifle_MSBS65_UBS_base_F
	{
		displayName="MSBS Grot B SIX12";
	};

	class arifle_MSBS65_UBS_black_F: arifle_MSBS65_UBS_base_black_F
	{
		displayName="MSBS Grot B SIX12 (Black)";
	};

	class arifle_MSBS65_UBS_camo_F: arifle_MSBS65_UBS_base_camo_F
	{
		displayName="MSBS Grot B SIX12 (Camo)";
	};

	class arifle_MSBS65_UBS_sand_F: arifle_MSBS65_UBS_base_sand_F
	{
		displayName="MSBS Grot B SIX12 (Sand)";
	};
};