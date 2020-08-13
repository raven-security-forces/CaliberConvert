class CfgPatches
{
	class RSF_MSBS_Conversion
	{
	name = "RSF MSBS Conversion Mod";
	author = "Nero";
	url = "";
	version="0.8.0";
	versionStr="0.8.0";
	requiredAddons[]=
	{
	"A3_Weapons_F_Enoch",
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

#include "faction_config_msbs.cpp"

class Mode_FullAuto;
class WeaponSlotsInfo;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	
	// MSBS Grot B 
	
	class arifle_MSBS65_base_F : Rifle_Base_F
	{
	descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
	displayName = "MSBS Grot B";
	magazines[] = {"30Rnd_65x39_caseless_msbs_mag"};
	magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D_XL","STANAG_556x45","STANAG_556x45_Large"};
	modes[] = {"Single","Burst3","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
	soundBurst = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 75;			
			class CowsSlot : asdg_OpticRail1913 {};
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};
		};
		
	class FullAuto : Mode_FullAuto {};
	class Burst3 : FullAuto
	{
	aiDispersionCoefX = 2;
	aiDispersionCoefY = 3;
	aiRateOfFire = 2;
	aiRateOfFireDispersion = 1;
	aiRateOfFireDistance = 500;
	artilleryCharge = 1;
	artilleryDispersion = 1;
	autoFire = 0;
	burst = 3;
	burstRangeMax = -1;
	canShootInWater = 0;
	dispersion = 0.00073;
	displayName = "Burst";
	ffCount = 1;
	ffFrequency = 11;
	ffMagnitude = 0.5;
	flash = "gunfire";
	flashSize = 0.1;
	maxRange = 250;
	maxRangeProbab = 0.2;
	midRange = 150;
	midRangeProbab = 0.7;
	minRange = 2;
	minRangeProbab = 0.5;
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
	soundLoop[] = {};
	sounds[] = {"StandardSound","SilencedSound"};
	textureType = "burst";
	useAction = 0;
	useActionTitle = "";
	weaponSoundEffect = "";
		class SilencedSound
		{
		soundSetShot[] = {"Msbs65_01_Shot_Silencer_SoundSet","Msbs65_01_Tail_Int_Silencer_SoundSet"};	
		};
		class StandardSound
		{
		soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};	
		};	
	};	
	};
	
	class arifle_MSBS65_F : arifle_MSBS65_base_F
	{
	displayName = "MSBS Grot B (Green)";
	};
	
	class arifle_MSBS65_base_camo_F;
	class arifle_MSBS65_camo_F : arifle_MSBS65_base_camo_F
	{
	displayName = "MSBS Grot B (Camo)";
	};
	
	class arifle_MSBS65_base_black_F;
	class arifle_MSBS65_black_F : arifle_MSBS65_base_black_F
	{
	displayName = "MSBS Grot B (Black)";
	};
	
	class arifle_MSBS65_base_sand_F;
	class arifle_MSBS65_sand_F : arifle_MSBS65_base_sand_F
	{
	displayName = "MSBS Grot B (Sand)";
	};

	// MSBS Grot B GL
	
	class arifle_MSBS65_GL_base_F : arifle_MSBS65_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 100;
		};
	};
	class arifle_MSBS65_GL_F : arifle_MSBS65_GL_base_F
	{
	displayName = "MSBS Grot B GL (Green)";
	};
	
	class arifle_MSBS65_GL_base_camo_F;
	class arifle_MSBS65_GL_camo_F : arifle_MSBS65_GL_base_camo_F
	{
	displayName = "MSBS Grot B GL (Camo)";
	};

	class arifle_MSBS65_GL_base_black_F;
	class arifle_MSBS65_GL_black_F : arifle_MSBS65_GL_base_black_F
	{
	displayName = "MSBS Grot B GL (Black)";
	};

	class arifle_MSBS65_GL_base_sand_F;
	class arifle_MSBS65_GL_sand_F : arifle_MSBS65_GL_base_sand_F
	{
	displayName = "MSBS Grot B GL (Sand)";
	};
	
	// MSBS Grot B DMR

	class arifle_MSBS65_Mark_base_F : arifle_MSBS65_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 95;		
			class CowsSlot : asdg_OpticRail1913 {};
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class UnderBarrelSlot : asdg_UnderSlot {};
			class PointerSlot : asdg_FrontSideRail {};
		};
	};
	class arifle_MSBS65_Mark_F : arifle_MSBS65_Mark_base_F
	{
	displayName = "MSBS Grot B DMR (Green)";
	};
	
	class arifle_MSBS65_Mark_base_camo_F;
	class arifle_MSBS65_Mark_camo_F : arifle_MSBS65_Mark_base_camo_F
	{
	displayName = "MSBS Grot B DMR (Camo)";
	};

	class arifle_MSBS65_Mark_base_black_F;
	class arifle_MSBS65_Mark_black_F : arifle_MSBS65_Mark_base_black_F
	{
	displayName = "MSBS Grot B DMR (Black)";
	};

	class arifle_MSBS65_Mark_base_sand_F;
	class arifle_MSBS65_Mark_sand_F : arifle_MSBS65_Mark_base_sand_F
	{
	displayName = "MSBS Grot B DMR (Sand)";
	};

	// MSBS Grot B SIX12

	class arifle_MSBS65_UBS_base_F : arifle_MSBS65_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 115;
		};
	};
	class arifle_MSBS65_UBS_F : arifle_MSBS65_UBS_base_F
	{
	displayName = "MSBS Grot B SIX12 (Green)";
	};
	
	class arifle_MSBS65_UBS_base_camo_F;
	class arifle_MSBS65_UBS_camo_F : arifle_MSBS65_UBS_base_camo_F
	{
	displayName = "MSBS Grot B SIX12 (Camo)";
	};

	class arifle_MSBS65_UBS_base_black_F;
	class arifle_MSBS65_UBS_black_F : arifle_MSBS65_UBS_base_black_F
	{
	displayName = "MSBS Grot B SIX12 (Black)";
	};

	class arifle_MSBS65_UBS_base_sand_F;
	class arifle_MSBS65_UBS_sand_F : arifle_MSBS65_UBS_base_sand_F
	{
	displayName = "MSBS Grot B SIX12 (Sand)";
	};
};

class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;
	
	class 30Rnd_65x39_caseless_msbs_mag : 30Rnd_65x39_caseless_mag
	{
	ammo = "B_556x45_Ball";
	author = "Bohemia Interactive";
	count = 30;
	descriptionShort = "Caliber: 5.56x45 mm STANAG Caseless<br />Rounds: 30<br />Used in: MSBS Grot B";
	displayName = "5.56 mm 30Rnd Mag (MSBS)";
	displaynameshort = "5.56mm";
	DLC = "Enoch";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	initSpeed = 774;
	lastRoundsTracer = 0;
	mass = 8;
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
	displayName = "5.56 mm 30Rnd Tracer Mag (MSBS)";	
	displayNameShort = "Tracer";
	picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_Tracer_CA.paa";
	tracersEvery = 1;
	};
};
