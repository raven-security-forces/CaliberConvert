#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgVehicles 
{	
	// Weapon Renaming
	class Weapon_Base_F;
	class Weapon_arifle_MSBS65_F: Weapon_Base_F
	{
		displayName="MSBS Grot B (Green)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_F
			{
				weapon="arifle_MSBS65_F";
				count=1;
			};
		};
	};		

	class Weapon_arifle_MSBS65_black_F: Weapon_Base_F
	{
		displayName="MSBS Grot B (Black)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_black_F
			{
				weapon="arifle_MSBS65_black_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_camo_F: Weapon_Base_F
	{
		displayName="MSBS Grot B (Camo)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_camo_F
			{
				weapon="arifle_MSBS65_camo_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_sand_F: Weapon_Base_F
	{
		displayName="MSBS Grot B (Sand)";
		class TransportWeapons
		{
			class _xx_arifle_arifle_MSBS65_sand_F
			{
				weapon="arifle_MSBS65_sand_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_GL_F: Weapon_Base_F
	{
		displayName="MSBS Grot B GL (Green)";
		class TransportWeapons
		{
			class _xx_arifle_arifle_MSBS65_GL_F
			{
				weapon="arifle_MSBS65_GL_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_GL_black_F: Weapon_Base_F
	{
		displayName="MSBS Grot B GL (Black)";
		class TransportWeapons
		{
			class _xx_arifle_arifle_MSBS65_GL_black_F
			{
				weapon="arifle_MSBS65_GL_black_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_GL_camo_F: Weapon_Base_F
	{
		displayName="MSBS Grot B GL (Camo)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_GL_camo_F
			{
				weapon="arifle_MSBS65_GL_camo_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_GL_sand_F: Weapon_Base_F
	{
		displayName="MSBS Grot B GL (Sand)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_GL_sand_F
			{
				weapon="arifle_MSBS65_GL_sand_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_Mark_F: Weapon_Base_F
	{
		displayName="MSBS Grot B DMR (Green)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_Mark_F
			{
				weapon="arifle_MSBS65_Mark_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_Mark_black_F: Weapon_Base_F
	{
		displayName="MSBS Grot B DMR (Black)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_Mark_black_F
			{
				weapon="arifle_MSBS65_Mark_black_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_Mark_camo_F: Weapon_Base_F
	{
		displayName="MSBS Grot B DMR (Camo)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_Mark_camo_F
			{
				weapon="arifle_MSBS65_Mark_camo_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_Mark_sand_F: Weapon_Base_F
	{
		displayName="MSBS Grot B DMR (Sand)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_Mark_sand_F
			{
				weapon="arifle_MSBS65_Mark_sand_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_UBS_F: Weapon_Base_F
	{
		displayName="MSBS Grot B SIX12 (Green)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_UBS_F
			{
				weapon="arifle_MSBS65_UBS_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_UBS_black_F: Weapon_Base_F
	{
		displayName="MSBS Grot B SIX12 (Black)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_UBS_black_F
			{
				weapon="arifle_MSBS65_UBS_black_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_UBS_camo_F: Weapon_Base_F
	{
		displayName="MSBS Grot B SIX12 (Camo)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_UBS_camo_F
			{
				weapon="arifle_MSBS65_UBS_camo_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_UBS_sand_F: Weapon_Base_F
	{
		displayName="MSBS Grot B SIX12 (Sand)";
		class TransportWeapons
		{
			class _xx_arifle_MSBS65_UBS_sand_F
			{
				weapon="arifle_MSBS65_UBS_sand_F";
				count=1;
			};
		};
	};	
	
	//Backpacks
	class B_Carryall_eaf_F;
	
	//Asst. Autorifle
	class B_Carryall_eaf_IEAAR_F: B_Carryall_eaf_F {

		class TransportItems {
			item_xx(bipod_01_F_blk,1);
			item_xx(muzzle_snds_H,0);			
			item_xx(muzzle_snds_m,1);
			item_xx(optic_tws_mg,1);
		};

		class TransportMagazines {
			mag_xx(200Rnd_65x39_cased_Box_Red,3);
			mag_xx(200Rnd_65x39_cased_Box_Tracer_Red,1);
		};

	};
};