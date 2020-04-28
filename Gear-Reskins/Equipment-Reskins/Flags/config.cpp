class CfgPatches
{
	class RSF_gear_reskin_Flag
	{
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]=
		{
		"Flag_RSF_F",
		"Flag_Soerland_F",	
		"Banner_01_RSF_F",
		"Banner_01_Soerland_F",
		};
		weapons[]=
		{
		};
	};
};

class CfgVehicles
{
	class FlagCarrier;
	class Banner_01_base_F;
	class EventHandlers;
	
	class Flag_RSF_F: FlagCarrier
	{
	_generalMacro = "Flag_RSF_F";
	displayName = "Flag (RSF)";
	editorPreview = "\Gear-Reskins\Equipment-Reskins\Flags\Editor\FlagRSF_Preview.jpg";
	scope = 2;
	scopeCurator = 2;
		class EventHandlers : EventHandlers
		{
		init = "(_this select 0) setFlagTexture '\Gear-Reskins\Equipment-Reskins\Flags\Data\FlagRSF.paa'";
		};
	};	

	class Flag_Soerland_F : FlagCarrier
	{
	_generalMacro = "Flag_Soerland_F";
	displayName = "Flag (Sørland)";
	editorPreview = "\Gear-Reskins\Equipment-Reskins\Flags\Editor\FlagRSF_Preview.jpg";
	scope = 2;
	scopeCurator = 2;
		class EventHandlers
		{
		init = "(_this select 0) setFlagTexture '\Gear-Reskins\Equipment-Reskins\Flags\Data\FlagSoerland.paa'";
		};	
	};
	
	class Banner_01_RSF_F : Banner_01_base_F
	{
	_generalMacro = "Banner_01_RSF_F";
	displayName = "Banner (RSF)";
	editorPreview = "\Gear-Reskins\Equipment-Reskins\Flags\Editor\BannerRSF_Preview.jpg";
	hiddenSelectionsTextures[] = {"\Gear-Reskins\Equipment-Reskins\Flags\Data\FlagRSF.paa"};
	scope = 2;
	scopeCurator = 2;
	};
	
	class Banner_01_Soerland_F : Banner_01_base_F
	{
	_generalMacro = "Banner_01_Soerland_F";
	displayName = "Banner (Sørland)";
	editorPreview = "\Gear-Reskins\Equipment-Reskins\Flags\Editor\BannerSoerland_Preview.jpg";
	hiddenSelectionsTextures[] = {"\Gear-Reskins\Equipment-Reskins\Flags\Data\FlagSoerland.paa"};
	scope = 2;
	scopeCurator = 2;
	};
};

