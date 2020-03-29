class CfgPatches
{
	class AUR_AdvancedUrbanRappelling
	{
		units[]=
		{
			"AUR_AdvancedUrbanRappelling"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Modules_F"
		};
	};
	
	class AR_AdvancedRappelling
	{
		units[]=
		{
			"AR_AdvancedRappelling"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Modules_F"
		};
	};
};
class CfgFunctions
{
	class SA
	{
		class AdvancedRappelling
		{
			file="\RappelAceCompat\functions";
			class advancedRappellingInit
			{
				postInit=1;
			};
		};
		
		class AdvancedUrbanRappelling
		{
			file="\RappelAceCompat\functions";
			class advancedUrbanRappellingInit
			{
				postInit=1;
			};
		};
	
	};

};