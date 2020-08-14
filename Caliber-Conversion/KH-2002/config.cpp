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

#include "faction_config_katiba.cpp"


class Mode_Burst;
class WeaponSlotsInfo;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class CfgWeapons
{
	class Rifle_Base_F;
	class arifle_Katiba_base_F : Rifle_Base_F
	{
	caseless[] = {"",0,0,0};
	descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
    displayName="KH-2002";
	magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer"};
	magazineWell[] = {"RSF_556x45_KH2002","CBA_556x45_STANAG","STANAG_556x45"};
	modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium","ACE_Burst_far"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class CowsSlot : asdg_OpticRail1913 {};
			class MuzzleSlot : asdg_MuzzleSlot_556 
			{
			iconPosition[]={0,0.44999999};
			iconScale=0.2;	
			};
			class PointerSlot : asdg_FrontSideRail {};
		};
	};
	
	class arifle_Katiba_F: arifle_Katiba_base_F
	{
	class Burst : Mode_Burst
	{
	aiDispersionCoefX = 1.9;
	aiDispersionCoefY = 2.4;
	aiRateOfFire = 0.5;
	aiRateOfFireDispersion = 0;
	aiRateOfFireDistance = 500;
	artilleryCharge = 1;
	artilleryDispersion = 1;
	autoFire = 0;
	burst = 3;
	burstRangeMax = -1;
	canShootInWater = 0;
	dispersion = 0.00145;
	displayName = "Burst";
	ffCount = 1;
	ffFrequency = 11;
	ffMagnitude = 0.5;
	flash = "gunfire";
	flashSize = 0.1;
	maxRange = 150;
	maxRangeProbab = 0.04;
	midRange = 60;
	midRangeProbab = 0.58;
	minRange = 10;
	minRangeProbab = 0.3;
	multiplier = 1;
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	reloadTime = 0.075;
	requiredOpticType = -1;
	showToPlayer = 1;
	sound[] = {"",10,1};
	soundBegin[] = {"sound",1};
	soundBeginWater[] = {"sound",1};
	soundBurst = 0;	
	soundClosure[] = {"sound",1};
	soundContinuous = 0;
	soundEnd[] = {"sound",1};
	soundLoop[] = {"sound",1};
	sounds[] = {"StandardSound","SilencedSound"};
	textureType = "burst";
	useAction = 0;
	useActionTitle = "";
	weaponSoundEffect = "";
	
	class BaseSoundModeType
	{
	closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",0.562341,1,10};
	closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",0.562341,1,10};	
	soundClosure[] = {"closure1",0.5,"closure2",0.5};
	};
		class SilencedSound : BaseSoundModeType
		{
		begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",0.794328,1,400};
		begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",0.794328,1,400};
		begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",0.794328,1,400};
		closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",0.562341,1,10};
		closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",0.562341,1,10};
		soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
		soundSetShot[] = {"Katiba_silencerShot_SoundSet","Katiba_silencerTail_SoundSet","Katiba_silencerInteriorTail_SoundSet"};	
			class SoundTails
			{
				class TailForest
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",1,1,400};
				volume = "(1-interior/1.4)*forest";	
				};
				
				class TailHouses
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",1,1,400};
				volume = "(1-interior/1.4)*houses";
				};
				
				class TailInterior
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",1,1,400};
				volume = "interior";
				};
				
				class TailMeadows
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",1,1,400};
				volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				
				class TailTrees
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",1,1,400};
				volume = "(1-interior/1.4)*trees";
				};			
			};
		};

		class StandardSound : BaseSoundModeType
		{
		begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_01",3.16228,1,1800};
		begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_02",3.16228,1,1800};
		begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_03",3.16228,1,1800};
		closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",0.562341,1,10};
		closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",0.562341,1,10};
		soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
		soundSetShot[] = {"Katiba_Shot_SoundSet","Katiba_Tail_SoundSet","Katiba_InteriorTail_SoundSet"};
			class SoundTails
			{
				class TailForest
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",1,1,1800};
				volume = "(1-interior/1.4)*forest";
				};
				
				class TailHouses
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",1,1,1800};
				volume = "(1-interior/1.4)*houses";
				};
				
				class TailInterior
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",1.58489,1,1800};
				volume = "interior";
				};
				class TailMeadows
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",1,1,1800};
				volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				
				class TailTrees
				{
				frequency = 1;
				sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",1,1,1800};
				volume = "(1-interior/1.4)*trees";
				};
			};
		};
	};	
	descriptionShort = "Assault Rifle <br/>Caliber: 5.56x45 mm NATO";	
	displayName = "KH-2002";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class CowsSlot : asdg_OpticRail1913 {};
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};
		};
	};

	class arifle_Katiba_C_F: arifle_Katiba_F
	{
    displayName="KH-2002C";
	descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class CowsSlot : asdg_OpticRail1913 {};
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};
		};
	};

	class arifle_Katiba_GL_F: arifle_Katiba_F
	{
	displayName="KH-2002 UGL";	
	descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class CowsSlot : asdg_OpticRail1913 {};
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};
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

// New Magwell with now 5.56 Magazines

class CfgMagazineWells
{
	class RSF_556x45_KH2002
	{
	ace_ballistics[] = {};
	BI_Magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer"};
	};
};