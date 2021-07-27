#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgVehicles 
{
	class Weapon_Base_F;
	class Weapon_MMG_01_hex_F: Weapon_Base_F
	{
		displayName = "MG5 A2 (Hex)";
		class TransportWeapons
		{
			class _xx_MMG_01_hex_F
			{
				weapon="MMG_01_hex_F";
				count=1;
			};
		};
	};
	
	class Weapon_MMG_01_tan_F: Weapon_Base_F
	{
		displayName = "MG5 A2 (Tan)";
		class TransportWeapons
		{
			class _xx_MMG_01_tan_F
			{
				weapon="MMG_01_tan_F";
				count=1;
			};
		};
	};
	
	//Backpack configs
	class B_Carryall_ocamo;
	class B_Carryall_oucamo;

	//Asst Autorifleman
	class B_Carryall_ocamo_AAR : B_Carryall_ocamo {

		class TransportItems {
			item_xx(bipod_02_F_hex,1);
			item_xx(muzzle_snds_93mmg,0);
			item_xx(muzzle_snds_b,1);
			item_xx(optic_tws_mg,1);
		};

		class TransportMagazines {
			mag_xx(150Rnd_762x54_Box,1);
			mag_xx(150Rnd_762x54_Box_Tracer,1);
			mag_xx(150Rnd_93x64_Mag,2);
		};

	};

	//Urban CSAT asst Autorifleman
	class B_Carryall_oucamo_AAR: B_Carryall_oucamo {

		class TransportItems {
			item_xx(bipod_02_F_hex,1);
			item_xx(muzzle_snds_93mmg,0);
			item_xx(muzzle_snds_b,1);
			item_xx(optic_tws_mg,1);
		};

		class TransportMagazines {
			mag_xx(150Rnd_762x54_Box,1);
			mag_xx(150Rnd_762x54_Box_Tracer,1);
			mag_xx(150Rnd_93x64_Mag,2);
		};

	};
};