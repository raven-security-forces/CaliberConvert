class CfgPatches
{
	class qbu_ammoMod
	{
		name = "QBU-88 10Rnd Magazine";
		author = "SpartanD39 / Nero";
		url = "";
		version="0.0.1";
		versionStr="0.0.1";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Exp"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines
{
  class Default;
  class CA_Magazine: Default {};
  
	class 10Rnd_580x42_Mag_F: CA_Magazine
	{
	picture = "\A3\Weapons_F_Exp\Data\UI\icon_20Rnd_650x39_Cased_Mag_F_ca.paa";
	scope=2;
	displayName = "5.8 mm 10Rnd Mag";
	displayNameShort = "";
	descriptionShort = "Caliber: 5.8x42 mm<br />Rounds: 10<br />Used in: QBZ-95-1, QBZ-95-1 GL, QBU-88,";
	ammo="B_580x42_Ball_F";
	count = 10;
	initSpeed=950;
	tracersEvery=0;
	lastRoundsTracer=0;
	mass=3
		hiddenSelections[]=
		{
		"Camo"
		};
		hiddenSelectionsTextures[]=
		{
		"a3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"
		};
	};

  class 10Rnd_580x42_Mag_Tracer_F: 10Rnd_580x42_Mag_F
  {
	picture = "\A3\Weapons_F_Exp\Data\UI\icon_20Rnd_650x39_Cased_Mag_F_ca.paa";
	displayName = "5.8 mm 10Rnd Tracer (Green) Mag";
	displayNameShort = "";
	tracersEvery=1;
	lastRoundsTracer=10;
  };
};
