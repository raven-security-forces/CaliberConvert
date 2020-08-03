class CfgPatches
{
	class Gear_Rebalance
	{
		name="RSF Gear Rebalance Mod";
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
		author="Nero";
		url="";
		version="0.0.1";
		versionStr="0.0.1";
	};
};

class CfgVehicles
{

class SoldierEB;

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
	

	// Uniform Weight and Load Adjustment - Calling Base
	
	class Uniform_Base;
	class UniformItem;
	
	//// Uniforms - OPFOR ////					////					////

	// Fatigues (Green Hex) [CSAT]
	class U_O_T_Soldier_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};
	};
	
	// Fatigues (Hex) [CSAT]
	class U_O_CombatUniform_ocamo : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};
	};	
	
	// Fatigues (Urban) [CSAT]	
	class U_O_CombatUniform_oucamo : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};
	};		
	
	// Full Ghillie (Arid) [CSAT]
	class U_O_FullGhillie_ard : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply60";
			mass=80;
		};
	};
	
	// Full Ghillie (Jungle) [CSAT]
	class U_O_T_FullGhillie_tna_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply60";
			mass=80;
		};
	};
	
	// Full Ghillie (Lush) [CSAT]
	class U_O_FullGhillie_lsh : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply60";
			mass=80;
		};
	};
	
	// Full Ghillie (Semi-Arid) [CSAT]
	class U_O_FullGhillie_sard : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply60";
			mass=80;
		};
	};
	
	// Ghillie Suit (Green Hex) [CSAT]
	class U_O_T_Sniper_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply60";
			mass=60;
		};
	};
	
	// Ghillie Suit [CSAT]
	class U_O_GhillieSuit : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply60";
			mass=60;
		};
	};
	
	// Light Fatigues (Hex)
	class U_O_officer_noInsignia_hex_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass = "Supply40";
			mass=40;
		};
	};
	
	// Officer Fatigues (Green Hex) [CSAT]
	class U_O_T_Officer_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};
	};
	
	// Officer Fatigues (Hex)
	class U_O_OfficerUniform_ocamo : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};
	};
	
	// Pilot Coveralls [CSAT]
	class U_O_PilotCoveralls : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply60";
			mass=80;
		};
	};
	
	// Recon Fatigues (Hex)
	class U_O_SpecopsUniform_ocamo : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};
	};
	
	// Special Purpose Suit (Green Hex)
	class U_O_V_Soldier_Viper_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};
	};
	
	// Special Purpose Suit (Hex)	
	class U_O_V_Soldier_Viper_hex_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};	
	};
	
	// Wetsuit [CSAT]
	class U_O_Wetsuit : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply80";
			mass=80;
		};		
	};
	
	//// Uniforms - BLUFOR ////					////					////						
	
	// CBRN Suit (MTP) [NATO]
	class U_B_CBRN_Suit_01_MTP_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};
	
	// CBRN Suit (Tropic) [NATO]
	class U_B_CBRN_Suit_01_Tropic_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};
	
	// CBRN Suit (Woodland) [NATO]
	class U_B_CBRN_Suit_01_Wdl_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Gendarmerie Commander Uniform
	class U_B_GEN_Commander_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// Guerilla Apparel
	class U_BG_Guerrilla_6_1 : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// Guerilla Garment
	class U_BG_Guerilla1_1 : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// Guerilla Garment
	class U_BG_Guerilla1_2_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// Guerilla Outfit (Pattern)
	class U_BG_Guerilla2_2 : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// Guerilla Outfit (Plain, Dark)	
	class U_BG_Guerilla2_1 : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// Guerilla Outfit (Plain, Light)	
	class U_BG_Guerilla2_3 : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};		
	
	
	// Guerilla Smocks
	class U_BG_Guerilla3_1 : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};
	
	// Heli Pilot Coveralls [NATO]
	class U_B_HeliPilotCoveralls : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};
	
	// Survival Fatigues
	class U_B_survival_uniform : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// Wetsuit [NATO]
	class U_B_Wetsuit : Uniform_Base 
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply80";
			mass=80;
		};		
	};	
	
	//// Uniforms - INDFOR ////					////					////
	
	// Bandit Clothes (Checkered)
	class U_I_C_Soldier_Bandit_4_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};
	
	// Bandit Clothes (Polo Shirt)	
	class U_I_C_Soldier_Bandit_1_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};
	
	// Bandit Clothes (Skull)	
	class U_I_C_Soldier_Bandit_2_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};

	// Bandit Clothes (Tank Top)	
	class U_I_C_Soldier_Bandit_5_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};
	
	// Bandit Clothes (Tee)
	class U_I_C_Soldier_Bandit_3_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// CBRN Suit [AAF]
	class U_I_CBRN_Suit_01_AAF_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		

	// CBRN Suit [LDF]
	class U_I_E_CBRN_Suit_01_EAF_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Combat Fatigues (Sweater) [LDF]
	class U_I_E_Uniform_01_sweater_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// Heli Pilot Coveralls [AAF]
	class U_I_HeliPilotCoveralls : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};		
		
	// Heli Pilot Coveralls [LDF]
	class U_I_E_Uniform_01_coveralls_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};			
	
	// Wetsuit [AAF]
	class U_I_Wetsuit : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply80";
			mass=80;
		};		
	};	
	
	//// Uniforms - Civilians ////					////					////

	// CBRN Suit (Blue)
	class U_C_CBRN_Suit_01_Blue_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// CBRN Suit (White)
	class U_C_CBRN_Suit_01_White_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	

	// Commoner Clothes (Blue)
	class U_C_Poloshirt_blue : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Commoner Clothes (Burgundy)	
	class U_C_Poloshirt_burgundy : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Commoner Clothes (Red-White)	
	class U_C_Poloshirt_redwhite : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Commoner Clothes (Salmon)	
	class U_C_Poloshirt_salmon : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Commoner Clothes (Striped)	
	class U_C_Poloshirt_stripped : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		

	// Commoner Clothes (Tricolor)	
	class U_C_Poloshirt_tricolour : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Driver Coverall (Black)
	class U_C_Driver_1_black : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Driver Coverall (Blue)	
	class U_C_Driver_1_blue : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Driver Coverall (Bluking)	
	class U_C_Driver_2 : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Driver Coverall (Fuel)	
	class U_C_Driver_1 : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Driver Coverall (Green)	
	class U_C_Driver_1_green : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Driver Coverall (Orange)	
	class U_C_Driver_1_orange : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	

	// Driver Coverall (Red)	
	class U_C_Driver_1_red : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Driver Coverall (Redstone)	
	class U_C_Driver_3 : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Driver Coverall (Vrana)	
	class U_C_Driver_4 : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Driver Coverall (White)	
	class U_C_Driver_1_white : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	

	// Driver Coverall (Yellow)	
	class U_C_Driver_1_yellow : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Farmer Outfit
	class U_C_Uniform_Farmer_01_F : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Journalist Clothes
	class U_C_Journalist : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	// Looter Clothes (Leather Jacket)
	class U_C_E_LooterJacket_01_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply40";
			mass=40;
		};		
	};	
	
	// Marshal Clothes
	class U_Marshal : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Rangemaster Suit
	class U_Rangemaster : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Scientist Clothes
	class U_C_Scientist : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	

	// Scientist Outfit (Formal, Blue)
	class U_C_Uniform_Scientist_01_formal_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Scientist Outfit (Formal, White)	
	class U_C_Uniform_Scientist_01_F : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Scientist Outfit (Informal, Black)		
	class U_C_Uniform_Scientist_02_F : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};		
	
	// Scientist Outfit (Informal, Red)
	class U_C_Uniform_Scientist_02_formal_F : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Sport Clothes (Beach)		
	class U_C_man_sport_1_F : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Sport Clothes (Blue)		
	class U_C_man_sport_3_F : Uniform_Base	
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	
	
	// Sport Clothes (Orange)	
	class U_C_man_sport_2_F : Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			containerClass="Supply30";
			mass=30;
		};		
	};	

	//// Headgear - OPFOR ////
	
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