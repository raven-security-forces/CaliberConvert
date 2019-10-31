class CfgPatches 
{
    class RSF_MG5_Conversion 
    {
        name = "RSF MG5 Conversion Mod";
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

class CfgMagazines
{
  class Default;
  class CA_Magazine: Default {};
  
	class 120Rnd_762x51_Mag_M61_F: CA_Magazine
	{
	picture = "\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
	scope=2;
	displayName = "7.62 mm 120Rnd M61 AP Box";
	displayNameShort = "";
	descriptionShort = "Caliber: 7.62x51 mm<br />Rounds: 120<br />Used in: MG5";
	ammo="rhs_ammo_762x51_M61_AP";
	count = 120;
	initSpeed=838;
	tracersEvery=5;
	lastRoundsTracer=0;
	mass=38
	};

  class 120Rnd_762x51_Mag_M62_F: 120Rnd_762x51_Mag_M61_F
	{
	displayName = "7.62 mm 120Rnd M62 (Tracer) Box";
	ammo="rhs_ammo_762x51_M62_Tracer";
	tracersEvery=1;
	lastRoundsTracer=0;
	};
  
   class 120Rnd_762x51_Mag_M80_F: 120Rnd_762x51_Mag_M61_F
	{
	displayName = "7.62 mm 120Rnd M80 Box";
	ammo="rhs_ammo_762x51_M80_Ball";
	};
  
   class 120Rnd_762x51_Mag_M80A1_F: 120Rnd_762x51_Mag_M61_F
	{
	displayName = "7.62 mm 120Rnd M80A1 EPR Box";
	ammo="rhs_ammo_762x51_M80A1EPR_Ball";
	initSpeed=803;
	};
  
    class 120Rnd_762x51_Mag_M993_AP_F: 120Rnd_762x51_Mag_M61_F
	{
	displayName = "7.62 mm 120Rnd M993 AP Box";
	ammo="rhs_ammo_762x51_M993_Ball";
	initSpeed=911;
	};
  
  	class 120Rnd_762x51_Mag_M82_F: CA_Magazine
	{
	picture = "\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
	scope=2;
	displayName = "7.62 mm 120Rnd M82 (Blank) Box";
	displayNameShort = "";
	descriptionShort = "Caliber: 7.62x51 mm<br />Rounds: 120<br />Used in: MG5";
	ammo="rhs_ammo_762x51_M82_blank";
	count = 120;
	initSpeed=838;
	tracersEvery=5;
	lastRoundsTracer=0;
	mass=38
	};
};

class CfgWeapons 
{
	
class MMG_01_base_F;	

	 class MMG_01_hex_F: MMG_01_base_F
    {
        displayName="MG5 (Hex)";
		descriptionShort = "Medium Machine Gun<br />Caliber: 7.62x51 mm";
		magazines[] = 
		{
		"120Rnd_762x51_Mag_M61_F",
		"120Rnd_762x51_Mag_M62_F",
		"120Rnd_762x51_Mag_M80_F",
		"120Rnd_762x51_Mag_M80A1_F",
		"120Rnd_762x51_Mag_M993_AP_F",
		"120Rnd_762x51_Mag_M82_F",
		};
        magazineWell[] = {};
		ACE_barrelTwist = 360;
		ACE_barrelLength = 550;
		ACE_twistDirection = 1;
		mass = 246.9177;
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]= 
				{
				"ace_muzzle_mzls_b",
				"muzzle_snds_h_mg_blk_f",
				"muzzle_snds_h_mg",
				"muzzle_snds_h_mg_khk_f"
				};
			};
		};		
    };
	
	class MMG_01_tan_F: MMG_01_hex_F
    {
        displayName="MG5 (Tan)";
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]= 
				{
				"ace_muzzle_mzls_b",
				"muzzle_snds_h_mg_blk_f",
				"muzzle_snds_h_mg",
				"muzzle_snds_h_mg_khk_f"
				};
			};
		};		
    };
};