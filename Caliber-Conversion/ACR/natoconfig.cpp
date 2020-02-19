#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles {
	
	// ACR Weapon Renaming
	
	class Weapon_Base_F;
	class Weapon_arifle_MX_F: Weapon_Base_F
	{
		displayName = "ACR Basic";
		class TransportItems
		{
			class _xx_arifle_MX_F
			{
				name="arifle_MX_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MX_Black_F: Weapon_Base_F
	{
		displayName = "ACR Basic (Black)";
		class TransportItems
		{
			class _xx_arifle_MX_Black_F
			{
				name="arifle_MX_Black_F";
				count=1;
			};
		};
	};	
	
	class Weapon_arifle_MX_khk_F: Weapon_Base_F
	{
		displayName = "ACR Basic (Khaki)";
		class TransportItems
		{
			class _xx_arifle_MX_khk_F
			{
				name="arifle_MX_khk_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MX_GL_F: Weapon_Base_F
	{
		displayName = "ACR Basic 3GL";
		class TransportItems
		{
			class _xx_arifle_MX_GL_F
			{
				name="arifle_MX_GL_F";
				count=1;
			};
		};
	};		
	
	class Weapon_arifle_MX_GL_Black_F: Weapon_Base_F
	{
		displayName = "ACR Basic 3GL (Black)";
		class TransportItems
		{
			class _xx_arifle_MX_GL_Black_F
			{
				name="arifle_MX_GL_Black_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MX_GL_khk_F: Weapon_Base_F
	{
		displayName = "ACR Basic 3GL (Khaki)";
		class TransportItems
		{
			class _xx_arifle_MX_GL_khk_F
			{
				name="arifle_MX_GL_khk_F";
				count=1;
			};
		};
	};		

	class Weapon_arifle_MXC_F: Weapon_Base_F
	{
		displayName = "ACR SBR";
		class TransportItems
		{
			class _xx_arifle_MXC_F
			{
				name="arifle_MXC_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MXC_Black_F: Weapon_Base_F
	{
		displayName = "ACR SBR (Black)";
		class TransportItems
		{
			class _xx_arifle_MXC_Black_F
			{
				name="arifle_MXC_Black_F";
				count=1;
			};
		};
	};		

	class Weapon_arifle_MXC_khk_F: Weapon_Base_F
	{
		displayName = "ACR SBR (Khaki)";
		class TransportItems
		{
			class _xx_arifle_MXC_khk_F
			{
				name="arifle_MXC_khk_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MXM_F: Weapon_Base_F
	{
		displayName = "ACR DMR";
		class TransportItems
		{
			class _xx_arifle_MXM_F
			{
				name="arifle_MXM_F";
				count=1;
			};
		};
	};	
	
	class Weapon_arifle_MXM_Black_F: Weapon_Base_F
	{
		displayName = "ACR DMR (Black)";
		class TransportItems
		{
			class _xx_arifle_MXM_Black_F
			{
				name="arifle_MXM_Black_F";
				count=1;
			};
		};
	};	
	
	class Weapon_arifle_MXM_khk_F: Weapon_Base_F
	{
		displayName = "ACR DMR (Khaki)";
		class TransportItems
		{
			class _xx_arifle_MXM_khk_F
			{
				name="arifle_MXM_khk_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MX_SW_F: Weapon_Base_F
	{
	displayName = "ACR Enhanced";
		class TransportItems
		{
			class _xx_arifle_MX_SW_F
			{
				name="arifle_MX_SW_F";
				count=1;
			};
		};
	};		
	
	class Weapon_arifle_MX_SW_Black_F: Weapon_Base_F
	{
		displayName = "ACR Enhanced (Black)";
		class TransportItems
		{
			class _xx_arifle_MX_SW_Black_F
			{
				name="arifle_MX_SW_Black_F";
				count=1;
			};
		};
	};

	class Weapon_arifle_MX_SW_khk_F: Weapon_Base_F
	{
		displayName = "ACR Enhanced (Khaki)";
		class TransportItems
		{
			class _xx_arifle_MX_SW_khk_F
			{
				name="arifle_MX_SW_khk_F";
				count=1;
			};
		};
	};

	// Start of Backpack assignment
	
	class B_Carryall_Base;
	class B_Kitbag_Base;
	
	//NATO Ammo Bearer
	class B_Carryall_mcamo: B_Carryall_Base{};
	class B_Kitbag_rgr: B_Kitbag_Base{};
	class B_Kitbag_mcamo: B_Kitbag_Base{};
	
	class B_AssaultPack_mcamo_Ammo : B_Carryall_mcamo
	{
		class TransportMagazines 
		{
			mag_xx(30Rnd_65x39_caseless_mag,0);
			mag_xx(100Rnd_65x39_caseless_mag,0);
			mag_xx(30Rnd_556x45_ACR_tan_nt_F,9);
			mag_xx(HandGrenade,2);
			mag_xx(MiniGrenade,2);
			mag_xx(1Rnd_HE_Grenade_shell,3);			
			mag_xx(3Rnd_HE_Grenade_shell,1);	
			mag_xx(10Rnd_338_Mag,2);	
			mag_xx(20Rnd_762x51_Mag,2);		
		};
	};	
	
	//McKay story guy
	class B_CTRG_AssaultPack_mcamo_Ammo: B_AssaultPack_mcamo_Ammo
	{
		class TransportMagazines 
		{
			mag_xx(30Rnd_65x39_caseless_mag,0);
			mag_xx(100Rnd_65x39_caseless_mag,0);
			mag_xx(30Rnd_556x45_ACR_blk_nt_F,9);
			mag_xx(HandGrenade,2);
			mag_xx(MiniGrenade,2);
			mag_xx(1Rnd_HE_Grenade_shell,3);			
			mag_xx(3Rnd_HE_Grenade_shell,1);	
			mag_xx(10Rnd_338_Mag,2);	
			mag_xx(20Rnd_762x51_Mag,2);		
		};
	};	
	
	//Assistant AR
	class B_Kitbag_rgr_AAR : B_Kitbag_rgr
	{
		class TransportItems 
		{
			item_xx(muzzle_snds_H,0);
			item_xx(optic_tws_mg,1);
			item_xx(bipod_01_F_snd,1);
			item_xx(muzzle_snds_338_sand,1);			
			item_xx(muzzle_snds_m_snd_F,1);
		};
			
		class TransportMagazines 
		{
			mag_xx(100Rnd_65x39_caseless_mag,0);
			mag_xx(100Rnd_65x39_caseless_mag_Tracer,0);			
			mag_xx(30Rnd_556x45_ACR_tan_nt_F,7);
			mag_xx(30Rnd_556x45_ACR_tan_tr_F,6);				
			mag_xx(130Rnd_338_Mag,2);			
		};
	};
	
	//Patrol Ammobearer
	class B_Patrol_supply_bag_F : B_Kitbag_mcamo
	{
		class TransportMagazines 
		{
			mag_xx(30Rnd_65x39_caseless_mag,0);
			mag_xx(100Rnd_65x39_caseless_mag,0)
			mag_xx(200Rnd_65x39_cased_Box,0);
			mag_xx(30Rnd_556x45_ACR_tan_nt_F,12);
			mag_xx(200Rnd_556x45_Box_F,1);
			mag_xx(Titan_AP,1);		
		};	
	};
	
	//NATO Pacific Ammo Bearer	
	class B_Carryall_oli_BTAmmo_F : B_Carryall_mcamo
	{
		class TransportMagazines 
		{
			mag_xx(30Rnd_65x39_caseless_mag,0);
			mag_xx(100Rnd_65x39_caseless_mag,0)
			mag_xx(30Rnd_556x45_ACR_khk_nt_F,9);
			mag_xx(HandGrenade,2);
			mag_xx(MiniGrenade,2);
			mag_xx(1Rnd_HE_Grenade_shell,3);			
			mag_xx(3Rnd_HE_Grenade_shell,1);	
			mag_xx(10Rnd_338_Mag,2);	
			mag_xx(20Rnd_762x51_Mag,2);	
		};	
	};
	
	//NATO Pacific Assistant AR
	class B_T_Kitbag_rgr_AAR : B_Kitbag_rgr_AAR
	{
		class TransportItems 
		{
			item_xx(muzzle_snds_H,0);
			item_xx(optic_tws_mg,1);
			item_xx(bipod_01_f_khk,1);
			item_xx(muzzle_snds_338_green,1);			
			item_xx(muzzle_snds_m_khk_F,1);
		};
	
		class TransportMagazines 
		{
			mag_xx(100Rnd_65x39_caseless_mag,0);
			mag_xx(100Rnd_65x39_caseless_mag_Tracer,0);	
			mag_xx(30Rnd_556x45_ACR_khk_nt_F,7);
			mag_xx(30Rnd_556x45_ACR_khk_tr_F,6);				
			mag_xx(130Rnd_338_Mag,2);			
		};
	};

	//NATO Woodland Ammo Bearer
	class B_Carryall_wdl_BWAmmo_F : B_Carryall_mcamo
	{
		class TransportMagazines 
		{
			mag_xx(30Rnd_65x39_caseless_black_mag,0);
			mag_xx(100Rnd_65x39_caseless_black_mag,0);
			mag_xx(30Rnd_556x45_ACR_blk_nt_F,9);
			mag_xx(HandGrenade,2);
			mag_xx(MiniGrenade,2);
			mag_xx(1Rnd_HE_Grenade_shell,3);			
			mag_xx(3Rnd_HE_Grenade_shell,1);	
			mag_xx(10Rnd_338_Mag,2);	
			mag_xx(20Rnd_762x51_Mag,2);		
		};	
		
	};
	
	//NATO Woodland Assistant AR
	class B_Kitbag_rgr_BWAAR : B_Kitbag_rgr
	{
		class TransportItems 
		{
			item_xx(muzzle_snds_H,0);
			item_xx(optic_tws_mg,1);
			item_xx(bipod_01_f_blk,1);
			item_xx(muzzle_snds_338_black,1);			
			item_xx(muzzle_snds_m,1);
		};
			
		class TransportMagazines 
		{
			mag_xx(100Rnd_65x39_caseless_black_mag,0);
			mag_xx(100Rnd_65x39_caseless_black_mag_tracer,0);
			mag_xx(30Rnd_556x45_ACR_blk_nt_F,7);
			mag_xx(30Rnd_556x45_ACR_blk_tr_F,6);				
			mag_xx(130Rnd_338_Mag,2);			
		};
	};
	
	//Base Classes--------------------------
	class SoldierWB;
	
	//Soldier Base NATO
	class B_Soldier_base_F : SoldierWB
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};
	
	//Soldier Base Recon NATO
	class B_Soldier_recon_base: SoldierWB
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	}
	//Soldier Base Support NATO
	class B_Soldier_support_base_F: SoldierWB
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	}
	
	//Sniper Base NATO
	class B_Soldier_sniper_base_F: SoldierWB
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};

	//Soldier Base derivatives
	class B_Soldier_02_f: B_Soldier_base_F{};
	class B_Soldier_03_f: B_Soldier_base_F{};
	class B_Soldier_04_f: B_Soldier_base_F{};
	
	// Literally going down the Eden Editor List of Units that have the MX Variants now from top to bottom.
	//NATO-------------------------------
	class B_Soldier_A_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_soldier_AAR_F : B_Soldier_support_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};
	
	class B_support_AMG_F : B_Soldier_support_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_support_AMort_F : B_Soldier_support_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};		
	};	
	
	class B_soldier_AAT_F : B_Soldier_support_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};		
	};	
	
	class B_soldier_AAA_F : B_soldier_AAT_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_soldier_AR_F : B_Soldier_02_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_medic_F : B_Soldier_02_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};	
	
	class B_crew_F : B_Soldier_03_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_engineer_F : B_Soldier_03_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};	
	
	class B_soldier_exp_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_Soldier_GL_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};	
	
	class B_support_GMG_F : B_Soldier_support_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_support_MG_F: B_Soldier_support_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_support_Mort_F: B_Soldier_support_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_Helipilot_F: B_Soldier_04_f{};
	class B_helicrew_F: B_Helipilot_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_soldier_M_F: B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_soldier_mine_F : B_soldier_exp_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_soldier_AA_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_soldier_AT_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_officer_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_soldier_PG_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};			
	
	class B_soldier_repair_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};			
	
	class B_Soldier_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};			
	
	class B_soldier_LAT_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_soldier_LAT2_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_Soldier_lite_F: B_Soldier_03_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_Soldier_SL_F : B_Soldier_03_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};			
	
	class B_Soldier_TL_F : B_Soldier_03_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};	
	};			
	
	class B_soldier_UAV_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};			
	
	class B_soldier_UAV_06_F : B_soldier_UAV_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};			
	
	class B_soldier_UAV_06_medical_F : B_soldier_UAV_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};			
	
	class B_soldier_UGV_02_Demining_F : B_soldier_UAV_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};			
	
	class B_soldier_UGV_02_Science_F : B_soldier_UAV_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};			
	
	class B_Patrol_Soldier_A_F : B_Soldier_A_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};	
	};			
	
	class B_Patrol_Soldier_AR_F : B_soldier_AR_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen"};	
	};			
	
	class B_Patrol_Medic_F : B_medic_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade"};	
	};			
	
	class B_Patrol_Engineer_F : B_engineer_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};			
	
	class B_Patrol_Soldier_AT_F : B_soldier_AT_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AP","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AP","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};	
	};			
	
	class B_Patrol_Soldier_TL_F : B_Soldier_TL_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};	
	};			
	
	class B_Patrol_Soldier_UAV_F : B_soldier_UAV_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};	
	};			
	
	class B_recon_exp_F : B_Soldier_recon_base
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};			
	
	class B_recon_JTAC_F : B_Soldier_recon_base
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};	
	};			
	
	class B_recon_M_F : B_Soldier_recon_base
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_recon_medic_F : B_Soldier_recon_base
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_recon_F : B_Soldier_recon_base
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_recon_LAT_F : B_Soldier_recon_base
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_recon_TL_F : B_Soldier_recon_base
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_spotter_F : B_Soldier_sniper_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_CTRG_soldier_engineer_exp_F : B_Soldier_02_f
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};		
	
	class B_Story_Protagonist_F : B_Soldier_02_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","3Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};	
		
	respawnmagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","3Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};	
	};		
	
	class B_Story_Pilot_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};		
	
	class B_CTRG_soldier_AR_A_F : B_Soldier_03_f
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	backpack = "B_CTRG_AssaultPack_mcamo_Ammo";
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_Story_SF_Captain_F : B_Soldier_02_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
		
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};		
	
	class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};	
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};		
	
	class B_Captain_Pettka_F : B_Soldier_02_f
	{
	magazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_nt_F","30Rnd_556x45_ACR_tan_tr_F","30Rnd_556x45_ACR_tan_tr_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	//NATO Pacific-------------------------------
	
	class B_T_Soldier_A_F: B_Soldier_A_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};
	
	class B_T_Soldier_AAR_F: B_soldier_AAR_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	backpack = "B_T_Kitbag_rgr_AAR";
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};
	
	class B_T_Support_AMG_F: B_support_AMG_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Support_AMort_F: B_support_AMort_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_T_Soldier_AAA_F: B_soldier_AAA_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Soldier_AAT_F: B_soldier_AAT_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Soldier_AR_F: B_soldier_AR_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Medic_F: B_medic_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Crew_F: B_crew_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Engineer_F: B_engineer_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Soldier_Exp_F: B_soldier_exp_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Soldier_GL_F: B_Soldier_GL_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};	
	};	
	
	class B_T_Support_GMG_F: B_support_GMG_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Support_MG_F: B_support_MG_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Support_Mort_F: B_support_Mort_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Helicrew_F: B_helicrew_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_soldier_M_F: B_soldier_M_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};		
	
	class B_T_soldier_mine_F: B_soldier_mine_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Soldier_AA_F: B_Soldier_AA_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Soldier_AT_F: B_Soldier_AT_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Officer_F: B_Officer_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Soldier_PG_F: B_Soldier_PG_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};		
	
	class B_T_Soldier_Repair_F: B_soldier_repair_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Soldier_F: B_Soldier_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};		
	
	class B_T_Soldier_LAT_F: B_Soldier_LAT_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Soldier_LAT2_F: B_Soldier_LAT2_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Soldier_SL_F: B_Soldier_SL_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_tr_F","30Rnd_556x45_ACR_khk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_tr_F","30Rnd_556x45_ACR_khk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Soldier_TL_F: B_Soldier_TL_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_tr_F","30Rnd_556x45_ACR_khk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_tr_F","30Rnd_556x45_ACR_khk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};	
	};		
	
	class B_T_Soldier_UAV_F: B_Soldier_UAV_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};		
	
	class B_T_soldier_UAV_06_F: B_soldier_UAV_06_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};		
	
	class B_T_soldier_UAV_06_medical_F: B_soldier_UAV_06_medical_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};	
	};		
	
	class B_T_Recon_Exp_F: B_recon_exp_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Recon_JTAC_F: B_Recon_JTAC_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};	
	};		
	
	class B_T_Recon_M_F	: B_Recon_M_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Recon_Medic_F: B_Recon_Medic_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Recon_F: B_Recon_F	
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Recon_LAT_F: B_Recon_LAT_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Recon_TL_F: B_Recon_TL_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_tr_F","30Rnd_556x45_ACR_khk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_tr_F","30Rnd_556x45_ACR_khk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};		
	
	class B_T_Spotter_F: B_Spotter_F
	{
	magazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","30Rnd_556x45_ACR_khk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};		
	
	//NATO Woodland-------------------------------	
	
	class B_W_Soldier_F: B_Soldier_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	
	class B_W_Soldier_A_F: B_Soldier_A_F 
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Soldier_AAR_F: B_Soldier_AAR_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	 
	class B_W_Support_AMG_F: B_Support_AMG_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Support_AMort_F: B_Support_AMort_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Soldier_AAA_F: B_Soldier_AAA_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Soldier_AAT_F: B_Soldier_AAT_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_Soldier_AR_F: B_Soldier_AR_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Soldier_CBRN_F: B_W_Soldier_F
	{ 
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_Medic_F: B_medic_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Crew_F: B_crew_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_Engineer_F: B_Engineer_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Soldier_Exp_F: B_Soldier_Exp_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_Soldier_GL_F: B_Soldier_GL_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	
	class B_W_Support_GMG_F: B_Support_GMG_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_Support_MG_F: B_Support_MG_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Support_Mort_F:  B_Support_Mort_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_Helicrew_F: B_helicrew_F	 
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_soldier_M_F: B_soldier_M_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_soldier_mine_F: B_Soldier_mine_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Soldier_AA_F: B_Soldier_AA_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_Soldier_AT_F: B_Soldier_AT_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Officer_F: B_Officer_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	 
	class B_W_RadioOperator_F: B_W_Soldier_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Soldier_Repair_F: B_soldier_repair_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_Soldier_LAT_F: B_Soldier_LAT_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};	
	
	class B_W_Soldier_SL_F: B_Soldier_SL_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_tr_F","30Rnd_556x45_ACR_blk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_tr_F","30Rnd_556x45_ACR_blk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	
	class B_W_Soldier_TL_F:	B_Soldier_TL_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_tr_F","30Rnd_556x45_ACR_blk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_tr_F","30Rnd_556x45_ACR_blk_tr_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};	
	
	class B_W_Soldier_UAV_F: B_Soldier_UAV_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};		
	
	class B_W_soldier_UGV_02_Demining_F: B_W_Soldier_UAV_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};		
	
	class B_W_soldier_UGV_02_Science_F:	B_W_Soldier_UAV_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};	

	//NATO Woodland hidden Story
	
	class B_W_Story_Instructor_01_F: B_W_Soldier_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};	

	class B_W_Story_Leader_01_F: B_W_Soldier_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};	

	class B_W_Story_Major_01_F: B_W_Soldier_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	
	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};	

	class B_W_Story_Protagonist_01_F: B_W_Soldier_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};

	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};	

	class B_W_Story_Soldier_01_F: B_W_Soldier_F
	{
	magazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};

	respawnMagazines[] = {"30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","30Rnd_556x45_ACR_blk_nt_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};		
};