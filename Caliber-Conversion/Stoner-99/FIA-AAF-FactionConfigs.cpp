#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgVehicles {

	//Backpacks
	class B_Carryall_Base;
	class B_Carryall_oli: B_Carryall_Base {};
	class B_TacticalPack_Base;
	class B_TacticalPack_oli: B_TacticalPack_Base {};
	//Ammobearer
	class I_Fieldpack_oli_Ammo: B_Carryall_oli {

		class TransportItems {
			item_xx(FirstAidKit,4);
		};

		class TransportMagazines {
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(200Rnd_65x39_cased_Box,0);
			mag_xx(200Rnd_556x45_Box_F,1);
			mag_xx(20Rnd_762x51_Mag,3);
			mag_xx(30Rnd_556x45_Stanag,8);
			mag_xx(HandGrenade,2);
			mag_xx(MiniGrenade,2);
			mag_xx(NLAW_F,0);
		};

	};

	class B_TacticalPack_oli_AAR: B_TacticalPack_oli {

		class TransportItems {
			item_xx(bipod_03_F_blk,1);
			item_xx(muzzle_snds_H,0);
			item_xx(muzzle_snds_m,1);
			item_xx(optic_tws_mg,1);
		};

		class TransportMagazines {
			mag_xx(200Rnd_65x39_cased_Box,0);
			mag_xx(200Rnd_65x39_cased_Box_Tracer,0);
			mag_xx(200Rnd_556x45_Box_F,4);
		};

	};

	//AAF Ammobearers, all three factions.
  class G_Carryall_Ammo : B_Carryall_oli {

		class TransportItems {
			item_xx(FirstAidKit,4);
		};

		class TransportMagazines {
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(200Rnd_65x39_cased_Box,0);
			mag_xx(200Rnd_556x45_Box_F,1);
			mag_xx(20Rnd_762x51_Mag,3);
			mag_xx(30Rnd_556x45_Stanag,8);
			mag_xx(HandGrenade,2);
			mag_xx(MiniGrenade,2);
			mag_xx(RPG32_F,1);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellRed,2);
		};

	};

	//Soldier configs
	class I_G_Soldier_base_F;
	class I_Soldier_base_F;


	class I_G_Soldier_AR_F : I_G_Soldier_base_F {
		magazines[] = { "200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue" };
		respawnMagazines[] = { "200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue" };

	};
	class B_G_Soldier_AR_F : I_G_Soldier_AR_F {};

	class O_G_Soldier_AR_F : I_G_Soldier_AR_F {};

	class I_Soldier_02_F : I_Soldier_base_F {};
	class I_Soldier_AR_F : I_Soldier_02_F {
		magazines[] = { "200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green" };
		respawnMagazines[] = { "200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green" };
	};

	//NATO classes
	class B_Soldier_base_F;
	class B_Soldier_02_f: B_Soldier_base_F {};
	class B_soldier_AR_F: B_Soldier_02_f {};
	class B_Patrol_Soldier_MG_F: B_soldier_AR_F {

		magazines[] = {
			"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"
		};

		respawnMagazines[] = {
			"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"
		};

	};

};
