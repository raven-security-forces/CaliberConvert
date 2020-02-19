class cfgVehicles {
	
	// Weapon Renaming
	class Weapon_Base_F;
	class Weapon_arifle_SDAR_F: Weapon_Base_F
	{
		displayName="RFB";
		class TransportItems
		{
			class _xx_arifle_SDAR_F
			{
				name="arifle_SDAR_F";
				count=1;
			};
		};
	};	
	
	class B_Soldier_base_F;
	class B_Soldier_diver_base_F : B_Soldier_base_F {
	
		magazines[] = { "20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue" };
		respawnMagazines[] = { "20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue" };
	
	};

	class B_diver_F : B_Soldier_diver_base_F {};	
	class B_diver_exp_F : B_Soldier_diver_base_F {};
	class B_diver_TL_F : B_Soldier_diver_base_F {};
	
	class B_T_Diver_F : B_diver_F {};
	class B_T_Diver_Exp_F : B_diver_exp_F {};
	class B_T_Diver_TL_F : B_diver_TL_F {};
	
	
	class O_Soldier_base_F;
	class O_Soldier_diver_base_F : O_Soldier_base_F {

		magazines[] = { "20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellRed","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red" };
		respawnMagazines[] = { "20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellRed","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red" };

	};
	
	class O_diver_F : O_Soldier_diver_base_F {};
	class O_diver_exp_F : O_Soldier_diver_base_F {};
	class O_diver_TL_F : O_Soldier_diver_base_F {};
	
	class O_T_Diver_F : O_diver_F {};
	class O_T_Diver_Exp_F : O_diver_exp_F {};
	class O_T_Diver_TL_F : O_diver_TL_F {};
	
	
	class I_Soldier_base_F;
	class I_Soldier_diver_base_F : I_Soldier_base_F {
		magazines[] = { "20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green" };
		respawnMagazines[] = { "20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green" };
	};


	class I_diver_F : I_Soldier_diver_base_F {};
	class I_diver_exp_F : I_Soldier_diver_base_F {};
	class I_diver_TL_F : I_Soldier_diver_base_F {};
};