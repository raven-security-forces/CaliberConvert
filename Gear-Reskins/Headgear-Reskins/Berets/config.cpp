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
			"Headgear_H_Beret_1SEC_01_F",
			"Headgear_H_Beret_2SEC_01_F",		
			"Headgear_H_Beret_3SEC_01_F",			
			"Headgear_H_Beret_4SEC_01_F",	
			"Headgear_H_Beret_JAC_01_F",
			"Headgear_H_Beret_ARMR_01_F",
			"Headgear_H_Beret_DELTA_01_F",			
			"Headgear_H_Beret_RSF_01_F",
		};
		weapons[]=
		{
			"H_Beret_1SEC_01_F",
			"H_Beret_2SEC_01_F",		
			"H_Beret_3SEC_01_F",				
			"H_Beret_4SEC_01_F",
			"H_Beret_JAC_01_F",
			"H_Beret_ARMR_01_F",
			"H_Beret_DELTA_01_F",
			"H_Beret_RSF_01_F",
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
	class H_Beret_Colonel: HelmetBase
	{
	};
	
	class H_Beret_1SEC_01_F: H_Beret_Colonel
	{
		author="Raven Security Forces";
		_generalMacro="H_Beret_1SEC_01_F";
		displayName="Beret (1 Section)";
		picture = "\Gear-Reskins\Headgear-Reskins\Berets\UI\icon_H_beretSEC1_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_1SEC_01.rvmat"};
		hiddenSelectionsTextures[]=
		{
		"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_1SEC_01_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[]={6};
		};
	};
	
	class H_Beret_2SEC_01_F: H_Beret_1SEC_01_F
	{
		_generalMacro="H_Beret_2SEC_01_F";
		displayName="Beret (2 Section)";
		picture = "\Gear-Reskins\Headgear-Reskins\Berets\UI\icon_H_beretSEC2_ca.paa";
		hiddenSelectionsMaterials[] = {"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_2SEC_01.rvmat"};
		hiddenSelectionsTextures[]=
		{
		"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_2SEC_01_co.paa",
		};
	};	
	
	class H_Beret_3SEC_01_F: H_Beret_1SEC_01_F
	{
		_generalMacro="H_Beret_3SEC_01_F";
		displayName="Beret (3 Section)";
		picture = "\Gear-Reskins\Headgear-Reskins\Berets\UI\icon_H_beretSEC3_ca.paa";
		hiddenSelectionsMaterials[] = {"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_3SEC_01.rvmat"};
		hiddenSelectionsTextures[]=
		{
		"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_3SEC_01_co.paa",
		};
	};		
	
	class H_Beret_4SEC_01_F: H_Beret_1SEC_01_F
	{
		_generalMacro="H_Beret_4SEC_01_F";
		displayName="Beret (4 Section)";
		picture = "\Gear-Reskins\Headgear-Reskins\Berets\UI\icon_H_beretSEC4_ca.paa";
		hiddenSelectionsMaterials[] = {"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_4SEC_01.rvmat"};
		hiddenSelectionsTextures[]=
		{
		"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_4SEC_01_co.paa",
		};
	};
			
	class H_Beret_JAC_01_F: H_Beret_1SEC_01_F
	{
		_generalMacro="H_Beret_JAC_01_F";
		displayName="Beret (JAC)";
		picture = "\Gear-Reskins\Headgear-Reskins\Berets\UI\icon_H_beretJAC_ca.paa";
		hiddenSelectionsMaterials[] = {"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_JAC_01.rvmat"};
		hiddenSelectionsTextures[]=
		{
		"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_JAC_01_co.paa",
		};
	};

	class H_Beret_ARMR_01_F: H_Beret_1SEC_01_F
	{
		_generalMacro="H_Beret_ARMR_01_F";
		displayName="Beret (Armour)";
		picture = "\Gear-Reskins\Headgear-Reskins\Berets\UI\icon_H_Beret_ARMR_ca.paa";
		hiddenSelectionsMaterials[] = {"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_ARMR_01.rvmat"};
		hiddenSelectionsTextures[]=
		{
		"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_ARMR_01_co.paa",
		};
	};

	class H_Beret_DELTA_01_F: H_Beret_1SEC_01_F
	{
		_generalMacro="H_Beret_DELTA_01_F";
		displayName="Beret (Delta)";
		picture = "\Gear-Reskins\Headgear-Reskins\Berets\UI\icon_H_beretDELTA_ca.paa";
		hiddenSelectionsMaterials[] = {"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_DELTA_01.rvmat"};
		hiddenSelectionsTextures[]=
		{
		"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_DELTA_01_co.paa",
		};
	};

	class H_Beret_RSF_01_F: H_Beret_1SEC_01_F
	{
		_generalMacro="H_Beret_RSF_01_F";
		displayName="Beret (RSF)";
		picture = "\Gear-Reskins\Headgear-Reskins\Berets\UI\icon_H_beretRSF_ca.paa";
		hiddenSelectionsMaterials[] = {"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_RSF_01.rvmat"};
		hiddenSelectionsTextures[]=
		{
		"\Gear-Reskins\Headgear-Reskins\Berets\Data\H_Beret_RSF_01_co.paa",
		};
	};
	
};

class CfgVehicles
{
	class Headgear_Base_F;
	class Item_Base_F;
	
	class Headgear_H_Beret_1SEC_01_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Beret (1 Section)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Beret_1SEC_01_F
			{
				name="H_Beret_1SEC_01_F";
				count=1;
			};
		};
	};
	
	class Headgear_H_Beret_2SEC_01_F: Headgear_H_Beret_1SEC_01_F
	{
		displayName="Beret (2 Section)";
		class TransportItems
		{
			class H_Beret_2SEC_01_F
			{
				name="H_Beret_2SEC_01_F";
				count=1;
			};
		};
	};	
	
	class Headgear_H_Beret_3SEC_01_F: Headgear_H_Beret_1SEC_01_F
	{
		displayName="Beret (3 Section)";
		class TransportItems
		{
			class H_Beret_3SEC_01_F
			{
				name="H_Beret_3SEC_01_F";
				count=1;
			};
		};
	};		
	
	class Headgear_H_Beret_4SEC_01_F: Headgear_H_Beret_1SEC_01_F
	{
		displayName="Beret (4 Section)";
		class TransportItems
		{
			class H_Beret_4SEC_01_F
			{
				name="H_Beret_4SEC_01_F";
				count=1;
			};
		};
	};
	
	class Headgear_H_Beret_JAC_01_F: Headgear_H_Beret_1SEC_01_F
	{
		displayName="Beret (JAC)";
		class TransportItems
		{
			class H_Beret_JAC_01_F
			{
				name="H_Beret_JAC_01_F";
				count=1;
			};
		};
	};

	class Headgear_H_Beret_ARMR_01_F: Headgear_H_Beret_1SEC_01_F
	{
		displayName="Beret (Armour)";
		class TransportItems
		{
			class H_Beret_ARMR_01_F
			{
				name="H_Beret_ARMR_01_F";
				count=1;
			};
		};
	};
	
	class Headgear_H_Beret_DELTA_01_F: Headgear_H_Beret_1SEC_01_F
	{
		displayName="Beret (Delta)";
		class TransportItems
		{
			class H_Beret_DELTA_01_F
			{
				name="H_Beret_DELTA_01_F";
				count=1;
			};
		};
	};	

	class Headgear_H_Beret_RSF_01_F: Headgear_H_Beret_1SEC_01_F
	{
		displayName="Beret (RSF)";
		class TransportItems
		{
			class H_Beret_RSF_01_F
			{
				name="H_Beret_RSF_01_F";
				count=1;
			};
		};
	};
};