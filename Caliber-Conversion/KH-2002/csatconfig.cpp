#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgVehicles {
	
	// Weapon Renaming
	class Weapon_Base_F;
	class Weapon_arifle_Katiba_F: Weapon_Base_F
	{
		displayName="KH-2002";
		class TransportItems
		{
			class _xx_arifle_Katiba_F
			{
				name="arifle_Katiba_F";
				count=1;
			};
		};
	};		

	class Weapon_arifle_Katiba_C_F: Weapon_Base_F
	{
		displayName="KH-2002C";
		class TransportItems
		{
			class _xx_arifle_Katiba_C_F
			{
				name="arifle_Katiba_C_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_Katiba_GL_F: Weapon_Base_F
	{
		displayName="KH-2002 UGL";
		class TransportItems
		{
			class _xx_arifle_Katiba_GL_F
			{
				name="arifle_Katiba_GL_F";
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