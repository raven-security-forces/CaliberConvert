class CfgPatches 
	{
    class BWmod_fix 
	{
		name = "BWmod-Fix by Carl";
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
		"bwa3_g28",
		"bwa3_g29",
		"bwa3_mg5",
		"bwa3_comp_ace",
		};
		weapons[] =
		{
			"BWA3_MG5",
			"BWA3_MG5_tan",
			"BWA3_G28",
			"BWA3_G29",
		};
		author = "Carl";
		units[] = {};
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class BWA3_MuzzleSlot_762;
class BWA3_MuzzleSlot_338;
class BWA3_CowsSlot;
class BWA3_CowsSlot_Longer;
class BWA3_PointerSlot;
class BWA3_PointerSlot_Underbarrel;
class BWA3_UnderbarrelSlot;
class CfgWeapons
{
////////
///MG5//
////////
	class Rifle_Long_Base_F;
	class BWA3_MG5: Rifle_Long_Base_F
	{
		author="BW-Mod & Carl";
		baseWeapon="BWA3_MG5_Fix";
		class WeaponSlotsInfo {
            allowedSlots[] = {};
			// 11.20kg
            mass = 246.9177;
            class MuzzleSlot: BWA3_MuzzleSlot_762 {
            iconPosition[] = {0.1,0.38};
            };
            class CowsSlot: BWA3_CowsSlot {};
            class PointerSlot: BWA3_PointerSlot {};
        };
		magazines[]=
		{
			"BWA3_50Rnd_762x51_softmagfix",
			"BWA3_120Rnd_762x51_softmagfix",
			"BWA3_50Rnd_762x51_softmagfix_tracer",
			"BWA3_120Rnd_762x51_softfix_Tracer",
		};
	};
	class BWA3_MG5_tan : BWA3_MG5
	{
	author="BW-Mod & Carl";
	baseWeapon = "BWA3_MG5_tan_Fix";
	};
	
////////
///G28//
////////

	class BWA3_G28 : Rifle_Long_Base_F
	{
		author="BW-Mod & Carl";
		baseWeapon="BWA3_G28_Fix";
		displayName="G28 E2";
		magazines[]=
		{
			"BWA3_20Rnd_762x51_G28fix",
			"BWA3_20Rnd_762x51_G28fix_Tracer",
			"BWA3_20Rnd_762x51_G28fix_Tracer_Dim",
			"BWA3_20Rnd_762x51_G28fix_SD",
			"BWA3_20Rnd_762x51_G28fix_AP",
			"BWA3_20Rnd_762x51_G28fix_LR",
		};
		class WeaponSlotsInfo
		{
			// 5.8kg
			mass=127.78681;
			class CowsSlot: BWA3_CowsSlot_Longer
			{
				iconPosition[]={0.55000001,0.38};
			};
			class MuzzleSlot: BWA3_MuzzleSlot_762
			{
				iconPosition[]={0.079999998,0.40000001};
			};
			class PointerSlot: BWA3_PointerSlot
			{
				iconPosition[]={0.31999999,0.40000001};
			};
			class UnderBarrelSlot: BWA3_UnderbarrelSlot
			{
				iconPosition[]={0.23,0.68000001};
			};
		};
		class Single: Mode_SemiAuto
		{
		sounds[]=
		{
				"StandardSound",
				"SilencedSound"
		};
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR03_Shot_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR03_silencerShot_SoundSet",
					"DMR03_silencerTail_SoundSet",
					"DMR03_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.15000001;
			dispersion=0.000290888;
			//changed to 1 moa
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
	};
	
////////
///G29//
////////
	class BWA3_G29 : Rifle_Long_Base_F
	{
		author="BW-Mod & Carl";
		baseWeapon="BWA3_G29_Fix";
		displayName="G29";
		magazines[] = 
		{
		"BWA3_10Rnd_86x70_G29",
		"BWA3_10Rnd_86x70_G29_Tracer",
		};
		class WeaponSlotsInfo
		{
		// 7.57kg
		mass=166.2285;	
		};
		class Single: Mode_SemiAuto {
            reloadTime = 1.5;
            dispersion = 0.00013;
			// moa changed to 0.4
			// Carl I can't find any Data on it's actual MOA. The only thing I found is some Forum guy referencing his RS9 (Civ designation) firing 0.9 MOA. Given they are replacing the G22 (German L115) with it I guess it has to be about as accurate so fair enough.
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[]= {
                    "BWA3_G29_Shot_SoundSet",
                    "DMR02_tail_SoundSet",
                    "DMR02_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "DMR02_silencerShot_SoundSet",
                    "DMR02_silencerTail_SoundSet",
                    "DMR02_silencerInteriorTail_SoundSet"
                };
            };
        };
	};
};

class CfgMagazines {
    class 20Rnd_762x51_Mag;
    class BWA3_20Rnd_762x51_G28fix: 20Rnd_762x51_Mag {
        author = "BWA3/Carl";
        displayName = "$STR_BWA3_G28PatrolMagName";
        displayNameShort = "$STR_BWA3_G28PatrolMagNameShort";
        descriptionShort = "$STR_BWA3_G28PatrolMagDescription";
		hiddenSelections[]=
		{
			"magazine_opaque",
			"magazine_tranparent"
		};
		hiddenSelectionsTextures[]=
		{
			"\bwa3_g28\data\bwa3_g28_magazine_co.paa",
			"\bwa3_g28\data\bwa3_g28_magazine_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\bwa3_g28\data\bwa3_g28_magazine.rvmat",
			"\bwa3_g28\data\bwa3_g28_magazine.rvmat"
		};
        model = "\bwa3_vests\bwa3_pouch_dmr";
        picture = "\bwa3_g28\ui\bwa3_g28_20mag_x_ca.paa";
        ammo = "BWA3_B_762x51_Ball";
		mass=14.76;
		initSpeed = 850
    };

    class BWA3_20Rnd_762x51_G28fix_Tracer: BWA3_20Rnd_762x51_G28fix {
        author = "BWA3/Carl";
        displayName = "$STR_BWA3_G28PatrolMagTracerName";
        displayNameShort = "$STR_BWA3_G28PatrolMagTracerNameShort";
        descriptionShort = "$STR_BWA3_G28PatrolMagTracerDescription";
        picture = "\bwa3_g28\ui\bwa3_g28_20mag_tracer_x_ca.paa";
        lastRoundsTracer = 30;
        tracersEvery = 1;
    };

    class BWA3_20Rnd_762x51_G28fix_Tracer_Dim: BWA3_20Rnd_762x51_G28fix_Tracer {
        author = "BWA3/Carl";
        displayName = "$STR_BWA3_G28PatrolMagTracerDimName";
        displayNameShort = "$STR_BWA3_G28PatrolMagTracerDimNameShort";
        descriptionShort = "$STR_BWA3_G28PatrolMagTracerDimDescription";
        picture = "\bwa3_g28\ui\bwa3_g28_20mag_tracer_dim_x_ca.paa";
        ammo = "BWA3_B_762x51_Ball_Tracer_Dim";
    };

    class BWA3_20Rnd_762x51_G28fix_AP: BWA3_20Rnd_762x51_G28fix {
        author = "BWA3/Carl";
        displayName = "$STR_BWA3_G28PatrolMagAPName";
        displayNameShort = "$STR_BWA3_G28PatrolMagAPNameShort";
        descriptionShort = "$STR_BWA3_G28PatrolMagAPDescription";
        picture = "\bwa3_g28\ui\bwa3_g28_20mag_ap_x_ca.paa";
        ammo = "BWA3_B_762x51_Ball_AP";
    };

    class BWA3_20Rnd_762x51_G28fix_SD: BWA3_20Rnd_762x51_G28fix {
        author = "BWA3/Carl";
        displayName = "$STR_BWA3_G28PatrolMagSDName";
        displayNameShort = "$STR_BWA3_G28PatrolMagSDNameShort";
        descriptionShort = "$STR_BWA3_G28PatrolMagSDDescription";
        picture = "\bwa3_g28\ui\bwa3_g28_20mag_sd_x_ca.paa";
        ammo = "BWA3_B_762x51_Ball_SD";
        initSpeed = 320;
    };

    class BWA3_20Rnd_762x51_G28fix_LR: BWA3_20Rnd_762x51_G28fix {
        author = "BWA3/Carl";
        displayName = "$STR_BWA3_G28StandardMagLRName";
        displayNameShort = "$STR_BWA3_G28StandardMagLRNameShort";
        descriptionShort = "$STR_BWA3_G28StandardMagLRDescription";
        picture = "\bwa3_g28\ui\bwa3_g28_20mag_lr_x_ca.paa";
        ammo = "BWA3_B_762x51_Ball_LR";
        initSpeed = 750;
    };
	
	class CA_Magazine;
	class BWA3_120Rnd_762x51_soft;
    class BWA3_50Rnd_762x51_softmagfix: BWA3_120Rnd_762x51_soft {
        author = "BWA3/Carl";
        scope = 2;
        displayName = "50Rnd 7.62 NATO Softmag (Mixed)";
        displayNameShort = "$STR_BWA3_MG5MagNameShort";
        descriptionShort = "$STR_BWA3_MG5MagDescription";
        model = "\bwa3_mg5\bwa3_ammo_box_mg5.p3d";
        picture = "\bwa3_mg5\ui\bwa3_mg5_magsoft_x_ca.paa";
        ammo = "B_762x51_Tracer_Red";
        type = 256;
        count = 50;
        mass = 41;
        initSpeed = 840;
        lastRoundsTracer = 4;
        tracersEvery = 4;
        nameSound = "mgun";
    };
	class BWA3_120Rnd_762x51_softmagfix: BWA3_50Rnd_762x51_softmagfix {
		author = "BWA3/Carl";
		mass = 86;
		count = 120;
        picture = "\bwa3_mg3\ui\bwa3_mg3_mag_x_ca.paa";
        displayName = "120Rnd 7.62 NATO Softmag (Mixed)";
	};
	//tracers//
	class BWA3_120Rnd_762x51_Tracer_soft;
	class BWA3_50Rnd_762x51_softmagfix_Tracer: BWA3_120Rnd_762x51_Tracer_soft {
        author = "BWA3/Carl";
		displayName = "50Rnd 7.62 NATO Softmag (Tracer)";		
        count = 50;
        mass = 41;	
		tracersEvery = 1;
	};
    class BWA3_120Rnd_762x51_softfix_Tracer: BWA3_50Rnd_762x51_softmagfix_tracer {
        author = "BWA3/Carl";
		mass = 86;
		count = 120;
        picture = "\bwa3_mg3\ui\bwa3_mg3_mag_x_ca.paa";
		displayName = "120Rnd 7.62 NATO Softmag (Tracer)";	
        displayNameShort = "$STR_BWA3_MG5MagTracerNameShort";
        descriptionShort = "$STR_BWA3_MG5MagTracerDescription";
        tracersEvery = 1;
    };
};

class CfgMagazineWells
////7.62x51mm////
{
	#define MACRO_20Rnd_762x51_Fix \
			BWA3_20Rnd_762x51_G28fix,\
			BWA3_20Rnd_762x51_G28fix_Tracer,\
			BWA3_20Rnd_762x51_G28fix_Tracer_Dim,\
			BWA3_20Rnd_762x51_G28fix_AP,\
			BWA3_20Rnd_762x51_G28fix_SD,\
			BWA3_20Rnd_762x51_G28fix_LR

	class CBA_762x51_AR10			// CBA 762 mags
	{
		Carl_Magazines[] =
		{
		MACRO_20Rnd_762x51_Fix
		};
	};
	class M14_762x51
	{
		Carl_Magazines[] =
		{
		MACRO_20Rnd_762x51_Fix
		};
	};
};