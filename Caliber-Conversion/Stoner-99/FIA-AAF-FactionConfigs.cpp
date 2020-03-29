#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgVehicles {

	// Weapon Renaming
	class Weapon_Base_F;
	class Weapon_LMG_Mk200_black_F: Weapon_Base_F
	{
		displayName="Stoner 99 LMG (Black)";
		class TransportItems
		{
			class _xx_LMG_Mk200_black_F
			{
				name="LMG_Mk200_black_F";
				count=1;
			};
		};
	};	
	
	//Backpacks
	class B_Carryall_oli;
	class B_TacticalPack_oli;
	
	//Ammobearer
	class B_TacticalPack_oli_AAR: B_TacticalPack_oli {

		class TransportItems {
			item_xx(bipod_03_F_blk,1);
			item_xx(muzzle_snds_H,0);
			item_xx(muzzle_snds_m,1);
			item_xx(optic_tws_mg,1);
		};

		class TransportMagazines {
			mag_xx(200Rnd_65x39_cased_Box,3);
			mag_xx(200Rnd_65x39_cased_Box_Tracer,1);
		};

	};
};
