#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles {
	
	// Create Object (AK-15)
	
	class Weapon_Base_F;
	
	// AK-15	
	class Weapon_arifle_AK12_F: Weapon_Base_F
	{
		displayName = "AK-15 (Black)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12_arid_f: Weapon_Base_F
	{
		displayName = "AK-15 (Arid)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_arid_f
			{
				weapon="arifle_AK12_arid_f";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12_lush_f: Weapon_Base_F
	{
		displayName = "AK-15 (Lush)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_lush_f
			{
				weapon="arifle_AK12_lush_f";
				count=1;
			};
		};
	};
	
	//AK-15 GL
	class Weapon_arifle_AK12_GL_F: Weapon_Base_F
	{
		displayName = "AK-15 GL (Black)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_GL_F
			{
				weapon="arifle_AK12_GL_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12_GL_arid_f: Weapon_Base_F
	{
		displayName = "AK-15 GL (Arid)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_GL_arid_f
			{
				weapon="arifle_AK12_GL_arid_f";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12_GL_lush_f: Weapon_Base_F
	{
		displayName = "AK-15 GL (Lush)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_GL_lush_f
			{
				weapon="arifle_AK12_GL_lush_f";
				count=1;
			};
		};
	};

	// AK-15K
	class Weapon_arifle_AK12U_F: Weapon_Base_F
	{
		displayName = "AK-15K (Black)";
		class TransportWeapons
		{
			class _xx_arifle_AK12U_F
			{
				weapon="arifle_AK12U_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12U_arid_F: Weapon_Base_F
	{
		displayName = "AK-15K (Arid)";
		class TransportWeapons
		{
			class _xx_arifle_AK12U_arid_F
			{
				weapon="arifle_AK12U_arid_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12U_lush_F: Weapon_Base_F
	{
		displayName = "AK-15K (Lush)";
		class TransportWeapons
		{
			class _xx_arifle_AK12U_lush_F
			{
				weapon="arifle_AK12U_lush_F";
				count=1;
			};
		};
	};

	// AK-12 (Create Object)

	// AK-12
	class Weapon_arifle_AK12_545_F: Weapon_Base_F
	{
		scope=2;		
		displayName = "AK-12 (Black)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_545_F
			{
				weapon="arifle_AK12_545_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12_545_arid_f: Weapon_Base_F
	{
		scope=2;
		displayName = "AK-12 (Arid)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_545_arid_f
			{
				weapon="arifle_AK12_545_arid_f";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12_545_lush_f: Weapon_Base_F
	{
		scope=2;
		displayName = "AK-12 (Lush)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_545_lush_f
			{
				weapon="arifle_AK12_545_lush_f";
				count=1;
			};
		};
	};
	
	//AK-12 GL
	class Weapon_arifle_AK12_GL_545_F: Weapon_Base_F
	{
		scope=2;
		displayName = "AK-12 GL (Black)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_GL_545_F
			{
				weapon="arifle_AK12_GL_545_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12_GL_545_arid_f: Weapon_Base_F
	{
		scope=2;
		displayName = "AK-12 GL (Arid)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_GL_545_arid_f
			{
				weapon="arifle_AK12_GL_545_arid_f";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12_GL_545_lush_f: Weapon_Base_F
	{
		scope=2;
		displayName = "AK-12 GL (Lush)";
		class TransportWeapons
		{
			class _xx_arifle_AK12_GL_545_lush_f
			{
				weapon="arifle_AK12_GL_545_lush_f";
				count=1;
			};
		};
	};

	// AK-12K
	class Weapon_arifle_AK12U_545_F: Weapon_Base_F
	{
		scope=2;
		displayName = "AK-12K (Black)";
		class TransportWeapons
		{
			class _xx_arifle_AK12U_545_F
			{
				weapon="arifle_AK12U_545_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12U_545_arid_F: Weapon_Base_F
	{
		scope=2;	
		displayName = "AK-12K (Arid)";
		class TransportWeapons
		{
			class _xx_arifle_AK12U_545_arid_F
			{
				weapon="arifle_AK12U_545_arid_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_AK12U_545_lush_F: Weapon_Base_F
	{
		scope=2;
		displayName = "AK-12K (Lush)";
		class TransportWeapons
		{
			class _xx_arifle_AK12U_545_lush_F
			{
				weapon="arifle_AK12U_545_lush_F";
				count=1;
			};
		};
	};

	// RPK-16 (Create Object)
	
	// RPK-16
	class Weapon_arifle_RPK12_F: Weapon_Base_F
	{
		displayName = "RPK-16 (Black)";
		class TransportWeapons
		{
			class _xx_arifle_RPK12_F
			{
				weapon="arifle_RPK12_F";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_RPK12_arid_f: Weapon_Base_F
	{
		displayName = "RPK-16 (Arid)";
		class TransportWeapons
		{
			class _xx_arifle_RPK12_arid_f
			{
				weapon="arifle_RPK12_arid_f";
				count=1;
			};
		};
	};
	
	class Weapon_arifle_RPK12_lush_f: Weapon_Base_F
	{
		displayName = "RPK-16 (Lush)";
		class TransportWeapons
		{
			class _xx_arifle_RPK12_lush_f
			{
				weapon="arifle_RPK12_lush_f";
				count=1;
			};
		};
	};
};