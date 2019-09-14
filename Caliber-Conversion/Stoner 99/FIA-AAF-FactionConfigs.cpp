#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgVehicles {

	//Ammobearer


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
