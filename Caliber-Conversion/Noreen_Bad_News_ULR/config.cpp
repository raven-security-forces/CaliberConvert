class CfgPatches
{
    class RSF_Noreen_Conversion
    {
    name = "RSF Noreen Bad News ULR Conversion Mod";
    author = "Nero";
    url = "";
    version="0.0.1";
    versionStr="0.0.1";
    requiredAddons[] = 
	{
	"A3_Weapons_F",
	"A3_Weapons_F_Mark",
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
	class Rifle_Long_Base_F;
	
	class DMR_02_base_F : Rifle_Long_Base_F  	
	{	
	magazineWell[] = {"MAR10_338","CBA_338LM_AI","CBA_338LM_T5000"};
	};
};

class CfgMagazineWells
{
	class MAR10_338
	{
	ace_ballistics[] = {"ACE_10Rnd_338_300gr_HPBT_Mag","ACE_10Rnd_338_API526_Mag"};	
	BI_Magazines[] = {"10Rnd_338_Mag"};
	};
};