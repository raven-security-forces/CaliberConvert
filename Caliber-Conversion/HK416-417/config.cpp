class CfgPatches
{
	class RSF_HK416_HK417_Fix
	{
    name = "RSF HK416 & HK417 Configuration Fixes";
    author = "Nero";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
    requiredAddons[] =
    {
	"A3_Weapons_F_Exp_Rifles_SPAR_01",
    "A3_Weapons_F_Exp_Rifles_SPAR_02",
	"A3_Weapons_F_Exp_Rifles_SPAR_03",
	"ace_ballistics",
	"ace_realisticnames",
	"A3_Weapons_F_Enoch_Acc",
	};
    units[] = {};
    weapons[] = {};
	};
};

class CfgWeapons
{
	// Recoil and Mass adjust of HK416 Variants.
	class Rifle_Base_F;
	class arifle_SPAR_01_base_F : Rifle_Base_F
	{
	recoil = "recoil_mxc";
		class FullAuto
		{
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 3;
		aiRateOfFire = 1e-006;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 1;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.00073;
		displayName = "Full";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 30;
		maxRangeProbab = 0.05;
		midRange = 15;
		midRangeProbab = 0.7;
		minRange = 2;
		minRangeProbab = 0.9;
		multiplier = 1;
		recoil = "recoil_auto_mx";
		recoilProne = "recoil_auto_prone_mx";
		reloadTime = 0.07;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {"sound",1};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "fullAuto";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";
		};
		class Single
		{
		aiDispersionCoefX = 1.4;
		aiDispersionCoefY = 1.7;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 0;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.00073;
		displayName = "Semi";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 250;
		maxRangeProbab = 0.2;
		midRange = 150;
		midRangeProbab = 0.7;
		minRange = 2;
		minRangeProbab = 0.5;
		multiplier = 1;
		recoil = "recoil_single_mx";
		recoilProne = "recoil_single_prone_mx";
		reloadTime = 0.07;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "semi";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";			
		};
		class WeaponSlotsInfo
		{
		mass = 68.78423;
		};	
	};
	
	// + Accuracy Adjust of 11" 416. Apparently need to define Sounds here as well.
	class arifle_SPAR_01_GL_base_F : arifle_SPAR_01_base_F
	{
	dispersion = 0.000581776;
	recoil = "recoil_mx";
		class FullAuto
		{
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 3;
		aiRateOfFire = 1e-006;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 1;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.000581776;
		displayName = "Full";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 30;
		maxRangeProbab = 0.05;
		midRange = 15;
		midRangeProbab = 0.7;
		minRange = 2;
		minRangeProbab = 0.9;
		multiplier = 1;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		reloadTime = 0.07;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {"sound",1};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "fullAuto";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";
			class BaseSoundModeType;
			class SilencedSound : BaseSoundModeType
			{
			SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};	
			};
			class StandardSound : BaseSoundModeType
			{
			soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
		};
		class Single
		{
		aiDispersionCoefX = 1.4;
		aiDispersionCoefY = 1.7;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 0;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.000581776;
		displayName = "Semi";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 250;
		maxRangeProbab = 0.2;
		midRange = 150;
		midRangeProbab = 0.7;
		minRange = 2;
		minRangeProbab = 0.5;
		multiplier = 1;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		reloadTime = 0.07;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "semi";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";
			class BaseSoundModeType;
			class SilencedSound : BaseSoundModeType
			{
			SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};	
			};
			class StandardSound : BaseSoundModeType
			{
			soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo
		{
		mass = 104.4991;
		};	
	};
	
	class arifle_SPAR_02_base_F : Rifle_Base_F
	{
	recoil = "recoil_mx";
		class FullAuto
		{
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 3;
		aiRateOfFire = 1e-006;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 1;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.00058;
		displayName = "Full";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 30;
		maxRangeProbab = 0.1;
		midRange = 15;
		midRangeProbab = 0.7;
		minRange = 0;
		minRangeProbab = 0.9;
		multiplier = 1;
		recoil = "recoil_auto_mx";
		recoilProne = "recoil_auto_prone_mx";
		reloadTime = 0.07;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {"sound",1};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "fullAuto";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";
		};
		class Single
		{
		aiDispersionCoefX = 1.4;
		aiDispersionCoefY = 1.7;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 0;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.00058;
		displayName = "Semi";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 400;
		maxRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.7;
		minRange = 2;
		minRangeProbab = 0.5;
		multiplier = 1;
		recoil = "recoil_single_mx";
		recoilProne = "recoil_single_prone_mx";
		reloadTime = 0.07;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "semi";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";			
		};
		class WeaponSlotsInfo
		{
		mass = 76.94133;
		};	
	};
	
	// Mass and Accuracy adjust of HK417 Variants.
	class arifle_SPAR_03_base_F : Rifle_Base_F
	{
	// I couldn't find any exact, official MOA values but I did find a HK Flyer stating the Accurized (16 and 20 Inch) Barrels can achieve sub 1 MOA so 1 MOA average seems fine. It just doesn't make sense for this gun to have the same MOA as the 14,5 Inch - hence the edit.
	dispersion = 0.000290888;
		class FullAuto
		{
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 3;
		aiRateOfFire = 1e-006;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 1;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.000290888;
		displayName = "Full";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 30;
		maxRangeProbab = 0.05;
		midRange = 15;
		midRangeProbab = 0.7;
		minRange = 0;
		minRangeProbab = 0.9;
		multiplier = 1;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		reloadTime = 0.1;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {"sound",1};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "fullAuto";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";			
		};
		class Single
		{
		aiDispersionCoefX = 1.4;
		aiDispersionCoefY = 1.7;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		autoFire = 0;
		burst = 1;
		burstRangeMax = -1;
		canShootInWater = 0;
		dispersion = 0.000290888;
		displayName = "Semi";
		ffCount = 1;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
		maxRange = 500;
		maxRangeProbab = 0.05;
		midRange = 350;
		midRangeProbab = 0.7;
		minRange = 2;
		minRangeProbab = 0.3;
		multiplier = 1;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		reloadTime = 0.1;
		requiredOpticType = -1;
		showToPlayer = 1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBurst = 0;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {};
		soundLoop[] = {};
		sounds[] = {"StandardSound","SilencedSound"};
		textureType = "semi";
		useAction = 0;
		useActionTitle = "";
		weaponSoundEffect = "";
		};
		class WeaponSlotsInfo
		{
		mass = 104.4991;
		};			
	};
	
};