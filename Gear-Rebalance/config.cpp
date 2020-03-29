class CfgPatches
{
	class Uniform_Armour_Balance
	{
		name="RSF UAB";
		units[]=
		{
		};
		weapons[]=
		{
		};
		requiredVersion=;
		requiredAddons[]=
		{
		"A3_Data_F",
		"A3_Weapons_F",
		"A3_Characters_F",
		"A3_Characters_F_Exp",
		"A3_Characters_F_TacOps",
		"A3_Characters_F_Enoch",
		};
		author="NeroTheHero111";
		authors[]=
		{
			"NeroTheHero111"
		};
		url="";
		version="0.0.1";
		versionStr="0.0.1";
	};
};

class CfgVehicles
{

class SoldierEB;
class Hitpoints;

class O_Soldier_base_F : SoldierEB
	{
_generalMacro = "O_Soldier_base_F";
accuracy = 2.3;
armor = 2;
armorStructural = 3;
camouflage = 1.4;
expansion = 1;
explosionShielding = 0.3;
faction = "OPF_F";
genericNames = "TakistaniMen";
hiddenSelections[] = {"Camo1","Camo2","insignia"};
hiddenSelectionsMaterials[] = {};
hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_co.paa","\A3\Characters_F\OPFOR\Data\tech_CO.paa"};
identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
Items[] = {"FirstAidKit"};
linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
minFireTime = 7;
nakedUniform = "U_BasicBody";
RespawnItems[] = {"FirstAidKit"};
respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
uniformClass = "U_O_CombatUniform_ocamo";
weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

class HitPoints
{
class HitAbdomen
{
armor = 1;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "spine1";
passThrough = 0.8;
radius = 0.16;
visual = "injury_body";
};
class HitArms
{
armor = 3;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "arms";
passThrough = 1;
radius = 0.1;
visual = "injury_hands";	
};
class HitBody
{
armor = 1000;
depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
explosionShielding = 6;
material = -1;
minimalHit = 0.01;
name = "body";
passThrough = 1;
radius = 0;
visual = "injury_body";
};
class HitChest
{
armor = 1;
depends = "0";
explosionShielding = 6;
material = -1;
minimalHit = 0.01;
name = "spine3";
passThrough = 0.8;
radius = 0.18;
visual = "injury_body";	
};
class HitDiaphragm
{
armor = 1;
depends = "0";
explosionShielding = 6;
material = -1;
minimalHit = 0.01;
name = "spine2";
passThrough = 0.8;
radius = 0.18;
visual = "injury_body";	
};
class HitFace
{
armor = 1;
explosionShielding = 0.1;
material = -1;
minimalHit = 0.01;
name = "face_hub";
passThrough = 0.8;
radius = 0.08;	
};
class HitHands
{
armor = 3;
depends = "HitArms";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "hands";
passThrough = 1;
radius = 0.1;
visual = "injury_hands";	
};
class HitHead
{
armor = 1;
depends = "HitFace max HitNeck";
explosionShielding = 0.5;
material = -1;
minimalHit = 0.01;
name = "head";
passThrough = 0.8;
radius = 0.2;	
};
class HitLegs
{
armor = 3;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "legs";
passThrough = 1;
radius = 0.14;
visual = "injury_legs";	
};
class HitNeck
{
armor = 1;
explosionShielding = 0.5;
material = -1;
minimalHit = 0.01;
name = "neck";
passThrough = 0.8;
radius = 0.1;	
};
class HitPelvis
{
armor = 6;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "pelvis";
passThrough = 0.8;
radius = 0.24;
visual = "injury_body";	
};
class Incapacitated
{
armor = 1000;
depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
explosionShielding = 1;
material = -1;
minimalHit = 0;
name = "body";
passThrough = 1;
radius = 0;
visual = "";	
};
};
	};
	
class O_Soldier_02_F : O_Soldier_base_F
	{
_generalMacro = "O_Soldier_02_F";	
hiddenSelections[] = {"Camo","insignia"};	
hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_iran_co.paa"};	
model = "\A3\characters_F\Common\pilot_f.p3d";	
uniformClass = "U_O_PilotCoveralls";	

class HitPoints
{
class HitAbdomen
{
armor = 1;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "spine1";
passThrough = 0.8;
radius = 0.16;
visual = "injury_body";
};
class HitArms
{
armor = 3;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "arms";
passThrough = 1;
radius = 0.1;
visual = "injury_hands";	
};
class HitBody
{
armor = 1000;
depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
explosionShielding = 6;
material = -1;
minimalHit = 0.01;
name = "body";
passThrough = 1;
radius = 0;
visual = "injury_body";
};
class HitChest
{
armor = 1;
depends = "0";
explosionShielding = 6;
material = -1;
minimalHit = 0.01;
name = "spine3";
passThrough = 0.8;
radius = 0.18;
visual = "injury_body";	
};
class HitDiaphragm
{
armor = 1;
depends = "0";
explosionShielding = 6;
material = -1;
minimalHit = 0.01;
name = "spine2";
passThrough = 0.8;
radius = 0.18;
visual = "injury_body";	
};
class HitFace
{
armor = 1;
explosionShielding = 0.1;
material = -1;
minimalHit = 0.01;
name = "face_hub";
passThrough = 0.8;
radius = 0.08;	
};
class HitHands
{
armor = 3;
depends = "HitArms";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "hands";
passThrough = 1;
radius = 0.1;
visual = "injury_hands";	
};
class HitHead
{
armor = 1;
depends = "HitFace max HitNeck";
explosionShielding = 0.5;
material = -1;
minimalHit = 0.01;
name = "head";
passThrough = 0.8;
radius = 0.2;	
};
class HitLegs
{
armor = 3;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "legs";
passThrough = 1;
radius = 0.14;
visual = "injury_legs";	
};
class HitNeck
{
armor = 1;
explosionShielding = 0.5;
material = -1;
minimalHit = 0.01;
name = "neck";
passThrough = 0.8;
radius = 0.1;	
};
class HitPelvis
{
armor = 6;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "pelvis";
passThrough = 0.8;
radius = 0.24;
visual = "injury_body";	
};
class Incapacitated
{
armor = 1000;
depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
explosionShielding = 1;
material = -1;
minimalHit = 0;
name = "body";
passThrough = 1;
radius = 0;
visual = "";	
};
};	
	};

class O_V_Soldier_base_F : O_Soldier_base_F
	{
_generalMacro = "O_V_Soldier_base_F";	
accuracy = 3;
backpack = "B_ViperHarness_hex_M_F";	
camouflage = 1;	
displayName = "";	
DLC = "Expansion";	
editorSubcategory = "EdSubcat_Personnel_Viper";	
genericNames = "ChineseMen";	
hiddenSelections[] = {"camo"};	
hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hex_co.paa"};	
identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
items[] = {"FirstAidKit"};
linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
model = "\A3\Characters_F_Exp\OPFOR\o_viper.p3d";
respawnItems[] = {"FirstAidKit"};
respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
uniformClass = "U_O_V_Soldier_Viper_hex_F";
weapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

class HitPoints
{
class HitAbdomen
{
armor = 1;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "spine1";
passThrough = 0.8;
radius = 0.16;
visual = "injury_body";
};
class HitArms
{
armor = 3;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "arms";
passThrough = 1;
radius = 0.1;
visual = "injury_hands";	
};
class HitBody
{
armor = 1000;
depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
explosionShielding = 6;
material = -1;
minimalHit = 0.01;
name = "body";
passThrough = 1;
radius = 0;
visual = "injury_body";
};
class HitChest
{
armor = 1;
depends = "0";
explosionShielding = 6;
material = -1;
minimalHit = 0.01;
name = "spine3";
passThrough = 0.8;
radius = 0.18;
visual = "injury_body";	
};
class HitDiaphragm
{
armor = 1;
depends = "0";
explosionShielding = 6;
material = -1;
minimalHit = 0.01;
name = "spine2";
passThrough = 0.8;
radius = 0.18;
visual = "injury_body";	
};
class HitFace
{
armor = 1;
explosionShielding = 0.1;
material = -1;
minimalHit = 0.01;
name = "face_hub";
passThrough = 0.8;
radius = 0.08;	
};
class HitHands
{
armor = 3;
depends = "HitArms";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "hands";
passThrough = 1;
radius = 0.1;
visual = "injury_hands";	
};
class HitHead
{
armor = 1;
depends = "HitFace max HitNeck";
explosionShielding = 0.5;
material = -1;
minimalHit = 0.01;
name = "head";
passThrough = 0.8;
radius = 0.2;	
};
class HitLegs
{
armor = 3;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "legs";
passThrough = 1;
radius = 0.14;
visual = "injury_legs";	
};
class HitNeck
{
armor = 1;
explosionShielding = 0.5;
material = -1;
minimalHit = 0.01;
name = "neck";
passThrough = 0.8;
radius = 0.1;	
};
class HitPelvis
{
armor = 6;
depends = "0";
explosionShielding = 1;
material = -1;
minimalHit = 0.01;
name = "pelvis";
passThrough = 0.8;
radius = 0.24;
visual = "injury_body";	
};
class Incapacitated
{
armor = 1000;
depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
explosionShielding = 1;
material = -1;
minimalHit = 0;
name = "body";
passThrough = 1;
radius = 0;
visual = "";	
};
};
	};
};






class CfgWeapons
{
	

	// Uniform Weight Adjustment - Calling Base
	
	class Uniform_Base;
	class UniformItem;
	
	// Uniforms
	
	class U_O_T_Soldier_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_U_O_T_Soldier_F0";
		picture="\A3\characters_f_exp\data\ui\icon_U_OT_Soldier_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_T_Soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class U_O_CombatUniform_ocamo: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Iran_Fatigues_hex";
		picture="\A3\characters_f\data\ui\icon_U_OI_CombatUniform_ocamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_Soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class U_O_CombatUniform_oucamo: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Iran_fatigues_urban";
		picture="\A3\characters_f\data\ui\icon_U_OI_CombatUniform_oucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_soldierU_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class U_O_FullGhillie_ard: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_O_Full_Ghillie_Arid_F0";
		picture="\A3\characters_f_mark\data\ui\icon_U_O_FullGhillie_ard_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_ghillie_ard_F";
			containerClass="Supply60";
			mass=80;
		};
	};
	
	class U_O_T_FullGhillie_tna_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_U_O_FullGhillie_ghex_F0";
		picture="\A3\characters_f_exp\data\ui\icon_U_O_FullGhillie_tna_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_T_ghillie_tna_F";
			containerClass="Supply60";
			mass=80;
		};
	};
	
	class U_O_FullGhillie_lsh: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_O_Full_Ghillie_Lush_F0";
		picture="\A3\characters_f_mark\data\ui\icon_U_O_FullGhillie_lsh_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_ghillie_lsh_F";
			containerClass="Supply60";
			mass=80;
		};
	};
	
	class U_O_FullGhillie_sard: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_O_Full_Ghillie_SemiArid_F0";
		picture="\A3\characters_f_mark\data\ui\icon_U_O_FullGhillie_sard_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_ghillie_sard_F";
			containerClass="Supply60";
			mass=80;
		};
	};
	
	class U_O_T_Sniper_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_U_O_T_Sniper_F0";
		picture="\A3\characters_f_exp\data\ui\icon_U_OT_sniper_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_T_Sniper_F";
			containerClass="Supply40";
			mass=60;
		};
	};
	
	class U_O_GhillieSuit: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Ghillie_suit_Iran";
		picture="\A3\characters_f\data\ui\icon_U_ghillie_oucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_sniper_F";
			containerClass="Supply60";
			mass=60;
		};
	};
	
	class U_O_T_Officer_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_U_O_T_Officer_F0";
		picture="\A3\characters_f_exp\data\ui\icon_U_OT_officer_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\officer_tna_CO.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_T_Officer_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class U_O_PilotCoveralls: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Pilot_coveralls_Iran";
		picture="\A3\characters_f\data\ui\icon_U_OI_PilotCoveralls_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\pilot_suit_iran_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_helipilot_F";
			containerClass="Supply60";
			mass=80;
		};
	};

	class U_O_officer_noInsignia_hex_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			mass=40;
		};
	};
	
	class U_O_OfficerUniform_ocamo: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_officer_uniform";
		picture="\A3\characters_f\data\ui\icon_U_OI_Officer_ocamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_officer_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class U_O_SpecopsUniform_ocamo: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Recon_fatigues_hex";
		picture="\A3\characters_f\data\ui\icon_U_OI_CombatUniform_ocamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_crew_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class U_O_V_Soldier_Viper_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_U_O_Soldier_Viper_ghex_F0";
		picture="\A3\characters_f_exp\OPFOR\data\ui\icon_U_O_Soldier_Viper_ghex_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_V_Soldier_TL_ghex_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	
	class U_O_V_Soldier_Viper_hex_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_U_O_Soldier_Viper_hex_F0";
		picture="\A3\characters_f_exp\OPFOR\data\ui\icon_U_O_Soldier_Viper_hex_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hex_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_V_Soldier_TL_hex_F";
			containerClass="Supply20";
			mass=40;
		};	
	};

	// Special Purpose Helmet
	
	class HeadgearItem;
	
	class H_HelmetB;
	class H_HelmetO_ViperSP_hex_F: H_HelmetB 
	{
		class ItemInfo : HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Face
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};	
	};
};

class CfgGlasses
{
class G_AirPurifyingRespirator_01_base_F;	
	class G_AirPurifyingRespirator_01_F : G_AirPurifyingRespirator_01_base_F
	{
	_generalMacro = "G_AirPurifyingRespirator_01_F";
	ACE_Color[] = {0,0,0};
	ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	ACE_Overlay = "";
	ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
	ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
	ACE_Protection = 0;
	ACE_Resistance = 0;
	ACE_TintAmount = 0;
	author = "Bohemia Interactive";
	CBRN_overlayType = "CBRN_gear\data\hud\overlay_style_m50.paa";
	CBRN_protectionLevel = "1 + 2";
	displayName = "APR [NATO]";
	DLC = "Enoch";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"a3\characters_f_enoch\facewear\data\airpurifyingrespirator_co.paa"};
	identityTypes[] = {};
	mass = 8;
	model = "\a3\Characters_F_Enoch\Facewear\G_AirPurifyingRespirator_01_F.p3d";
	name = "None";
	picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_01_F_ca.paa";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	};
};