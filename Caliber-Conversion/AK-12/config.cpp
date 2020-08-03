class CfgPatches
{
    class RSF_AK12_Conversion
    {
    name = "RSF AK-12 Conversion Mod";
    author = "Nero";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
	requiredAddons[] = 
	{
	"A3_Weapons_F_Exp",
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

#include "faction_config_ak.cpp"

class WeaponSlotsInfo;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_545R;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class CfgWeapons
{
	// 5.56 to 545 Supressor Duplicates (Else there are none)
	class ACE_muzzle_mzls_L;
	class ACE_muzzle_mzls_L_545 : ACE_muzzle_mzls_L
	{
	_generalMacro = "ACE_muzzle_mzls_L_545";	
	displayName = "Flash Suppressor (5.45 mm)";
	};

	class muzzle_snds_M;
	class muzzle_snds_M_545 : muzzle_snds_M
	{
	_generalMacro = "muzzle_snds_M_545";	
	displayName = "Sound Suppressor (5.45 mm)";
	};
	
	class muzzle_snds_m_khk_F;
	class muzzle_snds_M_545_khk_F : muzzle_snds_m_khk_F
	{
	_generalMacro = "muzzle_snds_M_545_khk_F";	
	displayName = "Sound Suppressor (5.45 mm, Khaki)";
	};
	
	class muzzle_snds_m_snd_F;
	class muzzle_snds_M_545_snd_F : muzzle_snds_m_snd_F
	{
	_generalMacro = "muzzle_snds_M_545_snd_F";	
	displayName = "Sound Suppressor (5.45 mm, Sand)";
	};
	
	// AK-12
	class arifle_AK12_base_F;
	class arifle_AK12_545_base_F : arifle_AK12_base_F
	{
	_generalMacro = "arifle_AK12_545_base_F";
	descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";
	displayName = "AK-12";
	magazines[] = {"30Rnd_545x39_Mag_F"};
	magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_MSTU_CA.paa";	
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 72.7525;			
			class MuzzleSlot: asdg_MuzzleSlot_545R 
			{
				compatibleItems[]+=
				{
				"ACE_muzzle_mzls_L_545",
				"muzzle_snds_M_545",
				"muzzle_snds_M_545_khk_F",
				"muzzle_snds_M_545_snd_F",
				};	
			iconPosition[]={0,0.34999999};
			iconScale=0.2;			
			};
			class CowsSlot: asdg_OpticRail1913
			{
			iconPosition[]={0.5,0.25};
			iconScale=0.2;			
			};
			class PointerSlot: asdg_FrontSideRail
			{
			iconPosition[]={0.30000001,0.34999999};
			iconScale=0.2;			
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
			iconPosition[]={0.34999999,0.69999999};
			iconScale=0.30000001;	
			};
		};
	};
	
	// AK-12 Black
	class arifle_AK12_545_F : arifle_AK12_545_base_F
	{
	_generalMacro = "arifle_AK12_545_F";
	baseWeapon = "arifle_AK12_545_F";
	displayName = "AK-12";
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
	scope = 2;		
	};
	
	// AK-12 Arid
	class arifle_AK12_545_arid_F : arifle_AK12_545_base_F
	{
	_generalMacro = "arifle_AK12_545_arid_F";	
	baseWeapon = "arifle_AK12_545_arid_F";
	displayName = "AK-12 (Arid)";	
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
	scope = 2;	
	};

	// AK-12 Lush
	class arifle_AK12_545_lush_F : arifle_AK12_545_base_F
	{
	_generalMacro = "arifle_AK12_545_lush_F";	
	baseWeapon = "arifle_AK12_545_lush_F";
	displayName = "AK-12 (Lush)";	
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
	scope = 2;
	};

	// AK-12 GL
	class arifle_AK12_GL_base_F;
	class arifle_AK12_GL_545_base_F : arifle_AK12_GL_base_F
	{
	_generalMacro = "arifle_AK12_GL_545_base_F";
	descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";
	displayName = "AK-12 GL";
	magazines[] = {"30Rnd_545x39_Mag_F"};
	magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";	
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 103.6172;			
			class MuzzleSlot: asdg_MuzzleSlot_545R 
			{
				compatibleItems[]+=
				{
				"ACE_muzzle_mzls_L_545",
				"muzzle_snds_M_545",
				"muzzle_snds_M_545_khk_F",
				"muzzle_snds_M_545_snd_F",
				};	
			iconPosition[]={0,0.34999999};
			iconScale=0.2;			
			};
			class CowsSlot: asdg_OpticRail1913
			{
			iconPosition[]={0.5,0.25};
			iconScale=0.2;			
			};
			class PointerSlot: asdg_FrontSideRail
			{
			iconPosition[]={0.30000001,0.34999999};
			iconScale=0.2;			
			};
		};
	};
	
	// AK-12 GL Black
	class arifle_AK12_GL_545_F : arifle_AK12_GL_545_base_F
	{
	_generalMacro = "arifle_AK12_GL_545_F";
	baseWeapon = "arifle_AK12_GL_545_F";
	displayName = "AK-12 GL";
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","\a3\weapons_f_exp\rifles\ak12\data\ak12_ak12_gl_co.paa"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
	scope = 2;		
	};
	
	// AK-12 GL Arid
	class arifle_AK12_GL_545_arid_F : arifle_AK12_GL_545_base_F
	{
	_generalMacro = "arifle_AK12_GL_545_arid_F";	
	baseWeapon = "arifle_AK12_GL_545_arid_F";
	displayName = "AK-12 GL (Arid)";	
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_arid_F_CA.paa";
	scope = 2;	
	};

	// AK-12 GL Lush
	class arifle_AK12_GL_545_lush_F : arifle_AK12_GL_545_base_F
	{
	_generalMacro = "arifle_AK12_GL_545_lush_F";	
	baseWeapon = "arifle_AK12_GL_545_lush_F";
	displayName = "AK-12 GL (Lush)";	
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_khaki.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_khaki_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_lush_F_CA.paa";
	scope = 2;
	};
	
	// AK-12K	
	
	class arifle_AK12U_base_F : arifle_AK12_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 66.1387;		
			class MuzzleSlot : asdg_MuzzleSlot_762 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot : asdg_UnderSlot {};	
		};		
		
	};	
	
	class arifle_AK12U_545_base_F : arifle_AK12U_base_F
	{
	_generalMacro = "arifle_AK12U_545_base_F";
	descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";
	displayName = "AK-12K";
	magazines[] = {"30Rnd_545x39_Mag_F"};
	magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_F_CA.paa";	
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 66.1387;			
			class MuzzleSlot: asdg_MuzzleSlot_545R 
			{
				compatibleItems[]+=
				{
				"ACE_muzzle_mzls_L_545",
				"muzzle_snds_M_545",
				"muzzle_snds_M_545_khk_F",
				"muzzle_snds_M_545_snd_F",
				};	
			iconPosition[]={0,0.34999999};
			iconScale=0.2;			
			};
			class CowsSlot: asdg_OpticRail1913
			{
			iconPosition[]={0.5,0.25};
			iconScale=0.2;			
			};
			class PointerSlot: asdg_FrontSideRail
			{
			iconPosition[]={0.30000001,0.34999999};
			iconScale=0.2;			
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
			iconPosition[]={0.34999999,0.69999999};
			iconScale=0.30000001;	
			};
		};
	};
	
	// AK-12K Black
	class arifle_AK12U_545_F : arifle_AK12U_545_base_F
	{
	_generalMacro = "arifle_AK12U_545_F";
	baseWeapon = "arifle_AK12U_545_F";
	displayName = "AK-12K";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_F_CA.paa";
	scope = 2;		
	};
	
	// AK-12K Arid
	class arifle_AK12U_545_arid_F : arifle_AK12U_545_base_F
	{
	_generalMacro = "arifle_AK12U_545_arid_F";	
	baseWeapon = "arifle_AK12U_545_arid_F";
	displayName = "AK-12K (Arid)";	
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_arid_F_CA.paa";
	scope = 2;	
	};

	// AK-12K Lush
	class arifle_AK12U_545_lush_F : arifle_AK12U_545_base_F
	{
	_generalMacro = "arifle_AK12U_545_lush_F";	
	baseWeapon = "arifle_AK12U_545_lush_F";
	displayName = "AK-12K (Lush)";	
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_lush_F_CA.paa";
	scope = 2;
	};
	
	// RPK-16

	class arifle_RPK12_base_F : arifle_AK12_base_F
	{
	_generalMacro = "arifle_RPK12_base_F";
	descriptionShort = "Light Machine Gun<br />Caliber: 5.45x39 mm";
	displayName = "RPK-16";
	magazines[] = {"75rnd_762x39_AK12_Mag_F"};
	magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 99.2080;			
			class MuzzleSlot: asdg_MuzzleSlot_545R 
			{
				compatibleItems[]+=
				{
				"ACE_muzzle_mzls_L_545",
				"muzzle_snds_M_545",
				"muzzle_snds_M_545_khk_F",
				"muzzle_snds_M_545_snd_F",
				};	
			iconPosition[]={0,0.34999999};
			iconScale=0.2;			
			};
			class CowsSlot: asdg_OpticRail1913
			{
			iconPosition[]={0.5,0.25};
			iconScale=0.2;			
			};
			class PointerSlot: asdg_FrontSideRail
			{
			iconPosition[]={0.30000001,0.34999999};
			iconScale=0.2;			
			};
		};
	};
	
	// RPK-16 Black
	class arifle_RPK12_F : arifle_RPK12_base_F
	{
	_generalMacro = "arifle_RPK12_F";
	baseWeapon = "arifle_RPK12_F";
	displayName = "RPK-16 (Black)";	
	};
	
	// RPK-16 Arid
	class arifle_RPK12_arid_F : arifle_RPK12_base_F
	{
	_generalMacro = "arifle_RPK12_arid_F";	
	baseWeapon = "arifle_RPK12_arid_F";
	displayName = "RPK-16 (Arid)";	
	};

	// RPK-16 Lush
	class arifle_RPK12_lush_F : arifle_RPK12_base_F
	{
	_generalMacro = "arifle_RPK12_lush_F";	
	baseWeapon = "arifle_RPK12_lush_F";
	displayName = "RPK-16 (Lush)";	
	};
	
	// Change AK-15 Black names to (Black)
	
	//AK-15 Names and Attachments
	
	//AK-15 Black
	class arifle_AK12_F : arifle_AK12_base_F
	{
	displayName = "AK-15 (Black)";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 72.7525;	
			class MuzzleSlot : asdg_MuzzleSlot_762 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot :asdg_UnderSlot {};	
		};	
	};

	//AK-15 Arid
	class arifle_AK12_arid_F : arifle_AK12_base_F
	{
	displayName = "AK-15 (Arid)";
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 72.7525;	
			class MuzzleSlot : asdg_MuzzleSlot_762 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot :asdg_UnderSlot {};	
		};	
	};
	
	//AK-15 Lush
	class arifle_AK12_lush_F : arifle_AK12_base_F
	{
	displayName = "AK-15 (Lush)";
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 72.7525;		
			class MuzzleSlot : asdg_MuzzleSlot_762 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot :asdg_UnderSlot {};	
		};	
	};
	
	// AK-15 GL
	
	// AK-15 GL (Black)
	class arifle_AK12_GL_F : arifle_AK12_GL_base_F
	{
	displayName = "AK-15 GL (Black)";	
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
	UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 103.6172;		
			class MuzzleSlot : asdg_MuzzleSlot_762 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};	
		};		
	};
	
	// AK-15 GL (Arid)
	class arifle_AK12_GL_arid_F : arifle_AK12_GL_base_F
	{
	displayName = "AK-15 GL (Arid)";	
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_arid_F_CA.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 103.6172;		
			class MuzzleSlot : asdg_MuzzleSlot_762 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};	
		};		
	};
	
	// AK-15 GL (Lush)
	class arifle_AK12_GL_lush_F : arifle_AK12_GL_base_F
	{
	displayName = "AK-15 GL (Lush)";
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_lush_F_CA.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		allowedSlots[] = {901};		
		mass = 103.6172;		
			class MuzzleSlot : asdg_MuzzleSlot_762 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};	
		};		
	};
	
	// AK-15K
	
	// AK-15K (Black)
	class arifle_AK12U_F : arifle_AK12U_base_F
	{
	displayName = "AK-15K (Black)";
	};
};

class CfgMagazines
{	
	// 7.52 AK-15 Magazines Name Correction
	
class CA_Magazine;

	class 30Rnd_762x39_Mag_F : CA_Magazine
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";	
	};	
	class 30Rnd_762x39_Mag_Tracer_F : 30Rnd_762x39_Mag_F
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";			
	};	
	class 30Rnd_762x39_Mag_Green_F : 30Rnd_762x39_Mag_F
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";			
	};		
	class 30Rnd_762x39_Mag_Tracer_Green_F : 30Rnd_762x39_Mag_Tracer_F
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";			
	};	

	class 30Rnd_762x39_AK12_Mag_F : 30Rnd_762x39_Mag_F
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";	
	displayName = "7.62 mm 30rnd AK-15 Mag";		
	};
	class 30rnd_762x39_AK12_Lush_Mag_F : 30Rnd_762x39_AK12_Mag_F
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";	
	displayName = "7.62 mm 30rnd AK-15 Khaki Mag";	
	};
	class 30rnd_762x39_AK12_Arid_Mag_F : 30Rnd_762x39_AK12_Mag_F
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";	
	displayName = "7.62 mm 30rnd AK-15 Sand Mag";		
	};
	
	class 30Rnd_762x39_AK12_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_F
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";	
	displayName = "7.62 mm 30rnd AK-15 Tracer Mag";		
	};	
	class 30rnd_762x39_AK12_Lush_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_Tracer_F
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";	
	displayName = "7.62 mm 30rnd AK-15 Tracer Khaki Mag";		
	};		
	class 30rnd_762x39_AK12_Arid_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_Tracer_F
	{
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-15, AK-15 GL, AKM";	
	displayName = "7.62 mm 30rnd AK-15 Tracer Sand Mag";		
	};		

	// 7.62 AK-15 Drums derived from 5.45 Drums
	
class 30Rnd_545x39_Mag_F;	
	
	class 75rnd_762x39_AK12_Mag_762_F : 30Rnd_762x39_Mag_F
	{
	ammo = "B_762x39_Ball_Green_F";
	count = 75;
	descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 75<br />Used in: AK-15, AK-15 GL, AKM";
	displayName = "7.62 mm 75rnd AK-15 Mag";
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
	displayName = "7.62 mm 75rnd AK-15 Arid Mag";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
	picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";	
	};
	
	class 75rnd_762x39_AK12_Lush_Mag_762_F : 75rnd_762x39_AK12_Mag_762_F
	{
	displayName = "7.62 mm 75rnd AK-15 Lush Mag";	
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};	
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
	picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";	
	};

	class 75rnd_762x39_AK12_Mag_Tracer_762_F : 75rnd_762x39_AK12_Mag_762_F
	{
	displayName = "7.62 mm 75rnd AK-15 Tracer Mag";	
	displayNameShort = "Tracer";
	lastRoundsTracer = 30;
	picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_Tracer_F_CA.paa";
	tracersEvery = 1;
	};
	
	class 75rnd_762x39_AK12_Arid_Mag_Tracer_762_F : 75rnd_762x39_AK12_Mag_Tracer_762_F
	{
	displayName = "7.62 mm 75rnd AK-15 Tracer Arid Mag";	
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
	picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_Tracer_F_CA.paa";
	};
	
	class 75rnd_762x39_AK12_Lush_Mag_Tracer_762_F : 75rnd_762x39_AK12_Mag_Tracer_762_F
	{
	displayName = "7.62 mm 75rnd AK-15 Tracer Lush Mag";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
	picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";	
	}; 

	// 5.45 RPK-16 Drums
	
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
	class AK_545x39
	{
	BI_Magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_Green_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Arid_Mag_F","75rnd_762x39_AK12_Lush_Mag_F","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Arid_Mag_Tracer_F","75rnd_762x39_AK12_Lush_Mag_Tracer_F"};	
	};
	
	class AK_762x39
	{
	BI_Enoch_Magazines[] = {"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_AK12_Lush_Mag_F","30Rnd_762x39_AK12_Lush_Mag_Tracer_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_Tracer_F","75rnd_762x39_AK12_Mag_762_F","75rnd_762x39_AK12_Mag_Tracer_762_F","75rnd_762x39_AK12_Lush_Mag_762_F","75rnd_762x39_AK12_Lush_Mag_Tracer_762_F","75rnd_762x39_AK12_Arid_Mag_762_F","75rnd_762x39_AK12_Arid_Mag_Tracer_762_F"};
	BI_Magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F"};
	};
	
};