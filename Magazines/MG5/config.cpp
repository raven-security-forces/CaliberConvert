class CfgPatches
{
	class mg5_ammoMod
	{
		name = "MG5 120Rnd Magazine";
		author = "Nero";
		url = "";
		version="0.0.1";
		versionStr="0.0.1";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Mark"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines
{
  class Default;
  class CA_Magazine: Default {};
  
	class 120Rnd_762x51_Mag_M61_F: CA_Magazine
	{
	picture = "\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
	scope=2;
	displayName = "7.62 mm 120Rnd M61 AP Box";
	displayNameShort = "";
	descriptionShort = "Caliber: 7.62x51 mm<br />Rounds: 120<br />Used in: MG5";
	ammo="rhs_ammo_762x51_M61_AP";
	count = 120;
	initSpeed=838;
	tracersEvery=5;
	lastRoundsTracer=0;
	mass=38
	};

  class 120Rnd_762x51_Mag_M62_F: 120Rnd_762x51_Mag_M61_F
	{
	displayName = "7.62 mm 120Rnd M62 (Tracer) Box";
	ammo="rhs_ammo_762x51_M62_Tracer";
	tracersEvery=1;
	lastRoundsTracer=0;
	};
  
   class 120Rnd_762x51_Mag_M80_F: 120Rnd_762x51_Mag_M61_F
	{
	displayName = "7.62 mm 120Rnd M80 Box";
	ammo="rhs_ammo_762x51_M80_Ball";
	};
  
   class 120Rnd_762x51_Mag_M80A1_F: 120Rnd_762x51_Mag_M61_F
	{
	displayName = "7.62 mm 120Rnd M80A1 EPR Box";
	ammo="rhs_ammo_762x51_M80A1EPR_Ball";
	initSpeed=803;
	};
  
    class 120Rnd_762x51_Mag_M993_AP_F: 120Rnd_762x51_Mag_M61_F
	{
	displayName = "7.62 mm 120Rnd M993 AP Box";
	ammo="rhs_ammo_762x51_M993_Ball";
	initSpeed=911;
	};
  
  	class 120Rnd_762x51_Mag_M82_F: CA_Magazine
	{
	picture = "\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
	scope=2;
	displayName = "7.62 mm 120Rnd M82 (Blank) Box";
	displayNameShort = "";
	descriptionShort = "Caliber: 7.62x51 mm<br />Rounds: 120<br />Used in: MG5";
	ammo="rhs_ammo_762x51_M82_blank";
	count = 120;
	initSpeed=838;
	tracersEvery=5;
	lastRoundsTracer=0;
	mass=38
	};
};
