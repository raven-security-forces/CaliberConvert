class CfgPatches
{
	class rsf_reskin_negev
	{
		name="RSF Reskins Negev NG7";
		units[]=
		{
			"item_LMG_Zafir_black_F"
		};
		weapons[]=
		{
			"LMG_Zafir_black_F",
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
	class item_LMG_Zafir_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="NeroTheHero111";
		displayName="Negev NG7 (Black)";
		class TransportItems
		{
			class _xx_LMG_Zafir_black_F
			{
				name="LMG_Zafir_black_F";
				count=1;
			};
		};
	};
};

class CfgWeapons
{
	class LMG_Zafir_F;
	class LMG_Zafir_black_F: LMG_Zafir_F
	{
		scope=2;
		author="NeroTheHero111";
		displayName="Negev NG7 (Black)";
		picture="\Gear-Reskins\Weapon-Reskins\Negev-NG7\Black\UI\icon_Zafir_black_CO.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
	
		hiddenSelectionsTextures[] = 
		{
		"\Gear-Reskins\Weapon-Reskins\Negev-NG7\Black\Data\Zafir01_black_CO.paa",
		"\Gear-Reskins\Weapon-Reskins\Negev-NG7\Black\Data\Zafir02_black_CO.paa"
		};
		baseWeapon="LMG_Zafir_black_F";
	};
};