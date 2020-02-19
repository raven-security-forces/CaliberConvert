class CfgPatches 
{
    class RSF_MG5_Conversion 
    {
        name = "RSF MG5 Conversion Mod";
        author = "Nero";
        url = "";
        version="0.0.1";
        versionStr="0.0.1";
        requiredAddons[] = 
		{
		"A3_Weapons_F",
		"A3_Anims_F_Config_Sdr",
		"A3_Data_F",
		"A3_Ui_F",
		"ace_ballistics",
		"ace_common",
		"ace_smallarms",
		"ace_realisticnames",
		"cba_jr"
		};
        units[] = {};
        weapons[] = {};
    };
};

class WeaponSlotsInfo;
class MuzzleSlot;

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
	mass=38;
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
	mass=38;
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_MMG_01_hex_F : Weapon_Base_F
	{
		displayName = "MG5 (Hex)";
		class TransportItems
		{
			class _xx_MMG_01_hex_F
			{
				name="MMG_01_hex_F";
				count=1;
			};
		};
	};
	
	class Weapon_MMG_01_tan_F : Weapon_Base_F
	{
		displayName = "MG5 (Tan)";	
		class TransportItems
		{
			class _xx_MMG_01_tan_F
			{
				name="MMG_01_tan_F";
				count=1;
			};
		};
	};	
};
class CfgWeapons 
{
	
	class MMG_01_base_F;	
	class MMG_01_hex_F: MMG_01_base_F
    {
        displayName="MG5 (Hex)";
		descriptionShort = "Medium Machine Gun<br />Caliber: 7.62x51 mm";
		magazines[] = 
		{
		"120Rnd_762x51_Mag_M61_F",
		"120Rnd_762x51_Mag_M62_F",
		"120Rnd_762x51_Mag_M80_F",
		"120Rnd_762x51_Mag_M80A1_F",
		"120Rnd_762x51_Mag_M993_AP_F",
		"120Rnd_762x51_Mag_M82_F",
		};
        magazineWell[] = {};
		ACE_barrelTwist = 360;
		ACE_barrelLength = 550;
		ACE_twistDirection = 1;
		mass = 246.9177;
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]= 
				{
				"ace_muzzle_mzls_b",
				"muzzle_snds_b",
				"muzzle_snds_b_snd_f",
				"muzzle_snds_b_khk_f",
				"muzzle_snds_b_lush_f",
				"muzzle_snds_b_arid_f",
				"rhsusf_acc_aac_762sd_silencer",
				"rhsusf_acc_aac_762sdn6_silencer",	
				"rhsgref_sdn6_suppressor",
				"rhsusf_acc_aac_scarh_silencer",					
				};
			};
		};		
    };
	
	class MMG_01_tan_F: MMG_01_hex_F
    {
        displayName="MG5 (Tan)";
    };
};