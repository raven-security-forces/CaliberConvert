class cfgVehicles {

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
