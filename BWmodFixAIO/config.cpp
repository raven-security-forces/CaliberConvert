class CfgPatches 
	{
    class CarlsBWfix 
	{
		name = "CarlsBWfixmodAIO";
		requiredVersion = 0.1;
		requiredAddons[] = {"bwa3_g28","bwa3_g29","bwa3_mg5"};
		weapons[] =
		{
			"Carls_BWA_MG5",
			"Carls_BWA3_MG5_tan",
			"Carls_BWA_G28",
			"Carls_BWA_G29",
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
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class BWA3_G28: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

////////
///MG5//
////////
	class BWA3_MG5;
	class Carls_BWA_MG5: BWA3_MG5
	{
		author="CarlandBWATeam";
		baseWeapon="BWA3_MG5fix";
		scope=2;
		class WeaponSlotsInfo {
            allowedSlots[] = {};
            mass = 174;
            class MuzzleSlot: BWA3_MuzzleSlot_762 {
            iconPosition[] = {0.1,0.38};
            };
            class CowsSlot: BWA3_CowsSlot {};
            class PointerSlot: BWA3_PointerSlot {};
        };
		displayName="MG5 (reconfigured)";
		magazines[]=
		{
			"BWA3_50Rnd_762x51_softmagfix",
			"BWA3_120Rnd_762x51_softmagfix",
			"BWA3_50Rnd_762x51_softmagfix_tracer",
			"BWA3_120Rnd_762x51_softfix_Tracer",
		};
	};
    class Carls_BWA3_MG5_tan: Carls_BWA_MG5 {
        author = "CarlandBWATeam";
        baseWeapon = "BWA3_MG5fix_tan";
        displayName = "MG5 Tan (reconfigured)";
        picture = "\bwa3_mg5\ui\bwa3_mg5_tan_x_ca.paa";
        hiddenSelectionsTextures[] = {"\bwa3_mg5\data\bwa3_mg5_tan_co.paa"};
		magazines[]=
		{
			"BWA3_50Rnd_762x51_softmagfix",
			"BWA3_120Rnd_762x51_softmagfix",
			"BWA3_50Rnd_762x51_softmagfix_tracer",
			"BWA3_120Rnd_762x51_softfix_Tracer",
		};
    };
////////
///G28//
////////
	class Carls_BWA_G28: BWA3_G28
	{
		author="CarlandBWATeam";
		baseWeapon="BWA3_G28fix";
		scope=2;
		displayName="G28 (reconfigured)";
		descriptionShort="G28 fix";
		model="\bwa3_g28\bwa3_g28.p3d";
		picture="\bwa3_g28\ui\bwa3_g28_x_ca.paa";
		uiPicture="\A3\weapons_f\data\ui\icon_regular_CA.paa";
		hiddenSelections[]=
		{
			"mat_g28",
			"frontgrip",
			"magazine_opaque",
			"magazine_tranparent"
		};
		hiddenSelectionsTextures[]=
		{
			"\bwa3_g28\data\bwa3_g28_co.paa",
			"\bwa3_g28\data\bwa3_hk_frontgrip_g28_co.paa",
			"\bwa3_g28\data\bwa3_g28_magazine_co.paa",
			"\bwa3_g28\data\bwa3_g28_magazine_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\bwa3_g28\data\bwa3_g28.rvmat",
			"\bwa3_g28\data\bwa3_hk_frontgrip_g28.rvmat",
			"\bwa3_g28\data\bwa3_g28_magazine.rvmat",
			"\bwa3_g28\data\bwa3_g28_magazine.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\bwa3_g28\data\bwa3_g28_handanim.rtm"
		};
		magazines[]=
		{
			"BWA3_20Rnd_762x51_G28fix",
			"BWA3_20Rnd_762x51_G28fix_Tracer",
			"BWA3_20Rnd_762x51_G28fix_Tracer_Dim",
			"BWA3_20Rnd_762x51_G28fix_SD",
			"BWA3_20Rnd_762x51_G28fix_AP",
			"BWA3_20Rnd_762x51_G28fix_LR",
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=121;
			//changed to 5.49kg
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
			dispersion=0.000349999998;
			//changed to 1.2moa
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
	};
	
////////
///G29//
////////
	class BWA3_G29;	
	class Carls_BWA_G29: BWA3_G29
	{
		author="CarlandBWATeam";
		baseWeapon="BWA3_G29fix";
		scope=2;
		displayName="G29 (reconfigured)";
		descriptionShort="G29 fix";
		magazines[] = 
		{
		"BWA3_10Rnd_86x70_G29",
		"BWA3_10Rnd_86x70_G29_Tracer",
		
		};
		class Single: Mode_SemiAuto {
            reloadTime = 1.5;
            dispersion = 0.00013;
			//moa changed to 0.4
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
        displayName = "50Rnd 7.62 NATO Softmag (mixed)";
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
        displayName = "120Rnd 7.62 NATO Softmag (mixed)";
	};
	//tracers//
	class BWA3_120Rnd_762x51_Tracer_soft;
	class BWA3_50Rnd_762x51_softmagfix_Tracer: BWA3_120Rnd_762x51_Tracer_soft {
        author = "BWA3/Carl";
		displayName = "50Rnd 7.62 NATO Softmag (tracer)";		
        count = 50;
        mass = 41;	
		tracersEvery = 1;
	};
    class BWA3_120Rnd_762x51_softfix_Tracer: BWA3_50Rnd_762x51_softmagfix_tracer {
        author = "BWA3/Carl";
		mass = 86;
		count = 120;
        picture = "\bwa3_mg3\ui\bwa3_mg3_mag_x_ca.paa";
		displayName = "120Rnd 7.62 NATO Softmag (tracer)";	
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

