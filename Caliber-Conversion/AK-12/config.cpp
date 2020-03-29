class cfgPatches
{
    class RSF_AK12_Conversion
    {
        name = "RSF AK-12 Conversion Mod";
        author = "NerotheHero111";
        url = "";
        version="0.0.1";
        versionStr="0.0.1";
		requiredAddons[] = {
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
class SlotInfo;
class CowsSlot;
class PointerSlot;
class MAGAZINESLOT;

class CfgMagazines
{	
class 30Rnd_762x39_Mag_F;
class 30Rnd_545x39_Mag_F;

class 75rnd_762x39_AK12_Mag_762_F : 30Rnd_762x39_Mag_F
{
ammo = "B_762x39_Ball_Green_F";
count = 75;
descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 75<br />Used in: AK-15, AK-15 GL, AKM";
displayName = "7.62 mm 75rnd AK12 Mag";
DLC = "Enoch";
hiddenSelections[] = {"Camo"};
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
mass = 26;
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_ak12_75rnd";
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_F_CA.paa";
reloadAction = "GestureReloadAK12_Drum";	
};
class 75rnd_762x39_AK12_Arid_Mag_762_F : 75rnd_762x39_AK12_Mag_762_F
{
displayName = "7.62 mm 75rnd AK12 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";	
};
class 75rnd_762x39_AK12_Lush_Mag_762_F : 75rnd_762x39_AK12_Mag_762_F
{
displayName = "7.62 mm 75rnd AK12 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};	
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";	
};

class 75rnd_762x39_AK12_Mag_Tracer_762_F : 75rnd_762x39_AK12_Mag_762_F
{
displayName = "7.62 mm 75rnd AK12 Tracer Mag";	
displayNameShort = "Tracer";
lastRoundsTracer = 30;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_Tracer_F_CA.paa";
tracersEvery = 1;
};	
class 75rnd_762x39_AK12_Arid_Mag_Tracer_762_F : 75rnd_762x39_AK12_Mag_Tracer_762_F
{
displayName = "7.62 mm 75rnd AK12 Tracer Arid Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_Tracer_F_CA.paa";
};	
class 75rnd_762x39_AK12_Lush_Mag_Tracer_762_F : 75rnd_762x39_AK12_Mag_Tracer_762_F
{
displayName = "7.62 mm 75rnd AK12 Tracer Lush Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";	
}; 

class 75rnd_762x39_AK12_Mag_F : 30Rnd_545x39_Mag_F
{
ammo = "B_545x39_Ball_F";
count = 96;	
descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: RPK-16";
displayName = "5.45 mm 96rnd RPK-16 Mag";
DLC = "Enoch";
hiddenSelections[] = {"Camo"};
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
initSpeed = 735;
mass = 35;
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_ak12_75rnd";
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_F_CA.paa";
reloadAction = "GestureReloadAK12_Drum";
};
class 75rnd_762x39_AK12_Arid_Mag_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "5.45 mm 96rnd RPK-16 Arid Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};	
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";	
};
class 75rnd_762x39_AK12_Lush_Mag_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "5.45 mm 96rnd RPK-16 Lush Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";	
};

class 75rnd_762x39_AK12_Mag_Tracer_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "5.45 mm 96rnd RPK-16 Tracer Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 30;	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_Tracer_F_CA.paa";
tracersEvery = 1;
};
class 75rnd_762x39_AK12_Arid_Mag_Tracer_F : 75rnd_762x39_AK12_Mag_Tracer_F
{
displayName = "5.45 mm 96rnd RPK-16 Tracer Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_Tracer_F_CA.paa";
};
class 75rnd_762x39_AK12_Lush_Mag_Tracer_F : 75rnd_762x39_AK12_Mag_Tracer_F  
{
displayName = "5.45 mm 96rnd RPK-16 Tracer Lush Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";	
};
};

class CfgMagazineWells
{
	class AK_762x39
	{
	BI_Enoch_Magazines[] = {"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_AK12_Lush_Mag_F","30Rnd_762x39_AK12_Lush_Mag_Tracer_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_Tracer_F","75rnd_762x39_AK12_Mag_762_F","75rnd_762x39_AK12_Mag_Tracer_762_F","75rnd_762x39_AK12_Lush_Mag_762_F","75rnd_762x39_AK12_Lush_Mag_Tracer_762_F","75rnd_762x39_AK12_Arid_Mag_762_F","75rnd_762x39_AK12_Arid_Mag_Tracer_762_F"};
	BI_Magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F"};
	RHS_Magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite_tracer","rhs_30Rnd_762x39mm_bakelite_89","rhs_30Rnd_762x39mm_bakelite_U","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer_tracer","rhs_30Rnd_762x39mm_polymer_89","rhs_30Rnd_762x39mm_polymer_U","rhs_10Rnd_762x39mm","rhs_10Rnd_762x39mm_tracer","rhs_10Rnd_762x39mm_89","rhs_10Rnd_762x39mm_U","rhs_75Rnd_762x39mm","rhs_75Rnd_762x39mm_tracer","rhs_75Rnd_762x39mm_89"};
	RHSSAF_Magazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M78_tracer","rhssaf_30Rnd_762x39_M82_api"};
	};
};

class CfgWeapons
{
	//Name & Camo Mag switch for Existing AK-15 Variants
	// But first, adjusting weight for the Base Classes.
	class Rifle_Base_F;
	class arifle_AK12_base_F : Rifle_Base_F
	{
	_generalMacro = "arifle_AK12_base_F";
	ACE_barrelLength = 415;
	ACE_barrelTwist = 240;
	ACE_IronSightBaseAngle = 0.0276926;
	ACE_RailHeightAboveBore = 3.82508;
	aimTransitionSpeed = 0.9;
	author = "Bohemia Interactive";
	bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};	
	bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};	
	bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};	
	bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};	
	bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};	
	bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
	bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};	
	bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};	
	bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
	bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
	bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
	bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};	
	changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_firemode",0.316228,1,5};
	descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm";
	dexterity = 1.4;
	drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_dry",0.177828,1,10};
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\AK12\Data\Anims\ak12.rtm"};
	hiddenSelections[] = {"camo1","camo2"};
	htMax = 880;
	htMin = 7;
	inertia = 0.6;
	initSpeed = -1;
	magazineReloadSwitchPhase = 0.48;
	magazines[] = {"30Rnd_762x39_AK12_Mag_F"};
	magazineWell[] = {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
	model = "\A3\Weapons_F_Exp\Rifles\AK12\AK12_F.p3d";
	modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
	recoil = "recoil_ak12";
	reloadAction = "GestureReloadAK12";
	reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_reload",1,1,10};
	soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo
		{
		allowedSlots[] = {901};	
		mass = 72.7525;
		};
	};
	
	class arifle_AK12_GL_base_F : arifle_AK12_base_F
	{
	_generalMacro = "arifle_AK12_GL_base_F";
	aimTransitionSpeed = 0.8;
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\AK12\Data\Anims\ak12gl.rtm"};
	hiddenSelections[] = {"camo1","camo2","camo3"};
	inertia = 0.7;	
	model = "\A3\Weapons_F_Exp\Rifles\AK12\AK12_GL_F.p3d";
	muzzles[] = {"this","EGLM"};
	UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class WeaponSlotsInfo
		{
		allowedSlots[] = {901};	
		mass = 103.6172;
		};
	};
	
	class arifle_AK12U_base_F : arifle_AK12_base_F
	{
	ACE_barrelLength = 314;
	aimTransitionSpeed = 1.1;
	dexterity = 1.6;
	discreteDistance[] = {100,200};
	DLC = "Enoch";
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	inertia = 0.38;
	initSpeed = -0.937063;
	model = "a3\Weapons_F_Enoch\Rifles\AK12\AK12U_F";
	recoil = "recoil_aks";
		class WeaponSlotsInfo
		{
		allowedSlots[] = {901};	
		mass = 66.1387;
		};
	};
	
	class arifle_RPK12_base_F : arifle_AK12_base_F
	{
	ACE_barrelLength = 590;
	aimTransitionSpeed = 0.95;
	dexterity = 1.6;	
	discreteDistance[] = {100,200,300,400,500,600,700,800};	
	DLC = "Enoch";
	handAnim[] = {"OFP2_ManSkeleton","a3\Anims_F_Enoch\Data\Anim\handanims\rpk12.rtm"};
	hasBipod = 1;
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	inertia = 0.7;
	initSpeed = -1.04196;
	magazines[] = {"75rnd_762x39_AK12_Mag_F"};
	model = "a3\Weapons_F_Enoch\Rifles\AK12\RPK12_F";
	recoil = "recoil_rpk12";
	soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
	soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
		class WeaponSlotsInfo
		{
		allowedSlots[] = {901};	
		mass = 99.2080;
		};	
	};

	// RPK-16 7.62 to 5.45
	class arifle_RPK12_F : arifle_RPK12_base_F
	{
	_generalMacro = "arifle_RPK12_F";	
	baseWeapon = "arifle_RPK12_F";
	displayName = "RPK-16";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] = 
	{
	"75rnd_762x39_AK12_Mag_F",
	"75rnd_762x39_AK12_Mag_Tracer_F",
	"75rnd_762x39_AK12_Arid_Mag_F",
	"75rnd_762x39_AK12_Arid_Mag_Tracer_F",
	"75rnd_762x39_AK12_Lush_Mag_F",
	"75rnd_762x39_AK12_Lush_Mag_Tracer_F",
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	};
	
	class arifle_RPK12_arid_F : arifle_RPK12_base_F
	{
	_generalMacro = "arifle_RPK12_arid_F";	
	baseWeapon = "arifle_RPK12_arid_F";
	displayName = "RPK-16 (Arid)";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};	
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_arid_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] = 
	{
	"75rnd_762x39_AK12_Arid_Mag_F",
	"75rnd_762x39_AK12_Arid_Mag_Tracer_F",
	"75rnd_762x39_AK12_Mag_F",
	"75rnd_762x39_AK12_Mag_Tracer_F",
	"75rnd_762x39_AK12_Lush_Mag_F",
	"75rnd_762x39_AK12_Lush_Mag_Tracer_F",	
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	};
	
	class arifle_RPK12_lush_F : arifle_RPK12_base_F
	{
	_generalMacro = "arifle_RPK12_lush_F";
	baseWeapon = "arifle_RPK12_lush_F";
	displayName = "RPK-16 (Lush)";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_lush_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] = 
	{
	"75rnd_762x39_AK12_Lush_Mag_F",
	"75rnd_762x39_AK12_Lush_Mag_Tracer_F",
	"75rnd_762x39_AK12_Mag_F",
	"75rnd_762x39_AK12_Mag_Tracer_F",
	"75rnd_762x39_AK12_Arid_Mag_F",
	"75rnd_762x39_AK12_Arid_Mag_Tracer_F",
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	};	
	
	//---------------------------------------------AK-12 Conversion of existing "AK-15" Classes
	
	class arifle_AK12_545_F : arifle_AK12_base_F
    {
	_generalMacro = "arifle_AK12_545_F";	
	baseWeapon = "arifle_AK12_545_F";
	displayName = "AK-12";
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
    };
	
	class arifle_AK12_arid_545_F : arifle_AK12_base_F
	{
	_generalMacro = "arifle_AK12_arid_545_F";
	baseWeapon = "arifle_AK12_arid_545_F";
	displayName = "AK-12 (Arid)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12_lush_545_F : arifle_AK12_base_F
	{
	_generalMacro = "arifle_AK12_lush_545_F";
	baseWeapon = "arifle_AK12_lush_545_F";
	displayName = "AK-12 (Lush)";
	DLC = "Enoch";	
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};	
		
	class arifle_AK12_GL_545_F : arifle_AK12_GL_base_F
	{
	_generalMacro = "arifle_AK12_GL_545_F";
	baseWeapon = "arifle_AK12_GL_545_F";
	displayName = "AK-12 GL";
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","\a3\weapons_f_exp\rifles\ak12\data\ak12_ak12_gl_co.paa"};
	picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12_GL_arid_545_F : arifle_AK12_GL_base_F
	{
	_generalMacro = "arifle_AK12_GL_arid_545_F";
	baseWeapon = "arifle_AK12_GL_arid_545_F";
	displayName = "AK-12 GL (Arid)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"};	
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_arid_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12_GL_lush_545_F : arifle_AK12_GL_base_F
	{
	_generalMacro = "arifle_AK12_GL_lush_545_F";
	baseWeapon = "arifle_AK12_GL_lush_545_F";
	displayName = "AK-12 GL (Lush)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_khaki.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_khaki_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_lush_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};	
	
	
	class arifle_AK12U_545_F : arifle_AK12U_base_F
	{
	_generalMacro = "arifle_AK12U_545_F";
	baseWeapon = "arifle_AK12U_545_F";
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
	displayName = "AK-12K";
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12U_arid_545_F : arifle_AK12U_base_F
	{
	_generalMacro = "arifle_AK12U_arid_545_F";
	baseWeapon = "arifle_AK12U_arid_545_F";
	displayName = "AK-12K (Arid)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_arid_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};
	
	class arifle_AK12U_lush_545_F : arifle_AK12U_base_F
	{
	_generalMacro = "arifle_AK12U_lush_545_F";
	baseWeapon = "arifle_AK12U_lush_545_F";
	displayName = "AK-12K (Lush)";
	DLC = "Enoch";
	hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
	picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_lush_F_CA.paa";
	scope = 2;
	descriptionShort = "Assault rifle<br/>Caliber: 5.45x39mm";
	magazines[] =
	{
	"rhs_30Rnd_545x39_7N10_AK"
	};
	magazineWell[] = {"AK_545x39","CBA_545x39_RPK"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
			"rhs_acc_uuk",
			"rhs_acc_ak5",
			"rhs_acc_dtk",
			"rhs_acc_dtk1",
			"rhs_acc_dtk2",
			"rhs_acc_dtk3",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk1983",
			"rhs_acc_tgpa",
			};
		};
	};
	};		
};