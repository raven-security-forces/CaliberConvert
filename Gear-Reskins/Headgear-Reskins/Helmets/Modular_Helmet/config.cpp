class CfgPatches
{
	class RSF_gear_reskin_helmet
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgVehicleClasses
{
	class RSFGear
	{
		displayName="RSFGear";
	};
};
class CfgVehicles
{
	class Headgear_Base_F;
	class Item_Base_F;

	class RSF_M_Helmet_sld: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (Sørland)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		class TransportItems
		{
			class RSF_M_Helmet_sld
			{
				name="RSF_M_Helmet_sld";
				count=1;
			};
		};
	};
    class RSF_M_Helmet_cab: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (Cabbage)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		class TransportItems
		{
			class RSF_M_Helmet_sld
			{
				name="RSF_M_Helmet_cab";
				count=1;
			};
		};
	};
    class RSF_M_Helmet_gcam: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (GCAM)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		class TransportItems
		{
			class RSF_M_Helmet_sld
			{
				name="RSF_M_Helmet_gcam";
				count=1;
			};
		};
	};
    class RSF_M_Helmet_gcn: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (GCAM Night)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		class TransportItems
		{
			class RSF_M_Helmet_sld
			{
				name="RSF_M_Helmet_gcn";
				count=1;
			};
		};
	};
	class RSF_M_Helmet_tkg: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (Takur)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		class TransportItems
		{
			class RSF_M_Helmet_sld
			{
				name="RSF_M_Helmet_tkg";
				count=1;
			};
		};
	};
	class RSF_M_Helmet_caba: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (Cabbage Arid)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		class TransportItems
		{
			class RSF_M_Helmet_sld
			{
				name="RSF_M_Helmet_caba";
				count=1;
			};
		};
	};
	class RSF_M_Helmet_spw: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (Specksi Winter)";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		class TransportItems
		{
			class RSF_M_Helmet_sld
			{
				name="RSF_M_Helmet_spw";
				count=1;
			};
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
	class RSF_M_Helmet:HelmetBase
	{
	};
	
	class RSF_M_Helmet_sld: RSF_M_Helmet
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="Modular Helmet (Sørland)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Helmets\Modular_Helmet\Data\headgear_helmet_canvas_sld_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=38;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class RSF_M_Helmet_cab: RSF_M_Helmet
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="Modular Helmet (Cabbage)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Helmets\Modular_Helmet\Data\headgear_helmet_canvas_cab_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=38;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class RSF_M_Helmet_gcam: RSF_M_Helmet
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="Modular Helmet (GCAM)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Helmets\Modular_Helmet\Data\headgear_helmet_canvas_gcam_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=38;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class RSF_M_Helmet_gcn: RSF_M_Helmet
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="Modular Helmet (GCAM Night)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Helmets\Modular_Helmet\Data\headgear_helmet_canvas_gcn_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=38;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class RSF_M_Helmet_tkg: RSF_M_Helmet
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="Modular Helmet (Takur)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Helmets\Modular_Helmet\Data\headgear_helmet_canvas_tkg_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=38;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class RSF_M_Helmet_caba: RSF_M_Helmet
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="Modular Helmet (Cabbage Arid)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Helmets\Modular_Helmet\Data\headgear_helmet_canvas_caba_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=38;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class RSF_M_Helmet_spw: RSF_M_Helmet
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="Modular Helmet (Specksi Winter)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Helmets\Modular_Helmet\Data\headgear_helmet_canvas_spw_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=38;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	
};



	
	
	
	
