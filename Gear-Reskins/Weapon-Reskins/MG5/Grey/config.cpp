class CfgPatches
{
	class rsf_reskin
	{
		name="RSF Reskins";
		units[]=
		{
			"item_MMG_01_grey_F"
		};
		weapons[]=
		{
			"MMG_01_grey_F",
		};
		requiredVersion=;
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark"
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
		
	class A3_Weapons_F_Mark_Machineguns_MMG_01
	{
		addonRootClass="A3_Weapons_F_Mark";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MMG_01_hex_ARCO_LP_F",
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_01_grey_F"
		};
	};

};
	
class CfgVehicles
{
	class Weapon_Base_F;
	class item_MMG_01_grey_F: Weapon_Base_F
	{
		dlc="Mark";
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		displayName="MG5 (Grey)";
		class TransportItems
		{
			class _xx_MMG_01_grey_F
			{
				name="MMG_01_grey_F";
				count=1;
			};
		};
	};
};

class CfgWeapons
{
	class MMG_01_tan_F;
	class MMG_01_grey_F: MMG_01_tan_F
	{
		DLC="Mark";
		scope=2;
		displayName="MG5 (Grey)";
		picture="\Gear-Reskins\Weapon-Reskins\MG5\Grey\UI\icon_MMG_01_grey.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3"
		};
	
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Weapon-Reskins\MG5\Grey\Data\MMG_01_01_grey_CO.paa",
			"\Gear-Reskins\Weapon-Reskins\MG5\Grey\Data\MMG_01_02_grey_CO.paa",
			"\Gear-Reskins\Weapon-Reskins\MG5\Grey\Data\MMG_01_03_grey_CO.paa"
		};
		baseWeapon="MMG_01_grey_F";
	};
};