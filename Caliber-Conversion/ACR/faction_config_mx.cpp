#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles {
	
	// ACR Weapon Renaming
	
	class Weapon_Base_F;
	class Weapon_arifle_MX_F: Weapon_Base_F
	{
		displayName = "ACR Basic (Tan)";
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MX_Black_F: Weapon_Base_F
	{
		displayName = "ACR Basic (Black)";
		class TransportWeapons
		{
			class _xx_arifle_MX_Black_F
			{
				weapon="arifle_MX_Black_F";
				count=1;
			};
		};
	};	
	
	class Weapon_arifle_MX_khk_F: Weapon_Base_F
	{
		displayName = "ACR Basic (Khaki)";
		class TransportWeapons
		{
			class _xx_arifle_MX_khk_F
			{
				weapon="arifle_MX_khk_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MX_GL_F: Weapon_Base_F
	{
		displayName = "ACR Basic 3GL (Tan)";
		class TransportWeapons
		{
			class _xx_arifle_MX_GL_F
			{
				weapon="arifle_MX_GL_F";
				count=1;
			};
		};
	};		
	
	class Weapon_arifle_MX_GL_Black_F: Weapon_Base_F
	{
		displayName = "ACR Basic 3GL (Black)";
		class TransportWeapons
		{
			class _xx_arifle_MX_GL_Black_F
			{
				weapon="arifle_MX_GL_Black_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MX_GL_khk_F: Weapon_Base_F
	{
		displayName = "ACR Basic 3GL (Khaki)";
		class TransportWeapons
		{
			class _xx_arifle_MX_GL_khk_F
			{
				weapon="arifle_MX_GL_khk_F";
				count=1;
			};
		};
	};		

	class Weapon_arifle_MXC_F: Weapon_Base_F
	{
		displayName = "ACR SBR (Tan)";
		class TransportWeapons
		{
			class _xx_arifle_MXC_F
			{
				weapon="arifle_MXC_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MXC_Black_F: Weapon_Base_F
	{
		displayName = "ACR SBR (Black)";
		class TransportWeapons
		{
			class _xx_arifle_MXC_Black_F
			{
				weapon="arifle_MXC_Black_F";
				count=1;
			};
		};
	};		

	class Weapon_arifle_MXC_khk_F: Weapon_Base_F
	{
		displayName = "ACR SBR (Khaki)";
		class TransportWeapons
		{
			class _xx_arifle_MXC_khk_F
			{
				weapon="arifle_MXC_khk_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MXM_F: Weapon_Base_F
	{
		displayName = "ACR DMR (Tan)";
		class TransportWeapons
		{
			class _xx_arifle_MXM_F
			{
				weapon="arifle_MXM_F";
				count=1;
			};
		};
	};	
	
	class Weapon_arifle_MXM_Black_F: Weapon_Base_F
	{
		displayName = "ACR DMR (Black)";
		class TransportWeapons
		{
			class _xx_arifle_MXM_Black_F
			{
				weapon="arifle_MXM_Black_F";
				count=1;
			};
		};
	};	
	
	class Weapon_arifle_MXM_khk_F: Weapon_Base_F
	{
		displayName = "ACR DMR (Khaki)";
		class TransportWeapons
		{
			class _xx_arifle_MXM_khk_F
			{
				weapon="arifle_MXM_khk_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_MX_SW_F: Weapon_Base_F
	{
	displayName = "ACR Enhanced (Tan)";
		class TransportWeapons
		{
			class _xx_arifle_MX_SW_F
			{
				weapon="arifle_MX_SW_F";
				count=1;
			};
		};
	};		
	
	class Weapon_arifle_MX_SW_Black_F: Weapon_Base_F
	{
		displayName = "ACR Enhanced (Black)";
		class TransportWeapons
		{
			class _xx_arifle_MX_SW_Black_F
			{
				weapon="arifle_MX_SW_Black_F";
				count=1;
			};
		};
	};

	class Weapon_arifle_MX_SW_khk_F: Weapon_Base_F
	{
		displayName = "ACR Enhanced (Khaki)";
		class TransportWeapons
		{
			class _xx_arifle_MX_SW_khk_F
			{
				weapon="arifle_MX_SW_khk_F";
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
			mag_xx(100Rnd_65x39_caseless_mag,0);
			mag_xx(30Rnd_65x39_caseless_mag,9);
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
			mag_xx(30Rnd_65x39_caseless_black_mag,9);
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
			mag_xx(30Rnd_65x39_caseless_mag,7);
			mag_xx(30Rnd_65x39_caseless_mag_Tracer,6);				
			mag_xx(130Rnd_338_Mag,2);			
		};
	};
	
	//NATO Pacific Ammo Bearer	
	class B_Carryall_oli_BTAmmo_F : B_Carryall_mcamo
	{
		class TransportMagazines 
		{
			mag_xx(30Rnd_65x39_caseless_mag,0);
			mag_xx(100Rnd_65x39_caseless_mag,0)
			mag_xx(30Rnd_65x39_caseless_khaki_mag,9);
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
			mag_xx(30Rnd_65x39_caseless_khaki_mag,7);
			mag_xx(30Rnd_65x39_caseless_khaki_mag_Tracer,6);				
			mag_xx(130Rnd_338_Mag,2);			
		};
	};

	//NATO Woodland Ammo Bearer
	class B_Carryall_wdl_BWAmmo_F : B_Carryall_mcamo
	{
		class TransportMagazines 
		{
			mag_xx(100Rnd_65x39_caseless_black_mag,0);
			mag_xx(30Rnd_65x39_caseless_black_mag,9);
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
			mag_xx(30Rnd_65x39_caseless_black_mag,7);
			mag_xx(30Rnd_65x39_caseless_black_mag_Tracer,6);				
			mag_xx(130Rnd_338_Mag,2);			
		};
	};
	
	//Base Classes
	
	class B_Soldier_02_f;
	class B_Soldier_03_f;
	class B_Soldier_base_F;
	class B_Soldier_A_F;
	class B_engineer_F;
	class B_Soldier_F;
	
	// Swapping 100Rnd Magazines of all MX SW to 30Rnd Variants
	//NATO-------------------------------
	class B_soldier_AR_F : B_Soldier_02_f
	{
	magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
		
	respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};		
	
	//Patrol	
	class B_Patrol_Soldier_AR_F : B_soldier_AR_F
	{
	magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen"};	
		
	respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen"};	
	};					

	class B_CTRG_soldier_AR_A_F : B_Soldier_03_f
	{
	magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	backpack = "B_CTRG_AssaultPack_mcamo_Ammo";
	respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};			
	
	class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F
	{
	magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};	
	
	respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};		
		
	//NATO Pacific-------------------------------
	class B_T_Soldier_AR_F: B_soldier_AR_F
	{
	magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};	
	};	
	
	class B_T_Engineer_F: B_engineer_F
	{
	magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};	
	};	
	
	//NATO Woodland-------------------------------		
	class B_W_Soldier_AR_F: B_Soldier_AR_F
	{
	magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	
	respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};		
};