class cfgPatches
{
    class RSF_AK12_Conversion
    {
        name = "RSF AK-12 Conversion Mod";
        author = "NerotheHero111";
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

class WeaponSlotsInfo;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class UGL_F;

class CfgMagazines
{	
class 30Rnd_762x39_Mag_F;
class 30Rnd_545x39_Mag_F;

class 75rnd_762x39_AK12_Mag_762_F : 30Rnd_762x39_Mag_F
{
ammo = "B_762x39_Ball_Green_F";
count = 75;
descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 75<br />Used in: AK-15, AK-15 GL, AKM";
displayName = "7.62 mm 75rnd AK12 Mag";
DLC = "Enoch";
hiddenSelections[] = {"Camo"};
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
mass = 26;
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_ak12_75rnd";
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_F_CA.paa";
reloadAction = "GestureReloadAK12_Drum";	
};
class 75rnd_762x39_AK12_Arid_Mag_762_F : 75rnd_762x39_AK12_Mag_762_F
{
displayName = "7.62 mm 75rnd AK12 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";	
};
class 75rnd_762x39_AK12_Lush_Mag_762_F : 75rnd_762x39_AK12_Mag_762_F
{
displayName = "7.62 mm 75rnd AK12 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};	
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";	
};

class 75rnd_762x39_AK12_Mag_Tracer_762_F : 75rnd_762x39_AK12_Mag_762_F
{
displayName = "7.62 mm 75rnd AK12 Tracer Mag";	
displayNameShort = "Tracer";
lastRoundsTracer = 30;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_Tracer_F_CA.paa";
tracersEvery = 1;
};	
class 75rnd_762x39_AK12_Arid_Mag_Tracer_762_F : 75rnd_762x39_AK12_Mag_Tracer_762_F
{
displayName = "7.62 mm 75rnd AK12 Tracer Arid Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_Tracer_F_CA.paa";
};	
class 75rnd_762x39_AK12_Lush_Mag_Tracer_762_F : 75rnd_762x39_AK12_Mag_Tracer_762_F
{
displayName = "7.62 mm 75rnd AK12 Tracer Lush Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";	
}; 

class 75rnd_762x39_AK12_Mag_F : 30Rnd_545x39_Mag_F
{
ammo = "B_545x39_Ball_F";
count = 96;	
descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: RPK-16";
displayName = "5.45 mm 96rnd RPK-16 Mag";
DLC = "Enoch";
hiddenSelections[] = {"Camo"};
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
initSpeed = 735;
mass = 35;
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_ak12_75rnd";
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_F_CA.paa";
reloadAction = "GestureReloadAK12_Drum";
};
class 75rnd_762x39_AK12_Arid_Mag_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "5.45 mm 96rnd RPK-16 Arid Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};	
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";	
};
class 75rnd_762x39_AK12_Lush_Mag_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "5.45 mm 96rnd RPK-16 Lush Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";	
};

class 75rnd_762x39_AK12_Mag_Tracer_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "5.45 mm 96rnd RPK-16 Tracer Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 30;	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_Tracer_F_CA.paa";
tracersEvery = 1;
};
class 75rnd_762x39_AK12_Arid_Mag_Tracer_F : 75rnd_762x39_AK12_Mag_Tracer_F
{
displayName = "5.45 mm 96rnd RPK-16 Tracer Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_Tracer_F_CA.paa";
};
class 75rnd_762x39_AK12_Lush_Mag_Tracer_F : 75rnd_762x39_AK12_Mag_Tracer_F  
{
displayName = "5.45 mm 96rnd RPK-16 Tracer Lush Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";	
};
};

class CfgMagazineWells
{
	class AK_762x39
	{
	BI_Enoch_Magazines[] = {"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_AK12_Lush_Mag_F","30Rnd_762x39_AK12_Lush_Mag_Tracer_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_Tracer_F","75rnd_762x39_AK12_Mag_762_F","75rnd_762x39_AK12_Mag_Tracer_762_F","75rnd_762x39_AK12_Lush_Mag_762_F","75rnd_762x39_AK12_Lush_Mag_Tracer_762_F","75rnd_762x39_AK12_Arid_Mag_762_F","75rnd_762x39_AK12_Arid_Mag_Tracer_762_F"};
	BI_Magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F"};
	RHS_Magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite_tracer","rhs_30Rnd_762x39mm_bakelite_89","rhs_30Rnd_762x39mm_bakelite_U","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer_tracer","rhs_30Rnd_762x39mm_polymer_89","rhs_30Rnd_762x39mm_polymer_U","rhs_10Rnd_762x39mm","rhs_10Rnd_762x39mm_tracer","rhs_10Rnd_762x39mm_89","rhs_10Rnd_762x39mm_U","rhs_75Rnd_762x39mm","rhs_75Rnd_762x39mm_tracer","rhs_75Rnd_762x39mm_89"};
	RHSSAF_Magazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M78_tracer","rhssaf_30Rnd_762x39_M82_api"};
	};
};

class CfgWeapons
{
	//Name & Camo Mag switch for Existing AK-15 Variants
	// But first, adjusting weight for the Base Classes.
	class Rifle_Base_F;
	class arifle_AK12_base_F : Rifle_Base_F
	{
	_generalMacro = "arifle_AK12_base_F";
	ACE_barrelLength = 415;
	ACE_barrelTwist = 240;
	ACE_IronSightBaseAngle = 0.0276926;
	ACE_RailHeightAboveBore = 3.82508;
	aimTransitionSpeed = 0.9;
	author = "Bohemia Interactive";
	bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};	
	bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};	
	bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};	
	bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};	
	bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};	
	bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
	bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};	
	bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};	
	bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
	bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
	bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
	bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};	
	changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_firemode",0.316228,1,5};
	descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm";
	dexterity = 1.4;
	drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_dry",0.177828,1,10};
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\AK12\Data\Anims\ak12.rtm"};
	hiddenSelections[] = {"camo1","camo2"};
	htMax = 880;
	htMin = 7;
	inertia = 0.6;
	initSpeed = -1;
	magazineReloadSwitchPhase = 0.48;
	magazines[] = {"30Rnd_762x39_AK12_Mag_F"};
	magazineWell[] = {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
	model = "\A3\Weapons_F_Exp\Rifles\AK12\AK12_F.p3d";
	modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
	recoil = "recoil_ak12";
	reloadAction = "GestureReloadAK12";
	reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_reload",1,1,10};
	soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 72.7525;	
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		compatibleItems[]=
		{
			"bipod_02_f_arid",	
			"bipod_03_f_blk",	
			"bipod_02_f_blk",	
			"bipod_01_f_blk",	
			"bipod_02_f_hex",	
			"bipod_01_f_khk",	
			"bipod_02_f_lush",	
			"bipod_01_f_mtp",	
			"bipod_03_f_oli",	
			"bipod_01_f_snd",	
			"bipod_02_f_tan",	
			"rhsusf_acc_harris_bipod",	
			"rhs_acc_harris_swivel",
		};
		};
	};
	};
	
	class arifle_AK12_GL_base_F : arifle_AK12_base_F
	{
	_generalMacro = "arifle_AK12_GL_base_F";
	ACE_barrelLength = 415;
	ACE_barrelTwist = 240;
	ACE_IronSightBaseAngle = 0.0276926;
	ACE_RailHeightAboveBore = 3.82508;
	aimTransitionSpeed = 0.8;
	author = "Bohemia Interactive";
	bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};
	bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};
	bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};	
	bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};
	bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};
	bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
	bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};
	bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};	
	bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};	
	bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};	
	bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};	
	bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};
	changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_firemode",0.316228,1,5};
	descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm";
	dexterity = 1.4;
	drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_dry",0.177828,1,10};
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\AK12\Data\Anims\ak12gl.rtm"};
	hiddenSelections[] = {"camo1","camo2","camo3"};
	htMax = 880;
	htMin = 7;
	inertia = 0.7;	
	initSpeed = -1;	
	magazineReloadSwitchPhase = 0.48;
	magazines[] = {"30Rnd_762x39_AK12_Mag_F"};
	magazineWell[] = {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
	model = "\A3\Weapons_F_Exp\Rifles\AK12\AK12_GL_F.p3d";
	modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
	muzzles[] = {"this","EGLM"};
	recoil = "recoil_ak12";
	reloadAction = "GestureReloadAK12";
	reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_reload",1,1,10};
	soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 103.6172;	
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		};
	};
	class EGLM : UGL_F
	{
	cameraDir = "OP_look";	
	discreteDistance[] = {50,75,100,150,200,250,300,350,400};	
	discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
	discreteDistanceInitIndex = 1;	
	displayName = "GP-25";
	magazineReloadSwitchPhase = 0.36;
	reloadAction = "GestureReloadMXUGL";
	reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_UGL_reload",1,1,10};
	useExternalOptic = 0;
	useModelOptics = 0;
	magazines[] = {"rhs_VOG25","rhs_VOG25p","rhs_vg40tb","rhs_vg40sz","rhs_vg40op_white","rhs_vg40op_green","rhs_vg40op_red","rhs_GRD40_white","rhs_GRD40_green","rhs_GRD40_red","rhs_VG40MD_White","rhs_VG40MD_Green","rhs_VG40MD_Red","rhs_GDM40"};
	magazineWell[] = {"VOG_40mm","CBA_40mm_GP"};
	};
	};
	
	class arifle_AK12U_base_F : arifle_AK12_base_F
	{
	ACE_barrelLength = 314;
	aimTransitionSpeed = 1.1;
	dexterity = 1.6;
	discreteDistance[] = {100,200};
	DLC = "Enoch";
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	inertia = 0.38;
	initSpeed = -0.937063;
	model = "a3\Weapons_F_Enoch\Rifles\AK12\AK12U_F";
	recoil = "recoil_aks";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 66.1387;	
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		compatibleItems[]=
		{
			"bipod_02_f_arid",	
			"bipod_03_f_blk",	
			"bipod_02_f_blk",	
			"bipod_01_f_blk",	
			"bipod_02_f_hex",	
			"bipod_01_f_khk",	
			"bipod_02_f_lush",	
			"bipod_01_f_mtp",	
			"bipod_03_f_oli",	
			"bipod_01_f_snd",	
			"bipod_02_f_tan",	
			"rhsusf_acc_harris_bipod",	
			"rhs_acc_harris_swivel",
		};
		};
	};	
	};
	
	class arifle_RPK12_base_F : arifle_AK12_base_F
	{
	ACE_barrelLength = 590;
	aimTransitionSpeed = 0.95;
	dexterity = 1.6;	
	discreteDistance[] = {100,200,300,400,500,600,700,800};	
	DLC = "Enoch";
	handAnim[] = {"OFP2_ManSkeleton","a3\Anims_F_Enoch\Data\Anim\handanims\rpk12.rtm"};
	hasBipod = 1;
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	inertia = 0.7;
	initSpeed = -1.04196;
	magazines[] = {"75rnd_762x39_AK12_Mag_F"};
	model = "a3\Weapons_F_Enoch\Rifles\AK12\RPK12_F";
	recoil = "recoil_rpk12";
	soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
	soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 99.2080;
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		compatibleItems[]={""};
		};		
	};	
	};

	// RPK-16 7.62 to 5.45
	class arifle_RPK12_F : arifle_RPK12_base_F
	{
	_generalMacro = "arifle_RPK12_F";	
	baseWeapon = "arifle_RPK12_F";
	displayName = "RPK-16";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] = 
	{
	"75rnd_762x39_AK12_Mag_F",
	"75rnd_762x39_AK12_Mag_Tracer_F",
	"75rnd_762x39_AK12_Arid_Mag_F",
	"75rnd_762x39_AK12_Arid_Mag_Tracer_F",
	"75rnd_762x39_AK12_Lush_Mag_F",
	"75rnd_762x39_AK12_Lush_Mag_Tracer_F",
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_RPK12_arid_F : arifle_RPK12_base_F
	{
	_generalMacro = "arifle_RPK12_arid_F";	
	baseWeapon = "arifle_RPK12_arid_F";
	displayName = "RPK-16 (Arid)";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};	
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_arid_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] = 
	{
	"75rnd_762x39_AK12_Arid_Mag_F",
	"75rnd_762x39_AK12_Arid_Mag_Tracer_F",
	"75rnd_762x39_AK12_Mag_F",
	"75rnd_762x39_AK12_Mag_Tracer_F",
	"75rnd_762x39_AK12_Lush_Mag_F",
	"75rnd_762x39_AK12_Lush_Mag_Tracer_F",	
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{		
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_RPK12_lush_F : arifle_RPK12_base_F
	{
	_generalMacro = "arifle_RPK12_lush_F";
	baseWeapon = "arifle_RPK12_lush_F";
	displayName = "RPK-16 (Lush)";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_lush_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] = 
	{
	"75rnd_762x39_AK12_Lush_Mag_F",
	"75rnd_762x39_AK12_Lush_Mag_Tracer_F",
	"75rnd_762x39_AK12_Mag_F",
	"75rnd_762x39_AK12_Mag_Tracer_F",
	"75rnd_762x39_AK12_Arid_Mag_F",
	"75rnd_762x39_AK12_Arid_Mag_Tracer_F",
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{			
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};	
	
	//---------------------------------------------AK-12 Conversion of existing "AK-15" Classes
	
	class arifle_AK12_545_F : arifle_AK12_base_F
    {
	_generalMacro = "arifle_AK12_545_F";	
	baseWeapon = "arifle_AK12_545_F";
	displayName = "AK-12";
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
    };
	
	class arifle_AK12_arid_545_F : arifle_AK12_base_F
	{
	_generalMacro = "arifle_AK12_arid_545_F";
	baseWeapon = "arifle_AK12_arid_545_F";
	displayName = "AK-12 (Arid)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12_lush_545_F : arifle_AK12_base_F
	{
	_generalMacro = "arifle_AK12_lush_545_F";
	baseWeapon = "arifle_AK12_lush_545_F";
	displayName = "AK-12 (Lush)";
	DLC = "Enoch";	
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};	
		
	class arifle_AK12_GL_545_F : arifle_AK12_GL_base_F
	{
	_generalMacro = "arifle_AK12_GL_545_F";
	baseWeapon = "arifle_AK12_GL_545_F";
	displayName = "AK-12 GL";
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","\a3\weapons_f_exp\rifles\ak12\data\ak12_ak12_gl_co.paa"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12_GL_arid_545_F : arifle_AK12_GL_base_F
	{
	_generalMacro = "arifle_AK12_GL_arid_545_F";
	baseWeapon = "arifle_AK12_GL_arid_545_F";
	displayName = "AK-12 GL (Arid)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"};	
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_arid_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12_GL_lush_545_F : arifle_AK12_GL_base_F
	{
	_generalMacro = "arifle_AK12_GL_lush_545_F";
	baseWeapon = "arifle_AK12_GL_lush_545_F";
	displayName = "AK-12 GL (Lush)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_khaki.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_khaki_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_lush_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};	
	
	
	class arifle_AK12U_545_F : arifle_AK12U_base_F
	{
	_generalMacro = "arifle_AK12U_545_F";
	baseWeapon = "arifle_AK12U_545_F";
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
	displayName = "AK-12K";
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12U_arid_545_F : arifle_AK12U_base_F
	{
	_generalMacro = "arifle_AK12U_arid_545_F";
	baseWeapon = "arifle_AK12U_arid_545_F";
	displayName = "AK-12K (Arid)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_arid_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12U_lush_545_F : arifle_AK12U_base_F
	{
	_generalMacro = "arifle_AK12U_lush_545_F";
	baseWeapon = "arifle_AK12U_lush_545_F";
	displayName = "AK-12K (Lush)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_lush_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{		
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};		
	
	//AK-15 and GL Optics "fix" because it wont work otherwise?
	class arifle_AK12_F: arifle_AK12_base_F
	{
	baseWeapon = "arifle_AK12_F";
	displayName = "AK-15";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";	
	scope = 2;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 72.7525;	
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		};		
	};
	};
	
	class arifle_AK12_arid_F : arifle_AK12_base_F
	{
	_generalMacro = "arifle_AK12_arid_F";
	baseWeapon = "arifle_AK12_arid_F";
	displayName = "AK-15 (Arid)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};	
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
	magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_Tracer_F"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
	scope = 2;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 72.7525;	
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		};		
	};
	};
	
	class arifle_AK12_lush_F : arifle_AK12_base_F
	{	
	_generalMacro = "arifle_AK12_lush_F";	
	baseWeapon = "arifle_AK12_lush_F";
	displayName = "AK-15 (Lush)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
	magazines[] = {"30Rnd_762x39_AK12_Lush_Mag_F","30Rnd_762x39_AK12_Lush_Mag_Tracer_F"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
	scope = 2;
		class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 72.7525;	
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		};		
	};
	};
	
	class arifle_AK12_GL_F : arifle_AK12_GL_base_F
	{	
	_generalMacro = "arifle_AK12_GL_F";	
	baseWeapon = "arifle_AK12_GL_F";
	displayName = "AK-15 GL";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","\a3\weapons_f_exp\rifles\ak12\data\ak12_ak12_gl_co.paa"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
	scope = 2;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 103.6172;	
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		};		
	};
	};
	
	class arifle_AK12_GL_arid_F : arifle_AK12_GL_base_F
	{
	_generalMacro = "arifle_AK12_GL_arid_F";	
	baseWeapon = "arifle_AK12_GL_arid_F";
	displayName = "AK-15 GL (Arid)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"};
	magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_Tracer_F"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_arid_F_CA.paa";	
	scope = 2;
		class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 103.6172;	
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		};		
	};
	};
	
	class arifle_AK12_GL_lush_F : arifle_AK12_GL_base_F
	{
	_generalMacro = "arifle_AK12_GL_lush_F";
	baseWeapon = "arifle_AK12_GL_khaki_F";
	displayName = "AK-15 GL (Lush)";
	DLC = "Enoch";	
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_khaki.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_khaki_CO.paa"};	
	magazines[] = {"30Rnd_762x39_AK12_Lush_Mag_F","30Rnd_762x39_AK12_Lush_Mag_Tracer_F"};		
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_lush_F_CA.paa";
	scope = 2;	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	allowedSlots[] = {901};	
	mass = 103.6172;	
		class CowsSlot : CowsSlot
		{
		displayName = "Optics Slot";
		iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
		iconPinpoint = "Bottom";
		iconPosition[] = {0,0};
		iconScale = 0;
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		scope = 0;
			compatibleItems[]=
			{
			"rhs_acc_rakurspm",
			"rhs_acc_1p87",
			"ffaa_optic_acog",
			"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_acog2_usmc",
			"rhsusf_acc_acog3_usmc",
			"rhsusf_acc_acog_usmc",
			"rhsusf_acc_anpvs27",
			"ace_optic_arco_2d",
			"optic_arco_arid_f",
			"optic_arco_lush_f",
			"ace_optic_arco_pip",
			"optic_arco_ak_arid_f",
			"optic_arco_ak_blk_f",
			"optic_arco_ak_lush_f",
			"optic_yorris",
			"optic_dms",
			"optic_dms_ghex_f",
			"optic_aco_grn",
			"optic_aco",
			"optic_aco_grn_smg",
			"optic_aco_smg",
			"rhs_acc_dh520x56",
			"optic_dms_weathered_f",
			"optic_dms_weathered_kir_f",
			"rhs_acc_ekp8_18",
			"optic_arco_blk_f",
			"optic_arco_ghex_f",
			"optic_arco",
			"ffaa_optic_elcan",
			"ffaa_optic_elcan_ard",
			"ffaa_optic_holografico",
			"rksl_optic_eot552",
			"rksl_optic_eot552_c",
			"rksl_optic_eot552x",
			"rksl_optic_eot552x_c",
			"optic_holosight_blk_f",
			"optic_holosight_khk_f",
			"optic_holosight",
			"optic_holosight_smg_blk_f",
			"optic_holosight_smg_khk_f",
			"optic_holosight_smg",
			"rhsusf_acc_eotech",
			"rhsusf_acc_g33_t1",
			"rhsusf_acc_g33_xps3",
			"rhsusf_acc_g33_xps3_tan",
			"optic_mrco",
			"optic_khs_blk",
			"optic_khs_hex",
			"optic_khs_old",
			"optic_khs_tan",
			"uk3cb_baf_kite",
			"uk3cb_baf_maxikite",
			"rksl_optic_lds",
			"rksl_optic_lds_c",
			"uk3cb_baf_specterlds",
			"optic_hamr",
			"optic_hamr_khk_f",
			"ace_optic_lrps_2d",
			"ace_optic_lrps_pip",
			"rhsusf_acc_elcan",
			"rhsusf_acc_elcan_ard",
			"rhsusf_acc_acog",
			"rhsusf_acc_acog2",
			"rhsusf_acc_acog3",
			"rhsusf_acc_m2a1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_eotech_552_d",
			"rhsusf_acc_eotech_552_wd",
			"rhsusf_acc_compm4",
			"rhsusf_acc_premier_mrds",
			"rhsusf_acc_leupoldmk4_2_mrds",
			"optic_holosight_arid_f",
			"optic_holosight_lush_f",
			"optic_sos",
			"ace_optic_sos_2d",
			"optic_sos_khk_f",
			"ace_optic_sos_pip",
			"ace_optic_mrco_2d",
			"rhsusf_acc_mrds",
			"rhsusf_acc_mrds_c",
			"optic_lrps",
			"optic_lrps_ghex_f",
			"optic_lrps_tna_f",
			"optic_nightstalker",
			"optic_nvs",
			"rhs_acc_okp7_picatinny",
			"ace_optic_hamr_2d",
			"ace_optic_hamr_pip",
			"rhsusf_acc_rm05",
			"rksl_optic_rmr_ms19",
			"rksl_optic_rmr_ms19_fde",
			"rksl_optic_rmr_rm33",
			"rksl_optic_rmr_rm33_fde",
			"rhsusf_acc_rx01_nofilter",
			"rhsgref_acc_rx01_nofilter_camo",
			"rhsgref_acc_rx01_camo",
			"rhsusf_acc_rx01",
			"rhsusf_acc_rx01_nofilter_tan",
			"rhsusf_acc_rx01_tan",
			"rksl_optic_pmii_312",
			"rksl_optic_pmii_312_des",
			"rksl_optic_pmii_312_sunshade",
			"rksl_optic_pmii_312_sunshade_des",
			"rksl_optic_pmii_312_sunshade_wdl",
			"rksl_optic_pmii_312_wdl",
			"rksl_optic_pmii_525",
			"rksl_optic_pmii_525_des",
			"rksl_optic_pmii_525_wdl",
			"optic_erco_blk_f",
			"optic_erco_khk_f",
			"optic_erco_snd_f",
			"rhsusf_acc_su230",
			"rhsusf_acc_su230_c",
			"rhsusf_acc_su230_mrds",
			"rhsusf_acc_su230_mrds_c",
			"rhsusf_acc_su230a",
			"rhsusf_acc_su230a_c",
			"rhsusf_acc_su230a_mrds",
			"rhsusf_acc_su230a_mrds_c",
			"rhsusf_acc_acog_mdo",
			"rhsusf_acc_t1_high",
			"rhsusf_acc_t1_low",
			"uk3cb_baf_suit",
			"uk3cb_baf_susat",
			"rhsusf_acc_acog_rmr",
			"rhsusf_acc_acog_d",
			"rhsusf_acc_acog_wd",
			"uk3cb_baf_ta31f",
			"uk3cb_baf_ta31f_hornbill",
			"uk3cb_baf_ta648",
			"uk3cb_baf_ta648_308",
			"optic_tws",
			"optic_tws_mg",
			"optic_ams",
			"optic_ams_khk",
			"optic_ams_snd",
			"rhsusf_acc_eotech_xps3",
			};
		};
		class MuzzleSlot : MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"ace_muzzle_mzls_b",
			"muzzle_snds_b_arid_f",
			"muzzle_snds_b_khk_f",
			"muzzle_snds_b_lush_f",
			"muzzle_snds_b_snd_f",
			"muzzle_snds_b",
			};
		};
		class PointerSlot : PointerSlot
		{
		displayName = "Pointer Slot";
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f\proxies\weapon_slots\side";
		scope = 0;
		compatibleItems[]=
			{
			"rhs_acc_2dpzenit_ris",
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_anpeq15a",
			"rhsusf_acc_anpeq16a",
			"rhsusf_acc_anpeq16a_light",
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
		class UnderBarrelSlot : UnderBarrelSlot
		{
		iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
		iconPinPoint = "Left";
		iconPosition[] = {0,0};
		iconScale = 1;
		linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
		scope = 0;
		};		
	};
	};
};