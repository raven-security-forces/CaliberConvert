#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgVehicles {

	// Weapon Renaming
	class Weapon_Base_F;
	class Weapon_srifle_DMR_07_blk_F: Weapon_Base_F
	{
		displayName="QBU-88 (Black)";
		class TransportItems
		{
			class _xx_srifle_DMR_07_blk_F
			{
				name="srifle_DMR_07_blk_F";
				count=1;
			};
		};
	};	
	
	class Weapon_srifle_DMR_07_ghex_F: Weapon_Base_F
	{
		displayName="QBU-88 (Green Hex)";
		class TransportItems
		{
			class _xx_srifle_DMR_07_ghex_F
			{
				name="srifle_DMR_07_ghex_F";
				count=1;
			};
		};
	};		

	class Weapon_srifle_DMR_07_hex_F: Weapon_Base_F
	{
		displayName="QBU-88 (Hex)";
		class TransportItems
		{
			class _xx_srifle_DMR_07_hex_F
			{
				name="srifle_DMR_07_hex_F";
				count=1;
			};
		};
	};	
	
  //Backpacks
  class B_Carryall_Base;
  class B_Carryall_ghex_F: B_Carryall_Base {};
  //Ammobearer
  class B_Carryall_ghex_OTAmmo_F : B_Carryall_ghex_F {

		class TransportItems {
			item_xx(FirstAidKit,4);
		};

		class TransportMagazines {
			mag_xx(100Rnd_580x42_Mag_F,1);
			mag_xx(10Rnd_93x64_DMR_05_Mag,2);
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(20Rnd_650x39_Cased_Mag_F,0);
      mag_xx(10Rnd_580x42_Mag_F,3);
      mag_xx(30Rnd_580x42_Mag_F,6);
      mag_xx(HandGrenade,2);
      mag_xx(MiniGrenade,2);
      mag_xx(RPG32_F,1);
		};

	};

  class B_Carryall_ghex_OTAAR_AAR_F: B_Carryall_ghex_F {

    class TransportItems {
			item_xx(bipod_02_F_blk,1);
      item_xx(muzzle_snds_93mmg,0);
      item_xx(muzzle_snds_h_mg_blk_f,1);
      item_xx(optic_tws_mg,1);
		};

		class TransportMagazines {
			mag_xx(100Rnd_580x42_Mag_F,1);
			mag_xx(100Rnd_580x42_Mag_Tracer_F,1);
      mag_xx(150Rnd_93x64_Mag,0);
			mag_xx(120Rnd_762x51_Mag_M80A1_F,2);
		};

  };


  //Base class
  class SoldierEB;

  class O_Soldier_base_F : SoldierEB {};

  class O_soldier_M_F : O_Soldier_base_F {};

  class O_T_Soldier_M_F : O_soldier_M_F {

    magazines[] = {
      "10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"
    };

    respawnMagazines[] = {
      "10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"
    };

  };

  class O_Soldier_recon_base : O_Soldier_base_F {};

  class O_recon_M_F : O_Soldier_recon_base {};

   class O_T_Recon_M_F : O_recon_M_F {
     magazines[] = {
       "10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"
     };

     respawnMagazines[] = {
       "10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","10Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"
     };
   };

};
