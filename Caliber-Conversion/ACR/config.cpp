class CfgPatches
{
	class RSF_MX_Conversion
	{
	name = "RSF ACR Conversion Mod";
    author = "Nero";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
    requiredAddons[] =
    {
    "A3_Weapons_F",
	"A3_Weapons_F_Exp",
	"ace_ballistics",
	"ace_common",
	"ace_smallarms",
	"ace_realisticnames",
	"cba_jr",
	};
    units[] = {};
    weapons[] = {};
	};
};

#include "faction_config_mx.cpp"

class WeaponSlotsInfo;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class CfgWeapons
{
	// Editing Base Class, Enabling Bullet cases, 
	class Rifle_Base_F;
	class arifle_MX_Base_F : Rifle_Base_F
	{
	caseless[] = {"",0,0,0};	
	descriptionShort = "Assault rifle <br/>Caliber: 5.56x45 mm NATO";
	magazines[] = {"30Rnd_65x39_caseless_mag"};
	magazineWell[] = {"RSF_556x45_ACR"};
	};
  
  // ACR Basic
  // Changing Name and Description as it doesn't inherit
  // Soft edit of WeaponSlotsInfo to use 5.56 Barrel Attachments
  
	class arifle_MX_F : arifle_MX_Base_F
	{	
	displayName = "ACR Basic (Tan)";
	descriptionShort = "Assault rifle <br/>Caliber: 5.56x45 mm NATO";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};		
		};
	};
	
	class arifle_MX_Black_F : arifle_MX_F
	{
	displayName = "ACR Basic (Black)";
	};
	
	class arifle_MX_khk_F : arifle_MX_Black_F
	{
	displayName = "ACR Basic (Khaki)";	
	};
  
  
	// ACR Basic 3GL
	
	class arifle_MX_GL_F : arifle_MX_Base_F
	{		
	descriptionShort = "Assault rifle <br/>Caliber: 5.56x45 mm NATO";
	displayName = "ACR Basic 3GL (Tan)";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};		
		};
	};
	
	class arifle_MX_GL_Black_F : arifle_MX_GL_F
	{
	displayName = "ACR Basic 3GL (Black)";
	};
	
	class arifle_MX_GL_khk_F : arifle_MX_GL_Black_F
	{
	displayName = "ACR Basic 3GL (Khaki)";
	};
	
	
	// ACR Enhanced
	
	class arifle_MX_SW_F : arifle_MX_Base_F
	{		
	displayName = "ACR Enhanced (Tan)";
	descriptionShort = "Assault rifle <br/>Caliber: 5.56x45 mm NATO";	
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class MuzzleSlot : asdg_MuzzleSlot_556 
			{
				compatibleItems[]=
				{
					"ace_muzzle_mzls_l",
					"muzzle_snds_m",
					"muzzle_snds_m_khk_f",
					"muzzle_snds_m_snd_f",
				};	
			};
			class PointerSlot : asdg_FrontSideRail {};		
		};
	};
	
	class arifle_MX_SW_Black_F : arifle_MX_SW_F
	{		
	displayName = "ACR Enhanced (Black)";
	magazines[] = {"30Rnd_65x39_caseless_black_mag"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};		
		};
	};
	
	class arifle_MX_SW_khk_F : arifle_MX_SW_Black_F
	{		
	displayName = "ACR Enhanced (Khaki)";
	magazines[] = {"30Rnd_65x39_caseless_khaki_mag"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};		
		};
	};
	
	
	// ACR DMR
	
	class arifle_MXM_F : arifle_MX_Base_F
	{		
	descriptionShort = "Assault rifle <br/>Caliber: 5.56x45 mm NATO";	
	displayName = "ACR DMR (Tan)";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};		
		};
	};
	
	class arifle_MXM_Black_F : arifle_MXM_F
	{	
	displayName = "ACR DMR (Black)";
	};
	
	class arifle_MXM_khk_F : arifle_MXM_Black_F
	{		
	displayName = "ACR DMR (Khaki)";
	};

	
	// ACR SBR
	
	class arifle_MXC_F : arifle_MX_Base_F
	{	
	descriptionShort = "Assault rifle <br/>Caliber: 5.56x45 mm NATO";	
	displayName = "ACR SBR (Tan)";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{	
			class MuzzleSlot : asdg_MuzzleSlot_556 {};
			class PointerSlot : asdg_FrontSideRail {};		
		};
	};
	
	class arifle_MXC_Black_F : arifle_MXC_F
	{		
	displayName = "ACR SBR (Black)";
	};
	
	class arifle_MXC_khk_F : arifle_MXC_Black_F
	{		
	displayName = "ACR SBR (Khaki)";
	};
};

	// Changing all Existing MX Magazines to 5.56, all 100Rnd to 30Rnd

class CfgMagazines
{		
	class CA_Magazine;
	
	class 100Rnd_65x39_caseless_mag : CA_Magazine
	{
	ammo = "B_556x45_Ball";
	author = "Bohemia Interactive";
	count = 30;
	descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Mag";
	displaynameshort = "5.56mm";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	initSpeed = 774;
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
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
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
	
	class 100Rnd_65x39_caseless_mag_Tracer : CA_Magazine
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Tracer Mag";	
	displaynameshort = "5.56mm Tracer";
	ammo = "B_556x45_Ball_Tracer_Red";
	lastRoundsTracer = 30;
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_red_CA.paa";
	tracersEvery = 1;
	};
	
	class 100Rnd_65x39_caseless_black_mag : 100Rnd_65x39_caseless_mag
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Mag";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
	};
	
	class 100Rnd_65x39_caseless_black_mag_tracer : 100Rnd_65x39_caseless_mag_Tracer
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Tracer Mag";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
	};
	
	class 100Rnd_65x39_caseless_khaki_mag : 100Rnd_65x39_caseless_mag
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Mag";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
	};
	
	class 100Rnd_65x39_caseless_khaki_mag_Tracer : 100Rnd_65x39_caseless_mag_Tracer
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Tracer Mag";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
	};	
	
	class 30Rnd_65x39_caseless_mag : CA_Magazine
	{
	ammo = "B_556x45_Ball";
	author = "Bohemia Interactive";
	count = 30;
	descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Mag";
	displaynameshort = "5.56mm";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	initSpeed = 774;
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
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
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

	class 30Rnd_65x39_caseless_mag_Tracer : 30Rnd_65x39_caseless_mag
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Tracer Mag";	
	displaynameshort = "5.56mm Tracer";
	ammo = "B_556x45_Ball_Tracer_Red";
	lastRoundsTracer = 30;
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_red_CA.paa";
	tracersEvery = 1;
	};
	
	class 30Rnd_65x39_caseless_black_mag : 30Rnd_65x39_caseless_mag
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Mag";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
	};
	
	class 30Rnd_65x39_caseless_black_mag_Tracer : 30Rnd_65x39_caseless_mag_Tracer
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Tracer Mag";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
	};
	
	class 30Rnd_65x39_caseless_khaki_mag : 30Rnd_65x39_caseless_mag
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Mag";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
	};
	
	class 30Rnd_65x39_caseless_khaki_mag_Tracer : 30Rnd_65x39_caseless_mag_Tracer
	{
	descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30<br />Used in: ACR";
	displayname = "5.56mm 30Rnd Tracer Mag";	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
	};	
};

	// Adding custom 5.56 Magwell to use

class CfgMagazineWells
{
	class RSF_556x45_ACR
	{
	BI_mags[] = 
		{
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		};
	};
};