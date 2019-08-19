class cfgPatches 
{
    class RSF_RFB_Conversion 
    {
        name = "RSF RFB Conversion Mod";
        author = "Nero";
        url = "";
        version="0.0.1";
        versionStr="0.0.1";
        requiredAddons[] = {"A3_Weapons_F","ace_advanced_ballistics","ace_advanced_fatigue","ace_advanced_throwing",
		"ace_ai","ace_aircraft","ace_apl","ace_arsenal","ace_atragmx","ace_attach","ace_backpacks","ace_ballistics",
		"ace_captives","ace_cargo","ace_chemlights","ace_common","ace_concertina_wire","ace_cookoff","ace_dagr",
		"ace_disarming","ace_disposable","ace_dogtags","ace_dragging","ace_explosives","ace_fastroping","ace_fcs",
		"ace_finger","ace_flashlights","ace_flashsuppressors","ace_fonts","ace_frag","ace_gestures","ace_gforces",
		"ace_goggles","ace_grenades","ace_gunbag","ace_hearing","ace_hellfire","ace_hitreactions","ace_hot",
		"ace_huntir","ace_interact_menu","ace_interaction","ace_inventory","ace_javelin","ace_kestrel4500",
		"ace_laser","ace_laserpointer","ace_logistics_uavbattery","ace_logistics_wirecutter","ace_magazinerepack",
		"ace_main","ace_map","ace_map_gestures","ace_maptools","ace_markers","ace_maverick","ace_medical","ace_medical_ai",
		"ace_medical_blood","ace_medical_menu","ace_microdagr","ace_minedetector","ace_missileguidance","ace_missionmodules",
		"ace_mk6mortar","ace_modules","ace_movement","ace_mx2a","ace_nametags","ace_nightvision","ace_nlaw","ace_noidle",
		"ace_noradio","ace_norearm","ace_optics","ace_optionsmenu","ace_overheating","ace_overpressure","ace_parachute",
		"ace_pylons","ace_quickmount","ace_rangecard","ace_realisticnames","ace_realisticweights","ace_rearm",
		"ace_recoil","ace_refuel","ace_reload","ace_reloadlaunchers","ace_repair","ace_respawn","ace_safemode",
		"ace_sandbag","ace_scopes","ace_slideshow","ace_smallarms","ace_spectator","ace_spottingscope","ace_switchunits",
		"ace_tacticalladder","ace_tagging","ace_thermals","ace_trenches","ace_tripod","ace_ui","ace_vector",
		"ace_vehiclelock","ace_vehicles","ace_viewdistance","ace_weaponselect","ace_weather","ace_winddeflection",
		"ace_yardage450","ace_zeus"
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
class Mode_SemiAuto;

class CfgWeapons 
{
	
class SDAR_base_F;	

	 class arifle_SDAR_F: SDAR_base_F
    {
        displayName="RFB";
		descriptionShort = "Assault Rifle Gun<br />Caliber: 7.62x51 mm";
		magazines[] = 
		{
		"ACE_20Rnd_762x51_Mag_Tracer",
		"ACE_20Rnd_762x51_Mag_Tracer_Dim",
		"ACE_20Rnd_762x51_Mag_SD",
		"ACE_10Rnd_762x51_M118LR_Mag",
		"ACE_10Rnd_762x51_Mk316_Mod_0_Mag",
		"ACE_10Rnd_762x51_Mk319_Mod_0_Mag",
		"ACE_10Rnd_762x51_M993_AP_Mag",
		"ACE_20Rnd_762x51_M118LR_Mag",
		"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
		"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
		"ACE_20Rnd_762x51_M993_AP_Mag",
		"20Rnd_762x51_Mag",
		"10Rnd_Mk14_762x51_Mag",
		"rhsusf_10Rnd_762x51_m118_special_Mag",
		"rhsusf_10Rnd_762x51_m62_Mag",
		"rhsusf_10Rnd_762x51_m993_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m62_Mag",
		"rhsusf_20Rnd_762x51_m993_Mag",
		"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",
		"rhsusf_20Rnd_762x51_SR25_m62_Mag",
		"rhsusf_20Rnd_762x51_SR25_m993_Mag",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd_Blank",
		"UK3CB_BAF_762_20Rnd_T"
		};
        magazineWell[] = {"CBA_762x51_G3","M14_762x51"};
		modes[]=
		{
			"Single",
		};	
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{	
				
			class CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = 
				{
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
		};	
    };
};	