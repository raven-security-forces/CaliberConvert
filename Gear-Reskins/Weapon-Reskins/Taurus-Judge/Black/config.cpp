class CfgPatches
{
	class rsf_reskin_taurus_2
	{
		name="RSF Reskins Taurus Judge (Black)";
		units[]=
		{
			"Weapon_hgun_Pistol_Signal_lethal_black_F"
		};
		weapons[]=
		{
			"hgun_Pistol_Signal_lethal_black_F",
		};
		requiredVersion=;
		requiredAddons[]=
		{
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
	class Weapon_Base_F;
	class Weapon_hgun_Pistol_Signal_lethal_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
		vehicleClass="WeaponsPrimary";
		author="NeroTheHero111";
		displayName="Taurus Judge (.45/Black)";
		class TransportItems
		{
			class _xx_hgun_Pistol_Signal_lethal_black_F
			{
				name="hgun_Pistol_Signal_lethal_black_F";
				count=1;
			};
		};
	};
};


class WeaponSlotsInfo;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class hgun_Pistol_heavy_02_F;
	class hgun_Pistol_Signal_lethal_black_F: hgun_Pistol_heavy_02_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass=20;
			class MuzzleSlot : MuzzleSlot
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
		};
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="hgun_Pistol_Signal_lethal_black_F";
		DLC="Kart";
		overviewPicture="\A3\Data_F_Kart\Images\watermarkInfo_page09_ca.paa";
		scope=2;
		model="\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Pistol_Signal_01_F.p3d";
		picture="\Gear-Reskins\Weapon-Reskins\Taurus-Judge\Black\Data\gear_Pistol_Signal_02_x_ca.paa";
		displayName="Taurus Judge (.45/Black)";
		magazines[]=
		{
		"6Rnd_45ACP_Cylinder"
		};
		hiddenSelections[] = 
		{
			"camo",
		};
		hiddenSelectionsTextures[] = 
		{
		"\Gear-Reskins\Weapon-Reskins\Taurus-Judge\Black\Data\Pistol_Signal_01_CO_3.paa",
		};
		baseWeapon="hgun_Pistol_Signal_lethal_black_F";
	};	
};