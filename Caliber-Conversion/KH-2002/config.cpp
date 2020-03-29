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

#include "csatconfig.cpp"

class Mode_FullAuto;
class Mode_Burst;
class Mode_SemiAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
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
	magazines[] =
	{
	"30Rnd_65x39_caseless_green",
	"30Rnd_65x39_caseless_green_mag_Tracer"
	};
	magazineWell[] = {"CBA_556x45_STANAG"};
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
			"muzzle_snds_m",
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
				"muzzle_snds_m",
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
				"muzzle_snds_m",
				};
			};
		};		
	};
};

class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;
	
	class 30Rnd_65x39_caseless_green : 30Rnd_65x39_caseless_mag
	{
	ammo = "B_556x45_Ball_Tracer_Green";
	author = "Bohemia Interactive";
	count = 30;
	descriptionShort = "Caliber: 5.56x45 mm - Caseless<br />Rounds: 30<br />Used in: KH-2002";
	displayname = "5.56 mm 30Rnd Mag";
	displaynameshort = "5.56mm";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	initSpeed = 788;
	lastRoundsTracer = 0;
	mass = 10;
	maxLeadSpeed = 25;
	maxThrowHoldTime = 2;
	maxThrowIntensityCoef = 1.4;
	minThrowIntensityCoef = 0.3;
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
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

	class 30Rnd_65x39_caseless_green_mag_Tracer : 30Rnd_65x39_caseless_green
	{
	descriptionShort = "Caliber: 5.56x45 mm Tracer (Green) - Caseless<br />Rounds: 30<br />Used in: KH-2002";
	displayname = "5.56 mm 30Rnd Tracer Mag";
	displaynameshort = "Tracer";	
	tracersEvery = 1;
	};

};