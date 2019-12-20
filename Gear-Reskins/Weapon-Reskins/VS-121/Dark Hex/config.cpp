class CfgPatches
{
	class rsf_reskin_vs_121
	{
		name="RSF Reskins VS-121";
		units[]=
		{
			"item_srifle_DMR_01_dhex_F"
		};
		weapons[]=
		{
			"srifle_DMR_01_dhex_F",
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
	class item_srifle_DMR_01_dhex_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="NeroTheHero111";
		displayName="VS-121 (Dark Hex)";
		class TransportItems
		{
			class _xx_srifle_DMR_01_dhex_F
			{
				name="srifle_DMR_01_dhex_F";
				count=1;
			};
		};
	};
};

class CfgWeapons
{
	class srifle_DMR_01_F;
	class srifle_DMR_01_dhex_F: srifle_DMR_01_F
	{
		scope=2;
		author="NeroTheHero111";
		displayName="VS-121 (Dark Hex)";
		picture="\Gear-Reskins\Weapon-Reskins\VS-121\Dark Hex\UI\icon_dmr_01_dark.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
	
		hiddenSelectionsTextures[] = 
		{
		"\Gear-Reskins\Weapon-Reskins\VS-121\Dark Hex\Data\dmr_01_dark_2_co.paa",
		"\Gear-Reskins\Weapon-Reskins\VS-121\Dark Hex\Data\dmr_02_dark_2_co.paa"
		};
		baseWeapon="srifle_DMR_01_dhex_F";
	};
};