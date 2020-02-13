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
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Lush\u_g3_field_shirt_cab_co.paa", //these textures have a -30 saturation, -20 brightness for the final textures. (this is not in the original PS file
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Lush\u_g3_field_pants_cab_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
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
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Lush\u_g3_field_shirt_cab_co.paa", 
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Lush\u_g3_field_pants_cab_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
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
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Arid\u_g3_field_shirt_caba_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Arid\u_g3_field_pants_caba_co.paa",
			"milgp_uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
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
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Arid\u_g3_field_shirt_caba_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Arid\u_g3_field_pants_caba_co.paa",
			"milgp_uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
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
			"\Gear-Reskins\Uniform-Reskins\Takur\u_g3_field_shirt_tkg_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Takur\u_g3_field_pants_tkg_co.paa",
			"milgp_uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
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
			"\Gear-Reskins\Uniform-Reskins\Takur\u_g3_field_shirt_tkg_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Takur\u_g3_field_pants_tkg_co.paa",
			"milgp_uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
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
			"\Gear-Reskins\Uniform-Reskins\GCam\Regular\u_g3_field_shirt_gcam_co.paa",
			"\Gear-Reskins\Uniform-Reskins\GCam\Regular\u_g3_field_pants_gcam_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
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
			"\Gear-Reskins\Uniform-Reskins\GCam\Regular\u_g3_field_shirt_gcam_co.paa",
			"\Gear-Reskins\Uniform-Reskins\GCam\Regular\u_g3_field_pants_gcam_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
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
			"\Gear-Reskins\Uniform-Reskins\GCam\Night\u_g3_field_shirt_gcn_co.paa",
			"\Gear-Reskins\Uniform-Reskins\GCam\Night\u_g3_field_pants_gcn_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
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
			"\Gear-Reskins\Uniform-Reskins\GCam\Night\u_g3_field_shirt_gcn_co.paa",
			"\Gear-Reskins\Uniform-Reskins\GCam\Night\u_g3_field_pants_gcn_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_g3_field_set_sld: milgp_u_g3_field_set_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik + Teslin";
		displayName="Man G3 Field Set (Sørland)";
		uniformClass="RSFGear_u_g3_field_set_sld";
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
			"\Gear-Reskins\Uniform-Reskins\sld\u_g3_field_shirt_sld_co.paa",
			"\Gear-Reskins\Uniform-Reskins\sld\u_g3_field_pants_sld_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
	};
	class RSFGear_u_g3_field_set_rolled_sld: milgp_u_g3_field_set_rolled_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik + Teslin";
		displayName="Man G3 Field Set Rolled (Sørland)";
		uniformClass="RSFGear_u_g3_field_set_rolled_sld";
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
			"\Gear-Reskins\Uniform-Reskins\sld\u_g3_field_shirt_sld_co.paa",
			"\Gear-Reskins\Uniform-Reskins\sld\u_g3_field_pants_sld_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
	};
	class RSFGear_u_g3_field_set_spw: milgp_u_g3_field_set_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik + Sepsi";
		displayName="Man G3 Field Set (Specksi Winter)";
		uniformClass="RSFGear_u_g3_field_set_spw";
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
			"\Gear-Reskins\Uniform-Reskins\Specksi_Winter\u_g3_field_shirt_spw_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Specksi_Winter\u_g3_field_pants_spw_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
	};
	class RSFGear_u_g3_field_set_rolled_spw: milgp_u_g3_field_set_rolled_atacsfg
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik + Sepsi";
		displayName="Man G3 Field Set Rolled (Specksi Winter)";
		uniformClass="RSFGear_u_g3_field_set_rolled_spw";
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
			"\Gear-Reskins\Uniform-Reskins\Specksi_Winter\u_g3_field_shirt_spw_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Specksi_Winter\u_g3_field_pants_spw_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
	};
	class milgp_u_fleece_grey_g3_field_pants_3CD;
	class RSFGear_u_fleece_rgr_g3_field_pants_cab: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (RGR/CAB)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_cab";
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
			"milgp_uniforms\textures\u_fleece_rgr_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Lush\u_g3_field_pants_cab_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_rgr_g3_field_pants_gcam: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (RGR/GCAM)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_gcam";
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
			"milgp_uniforms\textures\u_fleece_rgr_co.paa",
			"\Gear-Reskins\Uniform-Reskins\GCam\Regular\u_g3_field_pants_gcam_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_rgr_g3_field_pants_sld: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik + Teslin";
		displayName="Man Fleece/G3 Field Pants (RGR/SLD)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_sld";
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
			"milgp_uniforms\textures\u_fleece_rgr_co.paa",
			"\Gear-Reskins\Uniform-Reskins\sld\u_g3_field_pants_sld_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";		
	};
	class RSFGear_u_fleece_khk_g3_field_pants_gcam: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (KHK/GCAM)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_khk_g3_field_pants_gcam";
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
			"milgp_uniforms\textures\u_fleece_khk_co.paa",
			"\Gear-Reskins\Uniform-Reskins\GCam\Regular\u_g3_field_pants_gcam_co.paa",
			"milgp_uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_khk_g3_field_pants_tkg: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (KHK/TKR)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_khk_g3_field_pants_tkg";
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
			"milgp_uniforms\textures\u_fleece_khk_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Takur\u_g3_field_pants_tkg_co.paa",
			"milgp_uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";	
	};
	class RSFGear_u_fleece_khk_g3_field_pants_caba: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (KHK/CABA)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_khk_g3_field_pants_caba";
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
			"milgp_uniforms\textures\u_fleece_khk_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Arid\u_g3_field_pants_caba_co.paa",
			"milgp_uniforms\textures\u_equipment_khk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_rgr_g3_field_pants_caba: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (RGR/CABA)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_caba";
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
			"milgp_uniforms\textures\u_fleece_rgr_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Arid\u_g3_field_pants_caba_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_grey_g3_field_pants_caba: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (GRY/CABA)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_grey_g3_field_pants_caba";
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
			"milgp_uniforms\textures\u_fleece_grey_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Arid\u_g3_field_pants_caba_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_grey_g3_field_pants_cab: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (GRY/CAB)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_grey_g3_field_pants_cab";
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
			"milgp_uniforms\textures\u_fleece_grey_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Cabbage\Lush\u_g3_field_pants_cab_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_grey_g3_field_pants_gcam: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (GRY/GCAM)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_grey_g3_field_pants_gcam";
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
			"milgp_uniforms\textures\u_fleece_grey_co.paa",
			"\Gear-Reskins\Uniform-Reskins\GCam\Regular\u_g3_field_pants_gcam_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_grey_g3_field_pants_tkg: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik";
		displayName="Man Fleece/G3 Field Pants (GRY/TKR)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_grey_g3_field_pants_tkg";
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
			"milgp_uniforms\textures\u_fleece_grey_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Takur\u_g3_field_pants_tkg_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_grey_g3_field_pants_sld: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik + Teslin";
		displayName="Man Fleece/G3 Field Pants (GRY/SLD)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_grey_g3_field_pants_sld";
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
			"milgp_uniforms\textures\u_fleece_grey_co.paa",
			"\Gear-Reskins\Uniform-Reskins\sld\u_g3_field_pants_sld_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_grey_g3_field_pants_spw: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik + Sepsi";
		displayName="Man Fleece/G3 Field Pants (GRY/SPW)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_grey_g3_field_pants_spw";
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
			"milgp_uniforms\textures\u_fleece_grey_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Specksi_Winter\u_g3_field_pants_spw_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
	};
	class RSFGear_u_fleece_rgr_g3_field_pants_spw: milgp_u_fleece_grey_g3_field_pants_3CD
	{
		scope=1;
		faction="BLU_F";
		vehicleclass="RSFGear";
		author="Adacas + Vik + Sepsi";
		displayName="Man Fleece/G3 Field Pants (RGR/SPW)";
		model="\milgp_uniforms\models\u_fleece_g3_field_pants_base.p3d";
		uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_spw";
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
			"milgp_uniforms\textures\u_fleece_rgr_co.paa",
			"\Gear-Reskins\Uniform-Reskins\Specksi_Winter\u_g3_field_pants_spw_co.paa",
			"milgp_uniforms\textures\u_equipment_blk_co.paa"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		picture="\Gear-Reskins\Uniform-Reskins\Equipment\cabbage.paa";
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
	class RSFGear_u_g3_field_set_sld: Uniform_Base
	{
		author="Adacas + Vik + Teslin";
		scope=2;
		displayName="G3 Field Set (Sørland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_sld";
			containerClass="Supply50";
			mass=40;
		};
	};
    class RSFGear_u_g3_field_set_rolled_sld: Uniform_Base
	{
		author="Adacas + Vik + Teslin";
		scope=2;
		displayName="G3 Field Set Rolled (Sørland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_rolled_sld";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_g3_field_set_spw: Uniform_Base
	{
		author="Adacas + Vik + Sepsi";
		scope=2;
		displayName="G3 Field Set (Specksi Winter)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_spw";
			containerClass="Supply50";
			mass=40;
		};
	};
    class RSFGear_u_g3_field_set_rolled_spw: Uniform_Base
	{
		author="Adacas + Vik + Sepsi";
		scope=2;
		displayName="G3 Field Set Rolled (Specksi Winter)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_g3_field_set_rolled_spw";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_fleece_rgr_g3_field_pants_cab: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (RGR/CAB)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_cab";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_fleece_rgr_g3_field_pants_gcam: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (RGR/GCAM)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_gcam";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_fleece_rgr_g3_field_pants_sld: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (RGR/SLD)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_sld";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_fleece_khk_g3_field_pants_gcam: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (KHK/GCAM)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_khk_g3_field_pants_gcam";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_fleece_khk_g3_field_pants_tkg: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (KHK/TKR)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_khk_g3_field_pants_tkg";
			containerClass="Supply50";
			mass=40;
		};
	};
	class RSFGear_u_fleece_khk_g3_field_pants_caba: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (KHK/CABA)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_khk_g3_field_pants_caba";
			containerClass="Supply50";
			mass=40;
		};
	}
	class RSFGear_u_fleece_rgr_g3_field_pants_caba: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (RGR/CABA)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_caba";
			containerClass="Supply50";
			mass=40;
		};
	}	
	class RSFGear_u_fleece_grey_g3_field_pants_caba: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (GRY/CABA)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_grey_g3_field_pants_caba";
			containerClass="Supply50";
			mass=40;
		};
	}	
	class RSFGear_u_fleece_grey_g3_field_pants_cab: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (GRY/CAB)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_grey_g3_field_pants_cab";
			containerClass="Supply50";
			mass=40;
		};
	}	
	class RSFGear_u_fleece_grey_g3_field_pants_gcam: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (GRY/GCAM)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_grey_g3_field_pants_GCAM";
			containerClass="Supply50";
			mass=40;
		};
	}	
	class RSFGear_u_fleece_grey_g3_field_pants_tkg: Uniform_Base
	{
		author="Adacas + Vik";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (GRY/TKR)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_grey_g3_field_pants_tkg";
			containerClass="Supply50";
			mass=40;
		};
	}	
	class RSFGear_u_fleece_grey_g3_field_pants_sld: Uniform_Base
	{
		author="Adacas + Vik + Teslin";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (GRY/SLD)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_grey_g3_field_pants_sld";
			containerClass="Supply50";
			mass=40;
		};
	}	
	class RSFGear_u_fleece_grey_g3_field_pants_spw: Uniform_Base
	{
		author="Adacas + Vik + Sepsi";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (GRY/SPW)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_grey_g3_field_pants_spw";
			containerClass="Supply50";
			mass=40;
		};
	}
	class RSFGear_u_fleece_rgr_g3_field_pants_spw: Uniform_Base
	{
		author="Adacas + Vik + Sepsi";
		scope=2;
		displayName="Man Fleece/G3 Field Pants (RGR/SPW)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"insignia",
			"clan"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RSFGear_u_fleece_rgr_g3_field_pants_spw";
			containerClass="Supply50";
			mass=40;
		};
	};
};