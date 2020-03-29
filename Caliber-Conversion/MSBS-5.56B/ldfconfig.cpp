#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class cfgVehicles 
{	
	// Weapon Renaming
	class Weapon_Base_F;
	class Weapon_arifle_MSBS65_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B";
		class TransportItems
		{
			class _xx_arifle_MSBS65_F
			{
				name="arifle_MSBS65_F";
				count=1;
			};
		};
	};		

	class Weapon_arifle_MSBS65_black_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B (Black)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_black_F
			{
				name="arifle_MSBS65_black_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_camo_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B (Camo)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_camo_F
			{
				name="arifle_MSBS65_camo_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_sand_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B (Sand)";
		class TransportItems
		{
			class _xx_arifle_arifle_MSBS65_sand_F
			{
				name="arifle_MSBS65_sand_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_GL_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B UGL";
		class TransportItems
		{
			class _xx_arifle_arifle_MSBS65_GL_F
			{
				name="arifle_MSBS65_GL_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_GL_black_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B UGL (Black)";
		class TransportItems
		{
			class _xx_arifle_arifle_MSBS65_GL_black_F
			{
				name="arifle_MSBS65_GL_black_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_GL_camo_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B UGL (Camo)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_GL_camo_F
			{
				name="arifle_MSBS65_GL_camo_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_GL_sand_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B UGL (Sand)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_GL_sand_F
			{
				name="arifle_MSBS65_GL_sand_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_Mark_F: Weapon_Base_F
	{
		displayName="MSBS-7.62N";
		class TransportItems
		{
			class _xx_arifle_MSBS65_Mark_F
			{
				name="arifle_MSBS65_Mark_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_Mark_black_F: Weapon_Base_F
	{
		displayName="MSBS-7.62N (Black)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_Mark_black_F
			{
				name="arifle_MSBS65_Mark_black_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_Mark_camo_F: Weapon_Base_F
	{
		displayName="MSBS-7.62N (Camo)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_Mark_camo_F
			{
				name="arifle_MSBS65_Mark_camo_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_Mark_sand_F: Weapon_Base_F
	{
		displayName="MSBS-7.62N (Sand)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_Mark_sand_F
			{
				name="arifle_MSBS65_Mark_sand_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_UBS_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B SIX12";
		class TransportItems
		{
			class _xx_arifle_MSBS65_UBS_F
			{
				name="arifle_MSBS65_UBS_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_UBS_black_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B SIX12 (Black)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_UBS_black_F
			{
				name="arifle_MSBS65_UBS_black_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_UBS_camo_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B SIX12 (Camo)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_UBS_camo_F
			{
				name="arifle_MSBS65_UBS_camo_F";
				count=1;
			};
		};
	};	

	class Weapon_arifle_MSBS65_UBS_sand_F: Weapon_Base_F
	{
		displayName="MSBS-5.56B SIX12 (Sand)";
		class TransportItems
		{
			class _xx_arifle_MSBS65_UBS_sand_F
			{
				name="arifle_MSBS65_UBS_sand_F";
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