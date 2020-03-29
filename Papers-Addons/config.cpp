class cfgPatches
{
	class RSF_Nword_Pass
	{
		units[]=
		{
			"RSF_Nwordpass",
			"RSF_Toiletpaper",
		};
		weapons[]=
		{
			"RSF_item_Nwordpass",
			"RSF_item_Toiletpaper",
		};
		requiredAddons[]=
		{
			"PapersPlease",
		};	
		version="1.0";
	};
};
class cfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class PapersPlease_PermitBase: CBA_MiscItem
	{
		scope=0;
		icon="iconObject_circle";
		mapSize=0.034000002;
		model="\A3\Structures_F\Items\Documents\File1_F.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class RSF_Toiletpaper: PapersPlease_PermitBase
	{
		scope=2;
		displayName="Toiletpaper Roll";
		descriptionShort="A highly valuable commodity, usually found in Packs of 8";
		picture="\Papers-Addons\icons\toiletpaper.paa";
		model="\A3\Structures_F_Heli\Items\Food\Tableware_01_stackOfNapkins_F.p3d";
	};
	class RSF_Nwordpass: PapersPlease_PermitBase
	{
		scope=1;
		displayName="N-Word Pass";
		descriptionShort="Permits the carrier to say the N-Word";
		picture="\Papers-Addons\icons\nwordpass.paa";
	};	
	
};
class cfgVehicles
{
	class Weapon_Base_F;
	class PapersPlease_DocumentsBase: Weapon_Base_F
	{
		scope=0;
		editorCategory="EdCat_Things";
		editorSubcategory="PapersPlease_EdSubcat_Documents";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Intel_File1_F.jpg";
		author="Assaultboy";
		model="\A3\Weapons_f\dummycap.p3d";
	};
	class RSF_item_Toiletpaper: PapersPlease_DocumentsBase
	{
		scope=2;
		displayName="Toiletpaper Roll";
		class TransportWeapons
		{
			class RSF_Toiletpaper
			{
				weapon="RSF_Toiletpaper";
				count=1;
			};
		};
	};	
	class RSF_item_Nwordpass: PapersPlease_DocumentsBase
	{
		scope=2;
		displayName="N-Word Pass";
		class TransportWeapons
		{
			class RSF_Nwordpass
			{
				weapon="RSF_Nwordpass";
				count=1;
			};
		};
	};
};