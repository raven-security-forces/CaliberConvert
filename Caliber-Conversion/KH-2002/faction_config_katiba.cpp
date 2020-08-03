#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgVehicles {
	
	// Weapon Renaming
	class Weapon_Base_F;
	class Weapon_arifle_Katiba_F: Weapon_Base_F
	{
		displayName = "KH-2002";
		class TransportWeapons
		{
			class _xx_arifle_Katiba_F
			{
				weapon="arifle_Katiba_F";
				count=1;
			};
		};
	};		

	class Weapon_arifle_Katiba_C_F: Weapon_Base_F
	{
		displayName = "KH-2002C";
		class TransportWeapons
		{
			class _xx_arifle_Katiba_C_F
			{
				weapon="arifle_Katiba_C_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_Katiba_GL_F: Weapon_Base_F
	{
		displayName = "KH-2002 UGL";
		class TransportWeapons
		{
			class _xx_arifle_Katiba_GL_F
			{
				weapon="arifle_Katiba_GL_F";
				count=1;
			};
		};
	};	
};