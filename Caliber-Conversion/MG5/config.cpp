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
	class CA_Magazine;
  
	class 150Rnd_93x64_Mag : CA_Magazine
	{
	ACE_isBelt = 1;
	ammo = "B_762x51_Ball";
	author = "Bohemia Interactive";
	count = 120;
	descriptionShort = "Caliber: 7.62x51mm<br />Rounds: 120<br />Used in: MG5";
	displayName = "7.62mm 120Rnd Mixed Box";
	displayNameShort = "";
	initSpeed = 768;
	lastRoundsTracer = 6;
	mass = 38;
	maxLeadSpeed = 25;
	maxThrowHoldTime = 2;
	maxThrowIntensityCoef = 1.4;
	minThrowIntensityCoef = 0.3;
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	modelSpecial = "";
	nameSound = "magazine";
	picture = "\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
	quickReload = 0;
	reloadAction = "";
	scope = 2;
	selectionFireAnim = "zasleh";
	simulation = "ProxyMagazines";
	tracersEvery = 5;
	type = 256;
	useAction = 0;
	useActionTitle = "";
	value = 1;
	weaponpoolavailable = 1;
	weight = 0;	
	};
	
	class 150Rnd_93x64_Mag_2 : 150Rnd_93x64_Mag
	{
	displayName = "7.62mm 120Rnd Box";	
	lastRoundsTracer = 0;	
	tracersEvery = 0;	
	};	
	
	class 150Rnd_93x64_Mag_Tracer : 150Rnd_93x64_Mag
	{
	displayName = "7.62mm 120Rnd Tracer Box";	
	lastRoundsTracer = 0;	
	tracersEvery = 1;	
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
		"150Rnd_93x64_Mag",
		"150Rnd_93x64_Mag_2",
		"150Rnd_93x64_Mag_Tracer"
		};
        magazineWell[] = {""};
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