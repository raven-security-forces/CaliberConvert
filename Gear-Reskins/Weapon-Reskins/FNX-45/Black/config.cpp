class CfgPatches
{
	class rsf_reskin_fnx45
	{
		name="RSF Reskins FNX-45 (Black)";
		units[]=
		{
			"item_hgun_Pistol_heavy_black_01_F"
		};
		weapons[]=
		{
			"hgun_Pistol_heavy_black_01_F",
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
	class item_hgun_Pistol_heavy_black_01_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="NeroTheHero111";
		displayName="FNX-45 (Black)";
		class TransportItems
		{
			class _xx_hgun_Pistol_heavy_black_01_F
			{
				name="hgun_Pistol_heavy_black_01_F";
				count=1;
			};
		};
	};
};

class CfgWeapons
{
	class hgun_Pistol_heavy_01_F;
	class hgun_Pistol_heavy_black_01_F: hgun_Pistol_heavy_01_F
	{
		scope=2;
		author="NeroTheHero111";
		displayName="FNX-45 (Black)";
		picture="\Gear-Reskins\Weapon-Reskins\FNX-45\Black\UI\gear_pistol_heavy_01_X_black_ca.paa";
		hiddenSelections[] = 
		{
			"camo",
		};
	
		hiddenSelectionsTextures[] = 
		{
		"\Gear-Reskins\Weapon-Reskins\FNX-45\Black\Data\Pistol_Heavy_01_black_03_co.paa",
		};
		baseWeapon="hgun_Pistol_heavy_black_01_F";
	};
};