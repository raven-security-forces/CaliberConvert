class CfgPatches
{
	class rsf_reskin_vector
	{
		name="RSF Reskins Vector SMG (Grey)";
		units[]=
		{
			"Weapon_SMG_01_black_F"
		};
		weapons[]=
		{
			"SMG_01_black_F",
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
	class Weapon_SMG_01_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="NeroTheHero111";
		displayName="Vector SMG (Grey)";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		class TransportItems
		{
			class _xx_SMG_01_black_F
			{
				name="SMG_01_black_F";
				count=1;
			};
		};
	};
};

class CfgWeapons
{
	class SMG_01_F;
	class SMG_01_black_F: SMG_01_F
	{
		scope=2;
		author="NeroTheHero111";
		displayName="Vector SMG (Grey)";
		picture="\Gear-Reskins\Weapon-Reskins\Vector-SMG\Grey\UI\gear_SMG_01_X_black_CA.paa";
		hiddenSelections[] = 
		{
		"camo1","camo2","camo3"
		};
		hiddenSelectionsTextures[] = 
		{
		"\Gear-Reskins\Weapon-Reskins\Vector-SMG\Grey\Data\SMG_01_black_co.paa",
		"\Gear-Reskins\Weapon-Reskins\Vector-SMG\Grey\Data\Vectoratt_black_co.paa",
		"\a3\weapons_f\acc\data\battlesight_co.paa"
		};
		baseWeapon="SMG_01_black_F";
	};
};