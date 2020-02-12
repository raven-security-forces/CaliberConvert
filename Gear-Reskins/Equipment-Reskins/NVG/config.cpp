class CfgPatches
{
	class RSF_gear_reskin_beret
	{
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]=
		{
			"Item_RSF_NVG_Wide_Black",
			"Item_RSF_NVG_Wide_Green",	
			
		};
		weapons[]=
		{
			"RSF_NVG_Wide_Black",
			"RSF_NVG_Wide_Green",
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	
	class NVGoggles_INDEP: HelmetBase
	{};
	class NVGoggles_OPFOR: HelmetBase
	{};
	
	class RSF_NVG_Wide_Green: NVGoggles_INDEP
	{
		author="Raven Security Forces";
		displayName="NV Goggles (Wide, Green)";
		access = 3;
		ace_nightvision_bluRadius = 0.15;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		modelOptics = "\z\ace\addons\nightvision\models\ACE_nvg_wide_optics";
	};
	
	class RSF_NVG_Wide_Black: NVGoggles_OPFOR
	{
		author="Raven Security Forces";
		displayName="NV Goggles (Wide, Black)";
		access = 3;
		ace_nightvision_bluRadius = 0.15;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		modelOptics = "\z\ace\addons\nightvision\models\ACE_nvg_wide_optics";
	};
};

class CfgVehicles
{
	class Item_Base_F;
	
	class Item_RSF_NVG_Wide_Green: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="NV Goggles (Wide, Green)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vvehicleClass = "Items";
		model = "\A3\Weapons_F\DummyNVG.p3d";
		class TransportItems
		{
			class RSF_NVG_Wide_Green
			{
				name="RSF_NVG_Wide_Green";
				count=1;
			};
		};
	};
	
	class Item_RSF_NVG_Wide_Black: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="NV Goggles (Wide, Black)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vvehicleClass = "Items";
		model = "\A3\Weapons_F\DummyNVG.p3d";
		class TransportItems
		{
			class RSF_NVG_Wide_Black
			{
				name="RSF_NVG_Wide_Black";
				count=1;
			};
		};
	};	
};