class CfgPatches
{
  class RSF_KH2002_Conversion
  {
    name = "RSF KH-2002 Conversion Mod";
    author = "Nero / SpartanD39";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
    requiredAddons[] =
    {
      "A3_Weapons_F",
      "A3_Weapons_F_Mark",
      "A3_Sounds_F",
      "ace_advanced_ballistics",
      "ace_advanced_fatigue",
      "ace_advanced_throwing",
  		"ace_ai",
      "ace_aircraft",
      "ace_apl",
      "ace_arsenal",
      "ace_atragmx",
      "ace_attach",
      "ace_backpacks",
      "ace_ballistics",
      "ace_captives",
      "ace_cargo",
      "ace_chemlights",
      "ace_common",
      "ace_concertina_wire",
      "ace_cookoff",
      "ace_dagr",
      "ace_disarming",
      "ace_disposable",
      "ace_dogtags",
      "ace_dragging",
      "ace_explosives",
      "ace_fastroping",
      "ace_fcs",
      "ace_finger",
      "ace_flashlights",
      "ace_flashsuppressors",
      "ace_fonts",
      "ace_frag",
      "ace_gestures",
      "ace_gforces",
      "ace_goggles",
      "ace_grenades",
      "ace_gunbag",
      "ace_hearing",
      "ace_hellfire",
      "ace_hitreactions",
      "ace_hot",
      "ace_huntir",
      "ace_interact_menu",
      "ace_interaction",
      "ace_inventory",
      "ace_javelin",
      "ace_kestrel4500",
      "ace_laser",
      "ace_laserpointer",
      "ace_logistics_uavbattery",
      "ace_logistics_wirecutter",
      "ace_magazinerepack",
      "ace_main",
      "ace_map",
      "ace_map_gestures",
      "ace_maptools",
      "ace_markers",
      "ace_maverick",
      "ace_medical",
      "ace_medical_ai",
      "ace_medical_blood",
      "ace_medical_menu",
      "ace_microdagr",
      "ace_minedetector",
      "ace_missileguidance",
      "ace_missionmodules",
      "ace_mk6mortar",
      "ace_modules",
      "ace_movement",
      "ace_mx2a",
      "ace_nametags",
      "ace_nightvision",
      "ace_nlaw",
      "ace_noidle",
      "ace_noradio",
      "ace_norearm",
      "ace_optics",
      "ace_optionsmenu",
      "ace_overheating",
      "ace_overpressure",
      "ace_parachute",
      "ace_pylons",
      "ace_quickmount",
      "ace_rangecard",
      "ace_realisticnames",
      "ace_realisticweights",
      "ace_rearm",
      "ace_recoil",
      "ace_refuel",
      "ace_reload",
      "ace_reloadlaunchers",
      "ace_repair",
      "ace_respawn",
      "ace_safemode",
      "ace_sandbag",
      "ace_scopes",
      "ace_slideshow",
      "ace_smallarms",
      "ace_spectator",
      "ace_spottingscope",
      "ace_switchunits",
      "ace_tacticalladder",
      "ace_tagging",
      "ace_thermals",
      "ace_trenches",
      "ace_tripod",
      "ace_ui",
      "ace_vector",
      "ace_vehiclelock",
      "ace_vehicles",
      "ace_viewdistance",
      "ace_weaponselect",
      "ace_weather",
      "ace_winddeflection",
  		"ace_yardage450",
      "ace_zeus"
		};

    units[] = {};
    weapons[] = {};

  };

};

class CfgMagazineWells
{
	class nth_556x45_katiba
	{
		KH_Magazines[] =
		{
		"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
  		"ACE_30Rnd_556x45_Stanag_Mk262_mag",
  		"ACE_30Rnd_556x45_Stanag_Mk318_mag",
  		"ACE_30Rnd_556x45_Stanag_Tracer_Dim",
  		"30Rnd_556x45_Stanag",
  		"30Rnd_556x45_Stanag_green",
  		"30Rnd_556x45_Stanag_red",
  		"30Rnd_556x45_Stanag_Tracer_Red",
  		"30Rnd_556x45_Stanag_Tracer_Green",
  		"30Rnd_556x45_Stanag_Tracer_Yellow",
  		"rhs_mag_30Rnd_556x45_M855_Stanag",
  		"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
  		"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
  		"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
  		"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
  		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
  		"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
  		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
  		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
  		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
  		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
  		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
  		"rhs_mag_30Rnd_556x45_Mk262_Stanag",
  		"rhs_mag_30Rnd_556x45_M200_Stanag",
  		"rhs_mag_30Rnd_556x45_M855A1_PMAG",
  		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
  		"rhs_mag_30Rnd_556x45_M855_PMAG",
  		"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",
  		"rhs_mag_30Rnd_556x45_Mk318_PMAG",
  		"rhs_mag_30Rnd_556x45_Mk262_PMAG",
  		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",
  		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
  		"rhs_mag_30Rnd_556x45_M855_PMAG_Tan",
  		"rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red",
  		"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",
  		"rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan"
		};
	};
	
};

class Mode_FullAuto;
class Mode_Burst;
class Mode_SemiAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class BaseSoundModeType;

class CfgWeapons
{
  class arifle_Katiba_base_F;

  class arifle_Katiba_F: arifle_Katiba_base_F
  {
    displayName="KH-2002";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		caseless[] = {"",0,0,0};
		linkProxy="\A3\data_f\proxies\weapon_slots\MAGAZINESLOT";
		magazines[] ={};
		magazineWell[] = {"nth_556x45_katiba"};
		ACE_barrelTwist = 203;
		ACE_barrelLength = 508;
		ACE_twistDirection = 1;
		
    modes[]=
  	{
  		"Single",
		"Burst",
  		"FullAuto",
  		"single_medium_optics1",
  		"single_far_optics2",
  		"fullauto_medium"
    };

    soundBurst=false;
	  class Burst: Mode_Burst
	  {
  		reloadTime=0.075000003;
  		dispersion=0.0022;
  		minRange=1;
  		minRangeProbab=0.69999999;
  		midRange=60;
  		midRangeProbab=0.80000001;
  		maxRange=120;
  		maxRangeProbab=0.2;

      sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};

      class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",
					0.17782794,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.17782794,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};

      class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Katiba_Shot_SoundSet",
					"Katiba_Tail_SoundSet",
					"Katiba_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_01",
					3.1622777,
					1,
					1800
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_02",
					3.1622777,
					1,
					1800
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_03",
					3.1622777,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin2",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};

      class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Katiba_silencerShot_SoundSet",
					"Katiba_silencerTail_SoundSet",
					"Katiba_silencerInteriorTail_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};

	  };

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
			"muzzle_snds_m"
			};
		};
	};

};

class arifle_Katiba_C_F: arifle_Katiba_F
	{
    displayName="KH-2002C";
	ACE_barrelLength = 394;
	
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
				"muzzle_snds_m"
				};
			};		
	
		};
	};

	class arifle_Katiba_GL_F: arifle_Katiba_F
	{
		displayName="KH-2002 UGL";
		
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
				"muzzle_snds_m"
				};
				
			};		
	
		};
	};

};