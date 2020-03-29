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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};		
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};	
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};	
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};	
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};	
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};	
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_long_Black_co.paa"};
	};
	
	class arifle_MX_khk_F: arifle_MX_F
	{
    displayName="ACR Basic (Khaki)";
	magazines[] =
	{
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};	
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};	
	magazineWell[] = {};	
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};	
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};	
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
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_khaki_mag",
		"30Rnd_65x39_caseless_khaki_mag_Tracer"
	};
	magazineWell[] = {};	
	hiddenSelections[] = {"camo1"};	
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_long_khk_co.paa"};	
	};
};

class CfgMagazines
{		
	class CA_Magazine;
	
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