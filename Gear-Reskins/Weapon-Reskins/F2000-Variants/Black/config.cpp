class CfgPatches
{
	class rsf_reskin_f2000
	{
		name="RSF Reskins F2000";
		units[]=
		{
			"Weapon_arifle_Mk20_Black_F",
			"Weapon_arifle_Mk20_Black_GL_F",
			"Weapon_arifle_Mk20C_Black_F"
		};
		weapons[]=
		{
			"arifle_Mk20_Black_F",
			"arifle_Mk20_Black_GL_F",
			"arifle_Mk20C_Black_F"
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
	class Weapon_arifle_Mk20_Black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="NeroTheHero111";
		displayName="F2000 (Grey)";
		class TransportItems
		{
			class _xx_arifle_Mk20_Black_F
			{
				name="arifle_Mk20_Black_F";
				count=1;
			};
		};
	};
	
	
	class Weapon_arifle_Mk20_Black_GL_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="NeroTheHero111";
		displayName="F2000 EGLM (Grey)";
		class TransportItems
		{
			class _xx_arifle_Mk20_Black_GL_F
			{
				name="arifle_Mk20_Black_GL_F";
				count=1;
			};
		};
	};
	

	class Weapon_arifle_Mk20C_Black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="NeroTheHero111";
		displayName="F2000 Tactical (Grey)";
		class TransportItems
		{
			class _xx_arifle_Mk20C_Black_F
			{
				name="arifle_Mk20C_Black_F";
				count=1;
			};
		};
	};
};

class CfgWeapons
{
	class arifle_Mk20_plain_F;
	class arifle_Mk20_Black_F: arifle_Mk20_plain_F
	{
		scope=2;
		author="NeroTheHero111";
		displayName="F2000 (Grey)";
		picture="\Gear-Reskins\Weapon-Reskins\F2000-Variants\Black\UI\icon_mk20_co_black_std.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
	
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Weapon-Reskins\F2000-Variants\Black\Data\mk20_co_black",
		};
		baseWeapon="arifle_Mk20_Black_F";
	};
	
	class arifle_Mk20_GL_plain_F;
	class arifle_Mk20_Black_GL_F: arifle_Mk20_GL_plain_F
	{
		scope=2;
		author="NeroTheHero111";
		displayName="F2000 EGLM (Grey)";
		picture="\Gear-Reskins\Weapon-Reskins\F2000-Variants\Black\UI\icon_mk20_co_black_eglm.paa";
		hiddenSelections[] = 
		{
			"camo",
			"camo2"
		};
	
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Weapon-Reskins\F2000-Variants\Black\Data\mk20_co_black",
			"\Gear-Reskins\Weapon-Reskins\F2000-Variants\Black\Data\mk20_utilities_CO_black.paa",
		};
		baseWeapon="arifle_Mk20_Black_GL_F";
	};
	
	class arifle_Mk20C_plain_F;
	class arifle_Mk20C_Black_F: arifle_Mk20C_plain_F
	{
		scope=2;
		author="NeroTheHero111";
		displayName="F2000 Tactical (Grey)";
		picture="\Gear-Reskins\Weapon-Reskins\F2000-Variants\Black\UI\icon_mk20_co_black_c.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
	
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Weapon-Reskins\F2000-Variants\Black\Data\mk20_co_black",
		};
		baseWeapon="arifle_Mk20C_Black_F";
	};
	
};