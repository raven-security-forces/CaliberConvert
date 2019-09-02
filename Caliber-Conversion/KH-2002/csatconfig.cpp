class cfgVehicles {

	// Base classes
	class SoldierEB;
	class O_Soldier_base_F: SoldierEB {};

	// GL Troops
	class O_Soldier_TL_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};

	};

	class O_Soldier_GL_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};

	};

	// Missile Troops
	class O_Soldier_AT_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_AA_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_HAT_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_LAT_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	};

	// Rifle infantry

	class O_soldier_UAV_06_medical_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	};

	class O_soldier_UAV_06_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	};

	class O_soldier_UAV_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_SL_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_lite_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_soldier_repair_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_soldier_PG_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_officer_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	};

	class O_soldier_exp_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};
	
	class O_soldier_mine_F : O_soldier_exp_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_support_Mort_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_support_MG_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_support_GMG_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_engineer_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_crew_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_medic_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_AAT_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_AAA_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_AHAT_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_support_AMort_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_support_AMG_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_AAR_F : O_Soldier_base_F {

		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};

	class O_Soldier_A_F : O_Soldier_base_F {
		
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	};


//Urban CSAT
class O_Soldier_Urban_base: O_Soldier_base_F {};

//Underbarrels
class O_SoldierU_GL_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};

class O_soldierU_TL_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

};

//Missiles

class O_soldierU_AA_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};

class O_soldierU_AT_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};

class O_soldierU_LAT_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};

//Riflemen

class O_soldierU_A_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};
  
class O_soldierU_AAR_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};
  
class O_soldierU_AAA_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};
  
class O_soldierU_AAT_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};
  
class O_soldierU_medic_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};
  
class O_engineer_U_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};
  
class O_soldierU_exp_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};
  
class O_soldierU_repair_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};
  
class O_soldierU_F: O_Soldier_Urban_base {

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};
  
class O_SoldierU_SL_F: O_Soldier_Urban_base {
	
	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};

};

	magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

	respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};

};