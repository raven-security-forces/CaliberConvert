class cfgPatches
{
    class RSF_SCARL_Conversion
    {
        name = "RSF SCARL Conversion Mod";
        author = "$STR_RHSSAF_AUTHOR_FULL";
		text= "QUOTE(RHS_TAG VERSION)";
        url = "";
        version="0.0.1";
        versionStr="0.0.1";
		requiredAddons[] = {
		"A3_Weapons_F",
		"A3_Anims_F_Config_Sdr",
		"A3_Data_F",
		"A3_Ui_F",
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

class WeaponSlotsInfo;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class MAGAZINESLOT;

class CfgVehicles
{
	class Weapon_Base_F;
	class item_rhs_weap_SCARL_CQC: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="$STR_RHSSAF_AUTHOR_FULL";
		displayName="SCAR-L (CQC)";
		class TransportItems
		{
			class _xx_rhs_weap_SCARL_CQC
			{
				name="rhs_weap_SCARL_CQC";
				count=1;
			};
		};
	};
	
	class item_rhs_weap_SCARL_LB: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="$STR_RHSSAF_AUTHOR_FULL";
		displayName="SCAR-L (LB)";
		class TransportItems
		{
			class _xx_rhs_weap_SCARL_LB
			{
				name="rhs_weap_SCARL_LB";
				count=1;
			};
		};
	};	
	
	class item_rhs_weap_SCARL_STD: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="$STR_RHSSAF_AUTHOR_FULL";
		displayName="SCAR-L (STD)";
		class TransportItems
		{
			class _xx_rhs_weap_SCARL_STD
			{
				name="rhs_weap_SCARL_STD";
				count=1;
			};
		};
	};	
		
	class item_rhs_weap_SCARL_FDE_CQC: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="$STR_RHSSAF_AUTHOR_FULL";
		displayName="SCAR-L (CQC)";
		class TransportItems
		{
			class _xx_rhs_weap_SCARL_FDE_CQC
			{
				name="rhs_weap_SCARL_FDE_CQC";
				count=1;
			};
		};
	};
	
	class item_rhs_weap_SCARL_FDE_LB: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="$STR_RHSSAF_AUTHOR_FULL";
		displayName="SCAR-L (LB)";
		class TransportItems
		{
			class _xx_rhs_weap_SCARL_FDE_LB
			{
				name="rhs_weap_SCARL_FDE_LB";
				count=1;
			};
		};
	};	
	
	class item_rhs_weap_SCARL_FDE_STD: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="$STR_RHSSAF_AUTHOR_FULL";
		displayName="SCAR-L (STD)";
		class TransportItems
		{
			class _xx_rhs_weap_SCARL_FDE_STD
			{
				name="rhs_weap_SCARL_FDE_STD";
				count=1;
			};
		};
	};	
};

class CfgWeapons
{
	class rhs_weap_SCARH_CQC;
	class rhs_weap_SCARL_CQC : rhs_weap_SCARH_CQC
    {
		scope=2;
		author="$STR_RHSSAF_AUTHOR_FULL";
        displayName="SCAR-L (CQC)";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
		magazines[] =
		{
		"rhs_mag_30Rnd_556x45_M855A1_PMAG"
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		baseWeapon="rhs_weap_SCARL_CQC";   
   };
	
	class rhs_weap_SCARH_LB;
	class rhs_weap_SCARL_LB : rhs_weap_SCARH_LB
    {
		scope=2;
		author="$STR_RHSSAF_AUTHOR_FULL";
        displayName="SCAR-L (LB)";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
		magazines[] =
		{
		"rhs_mag_30Rnd_556x45_M855A1_PMAG"	
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		baseWeapon="rhs_weap_SCARL_LB";   
    };	
	
	class rhs_weap_SCARH_STD;
	class rhs_weap_SCARL_STD : rhs_weap_SCARH_STD
    {
		scope=2;
		author="$STR_RHSSAF_AUTHOR_FULL";
        displayName="SCAR-L (STD)";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
		magazines[] =
		{
		"rhs_mag_30Rnd_556x45_M855A1_PMAG"	
		};
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
 		baseWeapon="rhs_weap_SCARL_STD";   
   };	
	
	class rhs_weap_SCARH_FDE_CQC;
	class rhs_weap_SCARL_FDE_CQC : rhs_weap_SCARH_FDE_CQC
    {
		scope=2;
		author="$STR_RHSSAF_AUTHOR_FULL";
        displayName="SCAR-L (CQC)";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
		magazines[] =
		{
		"rhs_mag_30Rnd_556x45_M855A1_PMAG"	
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		baseWeapon="rhs_weap_SCARL_FDE_CQC";   
    };
	
	class rhs_weap_SCARH_FDE_LB;
	class rhs_weap_SCARL_FDE_LB : rhs_weap_SCARH_FDE_LB
    {
		scope=2;
		author="$STR_RHSSAF_AUTHOR_FULL";
        displayName="SCAR-L (LB)";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
		magazines[] =
		{
		"rhs_mag_30Rnd_556x45_M855A1_PMAG"	
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		baseWeapon="rhs_weap_SCARL_FDE_LB";   
    };	
	
	class rhs_weap_SCARH_FDE_STD;
	class rhs_weap_SCARL_FDE_STD : rhs_weap_SCARH_FDE_STD
    {
		scope=2;
		author="$STR_RHSSAF_AUTHOR_FULL";
        displayName="SCAR-L (STD)";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
		magazines[] =
		{
		"rhs_mag_30Rnd_556x45_M855A1_PMAG"	
		};
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		baseWeapon="rhs_weap_SCARL_FDE_STD";   
	};			
};