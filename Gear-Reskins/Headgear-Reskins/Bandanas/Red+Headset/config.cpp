class CfgPatches
{
	class rsf_gear_reskin
	{
		name="RSF Reskins";
		units[]=
		{
			"item_Headgear_H_Bandanna_red_hs"
		};
		weapons[]=
		{
			"H_Bandanna_red_hs",
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
	class Headgear_Base_F;
	class item_Headgear_H_Bandanna_red_hs: Headgear_Base_F
		{
		scope=2;
		scopeCurator=2;
		vehicleClass="Objects";
		author="NeroTheHero111";
		displayName="Bandana (Red/Headset)";
		};
		
		class TransportItems
		{
			class _xx_Headgear_H_Bandanna_red_hs
			{
				name="Headgear_H_Bandanna_red_hs";
				count=1;
			};
		};
};
class CfgWeapons
{
	class H_Bandanna_khk_hs;
	class H_Bandanna_red_hs: H_Bandanna_khk_hs
	{
		scope=2;
		author="NeroTheHero111";
		displayName="Bandana (Red/Headset)";
		picture="\Gear-Reskins\Headgear-Reskins\Bandanas\Red+Headset\icon_H_Bandanna_red_ca.paa";	
		hiddenSelectionsTextures[] = 
		{
		"\Gear-Reskins\Headgear-Reskins\Bandanas\Red+Headset\h_bandana_red_co.paa",
		};
	};
};