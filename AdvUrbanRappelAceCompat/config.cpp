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
};
class CfgFunctions
{
	class SA
	{	
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