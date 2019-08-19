class CfgPatches 
{
    class RSF_QBU88_Conversion 
    {
        name = "RSF QBU-88 Conversion Mod";
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
class CfgWeapons 
{
	
class DMR_07_base_F;
	
	class srifle_DMR_07_blk_F: DMR_07_base_F
    {
        displayName="QBU-88 (Black)";
		descriptionShort = "Marksman Rifle<br />Caliber: 5.8x42 mm";
		magazines[] = 
		{
		"10Rnd_580x42_Mag_F",
		"10Rnd_580x42_Mag_Tracer_F",
		};
        magazineWell[] = {""};
		
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
	
	class srifle_DMR_07_hex_F: DMR_07_base_F
    {
        displayName="QBU-88 (Hex)";
		descriptionShort = "Marksman Rifle<br />Caliber: 5.8x42 mm";
		magazines[] = 
		{
		"10Rnd_580x42_Mag_F",
		"10Rnd_580x42_Mag_Tracer_F",
		};
        magazineWell[] = {""};
		
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
		"10Rnd_580x42_Mag_F",
		"10Rnd_580x42_Mag_Tracer_F",
		};
        magazineWell[] = {""};
		
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