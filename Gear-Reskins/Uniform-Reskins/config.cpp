class CfgPatches
{
	class RSF_Uniforms_Cfg
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgVehicleClasses
{
	class RSFGear
	{
		displayName="RSFGear";
	};
};
class CfgVehicles
{
	class milgp_u_g3_field_set_atacsfg;
	class B_Soldier_F;
	class RSFGear_u_g3_field_set_cabbage: milgp_u_g3_field_set_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set (Cabbage)";
		uniformClass="RSFGear_u_g3_field_set_cabbage";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_cab_co.paa", //these textures have a -30 saturation, -20 brightness for the final textures. (this is not in the original PS file
			"addons\RSF_Uniforms\textures\u_g3_field_pants_cab_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		
	};
	class milgp_u_g3_field_set_rolled_atacsfg;
	class RSFGear_u_g3_field_set_rolled_cabbage: milgp_u_g3_field_set_rolled_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set Rolled (Cabbage)";
		uniformClass="RSFGear_u_g3_field_set_rolled_cabbage";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_cab_co.paa",
			"addons\RSF_Uniforms\textures\u_g3_field_pants_cab_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class RSFGear_u_g3_field_set_cabbagea: milgp_u_g3_field_set_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set (Cabbage Arid)";
		uniformClass="RSFGear_u_g3_field_set_cabbagea";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_caba_co.paa", 
			"addons\RSF_Uniforms\textures\u_g3_field_pants_caba_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		
	};
	class RSFGear_u_g3_field_set_rolled_cabbagea: milgp_u_g3_field_set_rolled_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set Rolled (Cabbage Arid)";
		uniformClass="RSFGear_u_g3_field_set_rolled_cabbagea";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_caba_co.paa",
			"addons\RSF_Uniforms\textures\u_g3_field_pants_caba_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class RSFGear_u_g3_field_set_takur: milgp_u_g3_field_set_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set (Takur)";
		uniformClass="RSFGear_u_g3_field_set_takur";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_tkg_co.paa",
			"addons\RSF_Uniforms\textures\u_g3_field_pants_tkg_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		
	};
	class RSFGear_u_g3_field_set_rolled_takur: milgp_u_g3_field_set_rolled_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set Rolled (Takur)";
		uniformClass="RSFGear_u_g3_field_set_rolled_takur";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_tkg_co.paa",
			"addons\RSF_Uniforms\textures\u_g3_field_pants_tkg_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
		class RSFGear_u_g3_field_set_gcam: milgp_u_g3_field_set_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set (GCam)";
		uniformClass="RSFGear_u_g3_field_set_gcam";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_gcam_co.paa",
			"addons\RSF_Uniforms\textures\u_g3_field_pants_gcam_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		
	};
	class RSFGear_u_g3_field_set_rolled_gcam: milgp_u_g3_field_set_rolled_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set Rolled (Gcam)";
		uniformClass="RSFGear_u_g3_field_set_rolled_gcam";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_gcam_co.paa",
			"addons\RSF_Uniforms\textures\u_g3_field_pants_gcam_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
		class RSFGear_u_g3_field_set_gcn: milgp_u_g3_field_set_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set (GCam Night)";
		uniformClass="RSFGear_u_g3_field_set_gcn";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_gcn_co.paa",
			"addons\RSF_Uniforms\textures\u_g3_field_pants_gcn_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		
	};
	class RSFGear_u_g3_field_set_rolled_gcn: milgp_u_g3_field_set_rolled_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man G3 Field Set Rolled (Gcam Night)";
		uniformClass="RSFGear_u_g3_field_set_rolled_gcn";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"addons\RSF_Uniforms\textures\u_g3_field_shirt_gcn_co.paa",
			"addons\RSF_Uniforms\textures\u_g3_field_pants_gcn_co.paa",
			"addons\RSF_Uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
};

class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
    class RSFGear_u_g3_field_set_cabbage: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set (Cabbage)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_cabbage";
			containerClass="Supply50";
			mass=40;
		};
	};
    class RSFGear_u_g3_field_set_rolled_cabbage: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set Rolled (Cabbage)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_rolled_cabbage";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_g3_field_set_cabbagea: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set (Cabbage Arid)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_cabbagea";
			containerClass="Supply50";
			mass=40;
		};
	};
    class RSFGear_u_g3_field_set_rolled_cabbagea: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set Rolled (Cabbage Arid)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_rolled_cabbagea";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_g3_field_set_takur: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set (Takur)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_takur";
			containerClass="Supply50";
			mass=40;
		};
	};
    class RSFGear_u_g3_field_set_rolled_takur: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set Rolled (Takur)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_rolled_takur";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_g3_field_set_gcam: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set (GCam)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_gcam";
			containerClass="Supply50";
			mass=40;
		};
	};
    class RSFGear_u_g3_field_set_rolled_gcam: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set Rolled (GCam)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_rolled_gcam";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_g3_field_set_gcn: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set (GCam Night)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_gcn";
			containerClass="Supply50";
			mass=40;
		};
	};
    class RSFGear_u_g3_field_set_rolled_gcn: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="G3 Field Set Rolled (GCam Night)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_rolled_gcn";
			containerClass="Supply50";
			mass=40;
		};
	};
};