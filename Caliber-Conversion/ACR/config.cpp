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
	"A3_Anims_F_Config_Sdr",
	"A3_Data_F",
	"A3_Ui_F",
	"A3_Data_F_Exp",
	"A3_Data_F_Orange",
	"A3_Data_F_Patrol",
	"A3_Data_F_Tank",
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

#include "natoconfig.cpp"

class WeaponSlotsInfo;
class MuzzleSlot;
class PointerSlot;

class CfgMagazines
{	
	class Default;
	class CA_Magazine: Default {};

	class 30Rnd_556x45_Stanag: CA_Magazine {};
	class 30Rnd_556x45_ACR_tan_rty_F: 30Rnd_556x45_Stanag
	{
	DLC="";
	displayName = "5.56 mm 30Rnd Reload Tracer (Yellow) Mag";
	displayNameShort = "5.56 mm";
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	};
	
	class 30Rnd_556x45_ACR_blk_rty_F: 30Rnd_556x45_Stanag
	{
	DLC="";	
	displayName = "5.56 mm 30Rnd Reload Tracer (Yellow) Mag";
	displayNameShort = "5.56 mm";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	};
	
	class 30Rnd_556x45_ACR_khk_rty_F: 30Rnd_556x45_Stanag
	{
	DLC="";		
	displayName = "5.56 mm 30Rnd Reload Tracer (Yellow) Mag";
	displayNameShort = "5.56 mm";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	};
	
	class 30Rnd_556x45_ACR_tan_rtg_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Green";		
	DLC="";
	displayName = "5.56 mm 30Rnd Reload Tracer (Green)";
	displayNameShort = "5.56 mm";
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	};
	
	class 30Rnd_556x45_ACR_blk_rtg_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Green";
	DLC="";	
	displayName = "5.56 mm 30Rnd Reload Tracer (Green) Mag";
	displayNameShort = "5.56 mm";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	};
	
	class 30Rnd_556x45_ACR_khk_rtg_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Green";
	DLC="";		
	displayName = "5.56 mm 30Rnd Reload Tracer (Green) Mag";
	displayNameShort = "5.56 mm";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	};	
	
	class 30Rnd_556x45_ACR_tan_rtr_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Red";
	DLC="";
	displayName = "5.56 mm 30Rnd Reload Tracer (Red) Mag";
	displayNameShort = "5.56 mm";
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	};
	
	class 30Rnd_556x45_ACR_blk_rtr_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Red";
	DLC="";	
	displayName = "5.56 mm 30Rnd Reload Tracer (Red) Mag";
	displayNameShort = "5.56 mm";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	};
	
	class 30Rnd_556x45_ACR_khk_rtr_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Red";
	DLC="";		
	displayName = "5.56 mm 30Rnd Reload Tracer (Red) Mag";
	displayNameShort = "5.56 mm";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	};	

	class 30Rnd_556x45_ACR_tan_ty_F: 30Rnd_556x45_Stanag
	{
	DLC="";
	displayName = "5.56 mm 30Rnd Tracer (Yellow) Mag";
	displayNameShort = "5.56 mm";
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	tracersEvery = 1;
	};
	
	class 30Rnd_556x45_ACR_blk_ty_F: 30Rnd_556x45_Stanag
	{
	DLC="";	
	displayName = "5.56 mm 30Rnd Tracer (Yellow) Mag";
	displayNameShort = "5.56 mm Tracer";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_Tracer_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	tracersEvery = 1;
	};
	
	class 30Rnd_556x45_ACR_khk_ty_F: 30Rnd_556x45_Stanag
	{
	DLC="";		
	displayName = "5.56 mm 30Rnd Tracer (Yellow) Mag";
	displayNameShort = "5.56 mm Tracer";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_Tracer_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	tracersEvery = 1;
	};	
	
	class 30Rnd_556x45_ACR_tan_tg_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Green";
	DLC="";
	displayName = "5.56 mm 30Rnd Tracer (Green) Mag";
	displayNameShort = "5.56 mm Tracer";
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	tracersEvery = 1;
	};
	
	class 30Rnd_556x45_ACR_blk_tg_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Green";
	DLC="";	
	displayName = "5.56 mm 30Rnd Tracer (Green) Mag";
	displayNameShort = "5.56 mm Tracer";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_Tracer_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	tracersEvery = 1;
	};
	
	class 30Rnd_556x45_ACR_khk_tg_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Green";
	DLC="";		
	displayName = "5.56 mm 30Rnd Tracer (Green) Mag";
	displayNameShort = "5.56 mm Tracer";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_Tracer_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	tracersEvery = 1;
	};		
	
	class 30Rnd_556x45_ACR_tan_tr_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Red";
	DLC="";
	displayName = "5.56 mm 30Rnd Tracer (Red) Mag";
	displayNameShort = "5.56 mm Tracer";
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	tracersEvery = 1;
	};
	
	class 30Rnd_556x45_ACR_blk_tr_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Red";	
	DLC="";	
	displayName = "5.56 mm 30Rnd Tracer (Red) Mag";
	displayNameShort = "5.56 mm Tracer";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_Tracer_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	tracersEvery = 1;
	};
	
	class 30Rnd_556x45_ACR_khk_tr_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball_Tracer_Red";	
	DLC="";		
	displayName = "5.56 mm 30Rnd Tracer (Red) Mag";
	displayNameShort = "5.56 mm Tracer";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_Tracer_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	tracersEvery = 1;
	};

	class 30Rnd_556x45_ACR_tan_nt_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball";	
	DLC="";		
	displayName = "5.56 mm 30Rnd Mag";
	displayNameShort = "5.56 mm";
	picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"};
	tracersEvery = 0;
	lastRoundsTracer = 0;
	};	

	class 30Rnd_556x45_ACR_blk_nt_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball";	
	DLC="";		
	displayName = "5.56 mm 30Rnd Mag";
	displayNameShort = "5.56 mm";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_Tracer_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
	tracersEvery = 0;
	lastRoundsTracer = 0;
	};	

	class 30Rnd_556x45_ACR_khk_nt_F: 30Rnd_556x45_Stanag
	{
	ammo = "B_556x45_Ball";	
	DLC="";		
	displayName = "5.56 mm 30Rnd Mag";
	displayNameShort = "5.56 mm";
	picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_Tracer_CA.paa";
	descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: ACR";
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
	tracersEvery = 0;
	lastRoundsTracer = 0;
	};	
};

class CfgMagazineWells
{
	class RSF_ACR
	{
		RSF_Magazines[] = 
		{
		"30Rnd_556x45_ACR_tan_rty_F",
		"30Rnd_556x45_ACR_blk_rty_F",
		"30Rnd_556x45_ACR_khk_rty_F",	
		"30Rnd_556x45_ACR_tan_rtg_F",
		"30Rnd_556x45_ACR_blk_rtg_F",
		"30Rnd_556x45_ACR_khk_rtg_F",	
		"30Rnd_556x45_ACR_tan_rtr_F",
		"30Rnd_556x45_ACR_blk_rtr_F",
		"30Rnd_556x45_ACR_khk_rtr_F",		
		"30Rnd_556x45_ACR_tan_ty_F",
		"30Rnd_556x45_ACR_blk_ty_F",
		"30Rnd_556x45_ACR_khk_ty_F",		
		"30Rnd_556x45_ACR_tan_tg_F",
		"30Rnd_556x45_ACR_blk_tg_F",
		"30Rnd_556x45_ACR_khk_tg_F",	
		"30Rnd_556x45_ACR_tan_tr_F",
		"30Rnd_556x45_ACR_blk_tr_F",
		"30Rnd_556x45_ACR_khk_tr_F",	
		"30Rnd_556x45_ACR_tan_nt_F",
		"30Rnd_556x45_ACR_blk_nt_F",
		"30Rnd_556x45_ACR_khk_nt_F",
		};
	};
};

class CfgWeapons
{
  class arifle_MX_Base_F;


  class arifle_MX_F: arifle_MX_Base_F
  {
    displayName="ACR Basic";
	descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
	caseless[] = {"",0,0,0};
	linkProxy="\A3\data_f\proxies\weapon_slots\MAGAZINESLOT";
	magazines[] =
	{
		"30Rnd_556x45_ACR_tan_rty_F",
	};
	magazineWell[] = 
	{
	"RSF_ACR",
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
			
			class PointerSlot: Pointerslot
			{
			compatibleItems[]=
				{
				"rhs_acc_2dpzenit_ris",
				"rhsusf_acc_anpeq15side",
				"rhsusf_acc_anpeq15_top",
				"rhsusf_acc_anpeq15_wmx",
				"rhsusf_acc_anpeq15_wmx_light",
				"rhsusf_acc_anpeq15side_bk",				
				"rhsusf_acc_anpeq15_bk_top",					
				"rhsusf_acc_anpeq15",					
				"rhsusf_acc_anpeq15_light",					
				"rhsusf_acc_anpeq15_bk",			
				"rhsusf_acc_anpeq15_bk_light",					
				"rhsusf_acc_anpeq15a",					
				"rhsusf_acc_anpeq16a",			
				"rhsusf_acc_anpeq16a_light",
				"rhsusf_acc_anpeq16a_top",
				"rhsusf_acc_anpeq16a_light_top",
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
			
		};
	};

	class arifle_MX_GL_F: arifle_MX_F
	{
	model = "\A3\Weapons_F\Rifles\MX\MX_GL_F.p3d";
    displayName="ACR Basic 3GL";
	magazines[] =
		{
			"30Rnd_556x45_ACR_tan_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
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
			
			class PointerSlot: Pointerslot
			{
			compatibleItems[]=
				{
				"rhs_acc_2dpzenit_ris",
				"rhsusf_acc_anpeq15side",
				"rhsusf_acc_anpeq15_top",
				"rhsusf_acc_anpeq15_wmx",
				"rhsusf_acc_anpeq15_wmx_light",
				"rhsusf_acc_anpeq15side_bk",				
				"rhsusf_acc_anpeq15_bk_top",					
				"rhsusf_acc_anpeq15",					
				"rhsusf_acc_anpeq15_light",					
				"rhsusf_acc_anpeq15_bk",			
				"rhsusf_acc_anpeq15_bk_light",					
				"rhsusf_acc_anpeq15a",					
				"rhsusf_acc_anpeq16a",			
				"rhsusf_acc_anpeq16a_light",
				"rhsusf_acc_anpeq16a_top",
				"rhsusf_acc_anpeq16a_light_top",
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
			
		};
	};

	class arifle_MX_SW_F: arifle_MX_F
	{
	model = "\A3\Weapons_F\Rifles\MX\MX_SW_F.p3d";	
    displayName="ACR Enhanced";
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"};
	magazines[] =
		{
			"30Rnd_556x45_ACR_tan_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
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
			
			class PointerSlot: Pointerslot
			{
			compatibleItems[]=
				{
				"rhs_acc_2dpzenit_ris",
				"rhsusf_acc_anpeq15side",
				"rhsusf_acc_anpeq15_top",
				"rhsusf_acc_anpeq15_wmx",
				"rhsusf_acc_anpeq15_wmx_light",
				"rhsusf_acc_anpeq15side_bk",				
				"rhsusf_acc_anpeq15_bk_top",					
				"rhsusf_acc_anpeq15",					
				"rhsusf_acc_anpeq15_light",					
				"rhsusf_acc_anpeq15_bk",			
				"rhsusf_acc_anpeq15_bk_light",					
				"rhsusf_acc_anpeq15a",					
				"rhsusf_acc_anpeq16a",			
				"rhsusf_acc_anpeq16a_light",
				"rhsusf_acc_anpeq16a_top",
				"rhsusf_acc_anpeq16a_light_top",
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
			
		};	
	};

	class arifle_MXC_F: arifle_MX_F
	{
	model = "\A3\Weapons_F\Rifles\MX\MXC_F.p3d";	
    displayName="ACR SBR";
	magazines[] =
		{
			"30Rnd_556x45_ACR_tan_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
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
			
			class PointerSlot: Pointerslot
			{
			compatibleItems[]=
				{
				"rhs_acc_2dpzenit_ris",
				"rhsusf_acc_anpeq15side",
				"rhsusf_acc_anpeq15_top",
				"rhsusf_acc_anpeq15_wmx",
				"rhsusf_acc_anpeq15_wmx_light",
				"rhsusf_acc_anpeq15side_bk",				
				"rhsusf_acc_anpeq15_bk_top",					
				"rhsusf_acc_anpeq15",					
				"rhsusf_acc_anpeq15_light",					
				"rhsusf_acc_anpeq15_bk",			
				"rhsusf_acc_anpeq15_bk_light",					
				"rhsusf_acc_anpeq15a",					
				"rhsusf_acc_anpeq16a",			
				"rhsusf_acc_anpeq16a_light",
				"rhsusf_acc_anpeq16a_top",
				"rhsusf_acc_anpeq16a_light_top",
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
		};		
	};

	class arifle_MXM_F: arifle_MX_F
	{
	model = "\A3\Weapons_F\Rifles\MX\MXM_F.p3d";
    displayName="ACR DMR";
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
	magazines[] =
		{
			"30Rnd_556x45_ACR_tan_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
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
			
			class PointerSlot: Pointerslot
			{
			compatibleItems[]=
				{
				"rhs_acc_2dpzenit_ris",
				"rhsusf_acc_anpeq15side",
				"rhsusf_acc_anpeq15_top",
				"rhsusf_acc_anpeq15_wmx",
				"rhsusf_acc_anpeq15_wmx_light",
				"rhsusf_acc_anpeq15side_bk",				
				"rhsusf_acc_anpeq15_bk_top",					
				"rhsusf_acc_anpeq15",					
				"rhsusf_acc_anpeq15_light",					
				"rhsusf_acc_anpeq15_bk",			
				"rhsusf_acc_anpeq15_bk_light",					
				"rhsusf_acc_anpeq15a",					
				"rhsusf_acc_anpeq16a",			
				"rhsusf_acc_anpeq16a_light",
				"rhsusf_acc_anpeq16a_top",
				"rhsusf_acc_anpeq16a_light_top",
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
		};		
	};

	class arifle_MX_Black_F: arifle_MX_F
	{
    displayName="ACR Basic (Black)";
	magazines[] =
		{
			"30Rnd_556x45_ACR_blk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};	
	hiddenSelections[] = {"camo1","camo2"};	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};	
	};

	class arifle_MX_GL_Black_F: arifle_MX_GL_F
	{
	mass = 119;	
	model = "\A3\Weapons_F\Rifles\MX\MX_GL_F.p3d";	
    displayName="ACR Basic 3GL (Black)";
	magazines[] =
		{
			"30Rnd_556x45_ACR_blk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};	
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"};
	};

	class arifle_MX_SW_Black_F: arifle_MX_SW_F
	{
	mass = 81;
	model = "\A3\Weapons_F\Rifles\MX\MX_SW_F.p3d";		
    displayName="ACR Enhanced (Black)";
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"};
	magazines[] =
		{
			"30Rnd_556x45_ACR_blk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};	
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_LMG_Black_co.paa"};
	};

	class arifle_MXC_Black_F: arifle_MXC_F
	{
	mass = 72;	
	model = "\A3\Weapons_F\Rifles\MX\MXC_F.p3d";	
    displayName="ACR SBR (Black)";
	magazines[] =
		{
			"30Rnd_556x45_ACR_blk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};
	};

	class arifle_MXM_Black_F: arifle_MXM_F
	{
	mass = 85;
	model = "\A3\Weapons_F\Rifles\MX\MXM_F.p3d";
    displayName="ACR DMR (Black)";
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
	magazines[] =
		{
			"30Rnd_556x45_ACR_blk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_long_Black_co.paa"};
	};
	
	
	class arifle_MX_khk_F: arifle_MX_F
	{
    displayName="ACR Basic (Khaki)";
	magazines[] =
		{
			"30Rnd_556x45_ACR_khk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};	
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa","\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Short_khk_co.paa"};
	};

	class arifle_MX_GL_khk_F: arifle_MX_GL_F
	{
	mass = 119;
	model = "\A3\Weapons_F\Rifles\MX\MX_GL_F.p3d";	
    displayName="ACR Basic 3GL (Khaki)";
	magazines[] =
		{
			"30Rnd_556x45_ACR_khk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};	
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa","\A3\Weapons_F_Exp\Rifles\MX\Data\glx_khk_co.paa"};	
	};

	class arifle_MX_SW_khk_F: arifle_MX_SW_F
	{
	mass = 81;	
	model = "\A3\Weapons_F\Rifles\MX\MX_SW_F.p3d";	
    displayName="ACR Enhanced (Khaki)";
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"};
	magazines[] =
		{
			"30Rnd_556x45_ACR_khk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};	
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
	};

	class arifle_MXC_khk_F: arifle_MXC_F
	{
	mass = 72;
	model = "\A3\Weapons_F\Rifles\MX\MXC_F.p3d";	
    displayName="ACR SBR (Khaki)";
	magazines[] =
		{
			"30Rnd_556x45_ACR_khk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};	
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Short_khk_co.paa"};
	};

	class arifle_MXM_khk_F: arifle_MXM_F
	{
	mass = 85;
	model = "\A3\Weapons_F\Rifles\MX\MXM_F.p3d";
    displayName="ACR DMR (Khaki)";
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
	magazines[] =
		{
			"30Rnd_556x45_ACR_khk_rty_F",
		};
	magazineWell[] = 
		{
		"RSF_ACR",
		};	
	hiddenSelections[] = {"camo1"};	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_long_khk_co.paa"};	
	};
};