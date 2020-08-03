class cfgPatches
{
    class RSF_SVDK_Renaming
    {
    name = "RSF SVDK Renaming Mod";
    author = "Nero";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
	requiredAddons[] = 
	{
    "A3_Weapons_F",
	"ace_ballistics",
	"ace_common",
	"ace_smallarms",
	"ace_realisticnames",
	"cba_jr"
	};
    units[] = {};
    weapons[] = {};
    };
};


class CfgWeapons
{
	class DMR_05_base_F;
	class srifle_DMR_05_blk_F : DMR_05_base_F
	{
	displayName = "SVDK Magpul (Black)";	
	};
	
	class srifle_DMR_05_hex_F : srifle_DMR_05_blk_F
	{
	displayName = "SVDK Magpul (Hex)";	
	};
	
	class srifle_DMR_05_tan_f : srifle_DMR_05_blk_F
	{
	displayName = "SVDK Magpul (Tan)";	
	};
};

class cfgVehicles 
{
	class Weapon_Base_F;
	class Weapon_srifle_DMR_05_blk_F: Weapon_Base_F
	{
		displayName = "SVDK Magpul (Black)";
	};
	
	class Weapon_srifle_DMR_05_hex_F: Weapon_Base_F
	{
		displayName = "SVDK Magpul (Hex)";
	};
	
	class Weapon_srifle_DMR_05_tan_f: Weapon_Base_F
	{
		displayName = "SVDK Magpul (Tan)";
	};
};