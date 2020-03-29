class CfgPatches
{
	class RSFGear_facewear_cfg
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class cfgGlasses
{
	class None;
	class milgp_glasses_class: None
	{
		author="Adacas";
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=2;
	};
	
	//-------- RED ---------\\
	
	class RSFGear_f_face_shield_shemagh_red: milgp_glasses_class //Red FaceShield + Shemag 1
	{
		displayname="Face Shield + Shemagh (RED)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_red_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_red_co.paa"
		};
	};
	
	class RSFGear_f_face_shield_tactical_shemagh_red: milgp_glasses_class //Red FaceShield + Shemag (Tactical) 2
	{
		displayname="Face Shield + Tactical/Shemagh(RED)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_red_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_red_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_goggles_shemagh_red: milgp_glasses_class //Red FaceShield + Shemag (ESS) 3
	{
		displayname="Face Shield + Goggles/Shemagh (RED)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_red_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_red_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_shades_shemagh_red: milgp_glasses_class //Red FaceShield + Shemag (Shades) 4
	{
		displayname="Face Shield + Shades/Shemagh (RED)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_red_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_red_co.paa"
		};
	};
	
	class milgp_f_face_shield_red: milgp_glasses_class //Red FaceShield 5
	{
		displayname="Face Shield (RED)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_red_co.paa"
		};
	};
	class milgp_f_face_shield_tactical_red: milgp_glasses_class //Red FaceShield (Tactical) 6
	{
		displayname="Face Shield + Tactical(RED)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_red_co.paa"
		};
	};
	class milgp_f_face_shield_goggles_red: milgp_glasses_class //Red FaceShield (ESS) 7
	{
		displayname="Face Shield + Goggles (RED)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_red_co.paa"
		};
	};
	class milgp_f_face_shield_shades_red: milgp_glasses_class //Red FaceShield (Shades) 8
	{
		displayname="Face Shield + Shades (RED)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_red_co.paa"
		};
	};
	
	//-------- WHITE ---------\\
	

	class RSFGear_f_face_shield_shemagh_white: milgp_glasses_class //White FaceShield + Shemag
	{
		displayname="Face Shield + Shemagh (WHT)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_whi_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_whi_co.paa"
		};
	};
	
	
	
	class RSFGear_f_face_shield_goggles_shemagh_white: milgp_glasses_class  
	{
		displayname="Face Shield + Goggles/Shemagh (WHT)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_whi_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_whi_co.paa"
		};
	};
	
	class RSFGear_f_face_shield_shades_shemagh_white: milgp_glasses_class 
	{
		displayname="Face Shield + Shades/Shemagh (WHT)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_whi_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_whi_co.paa"
		};
	};
	
	class milgp_f_face_shield_white: milgp_glasses_class
	{
		displayname="Face Shield (WHT)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_whi_co.paa"
		};
	};
	class milgp_f_face_shield_tactical_white: milgp_glasses_class
	{
		displayname="Face Shield + Tactical(WHT)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_whi_co.paa"
		};
	};
	class milgp_f_face_shield_goggles_white: milgp_glasses_class
	{
		displayname="Face Shield + Goggles (WHT)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_whi_co.paa"
		};
	};
	class milgp_f_face_shield_shades_white: milgp_glasses_class
	{
		displayname="Face Shield + Shades (WHT)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_whi_co.paa"
		};
	};
	
	
		//-------- BLUE ---------\\
	
	
	class RSFGear_f_face_shield_shemagh_blue: milgp_glasses_class //Blue FaceShield + Shemag 1
	{
		displayname="Face Shield + Shemagh (BLUE)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_blu_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_blu_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_goggles_shemagh_blue: milgp_glasses_class 
	{
		displayname="Face Shield + Goggles/Shemagh (BLUE)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_blu_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_blu_co.paa"
		};
	};
	
	class RSFGear_f_face_shield_tactical_shemagh_blue: milgp_glasses_class 
	{
		displayname="Face Shield + Tactical/Shemagh (BLUE)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_blu_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_blu_co.paa"
		};
	};
		
	class RSFGear_f_face_shield_shades_shemagh_blue: milgp_glasses_class 
	{
		displayname="Face Shield + Shades/Shemagh (BLUE)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_blu_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_blu_co.paa"
		};
	};
	
		class milgp_f_face_shield_blue: milgp_glasses_class
	{
		displayname="Face Shield (BLUE)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_blu_co.paa"
		};
	};
	
	class milgp_f_face_shield_tactical_blue: milgp_glasses_class
	{
		displayname="Face Shield + Tactical(BLUE)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_blu_co.paa"
		};
	};
	
	class milgp_f_face_shield_goggles_blue: milgp_glasses_class
	{
		displayname="Face Shield + Goggles (BLUE)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_blu_co.paa"
		};
	};
	
	class milgp_f_face_shield_shades_blue: milgp_glasses_class
	{
		displayname="Face Shield + Shades (BLUE)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_blu_co.paa"
		};
	};
	

	
		//-------- PURPLE ---------\\
	
	
	class RSFGear_f_face_shield_shemagh_purple: milgp_glasses_class //Purple FaceShield + Shemag
	{
		displayname="Face Shield + Shemagh (PUR)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_pur_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_pur_co.paa"
		};
	};

	class RSFGear_f_face_shield_tactical_shemagh_purple: milgp_glasses_class //Purple FaceShield + Shemag (ESS) 
	{
		displayname="Face Shield + Tactical/Shemagh (PUR)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_pur_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_pur_co.paa"
		};
	};
	
	class RSFGear_f_face_shield_goggles_shemagh_purple: milgp_glasses_class 
	{
		displayname="Face Shield + Goggles/Shemagh (PUR)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_pur_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_pur_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_shades_shemagh_purple: milgp_glasses_class 
	{
		displayname="Face Shield + Shades/Shemagh (PUR)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_pur_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_pur_co.paa"
		};
	};
	
		class milgp_f_face_shield_purple: milgp_glasses_class
	{
		displayname="Face Shield (PUR)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_pur_co.paa"
		};
	};
	class milgp_f_face_shield_tactical_purple: milgp_glasses_class
	{
		displayname="Face Shield + Tactical(PUR)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_pur_co.paa"
		};
	};
	class milgp_f_face_shield_goggles_purple: milgp_glasses_class
	{
		displayname="Face Shield + Goggles (PUR)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_pur_co.paa"
		};
	};
	class milgp_f_face_shield_shades_purple: milgp_glasses_class
	{
		displayname="Face Shield + Shades (PUR)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_pur_co.paa"
		};
	};
	

		//-------- GREEN ---------\\
	
	
	class RSFGear_f_face_shield_shemagh_green: milgp_glasses_class //Green FaceShield + Shemag
	{
		displayname="Face Shield + Shemagh (GRN)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gre_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_gre_co.paa"
		};
	};
	
	class RSFGear_f_face_shield_tactical_shemagh_green: milgp_glasses_class 
	{
		displayname="Face Shield + Tactical/Shemagh(GRN)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gre_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_gre_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_goggles_shemagh_green: milgp_glasses_class 
	{
		displayname="Face Shield + Goggles/Shemagh (GRN)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gre_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_gre_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_shades_shemagh_green: milgp_glasses_class 
	{
		displayname="Face Shield + Shades/Shemagh (GRN)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gre_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_gre_co.paa"
		};
	};
	
		class milgp_f_face_shield_green: milgp_glasses_class
	{
		displayname="Face Shield (GRN)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gre_co.paa"
		};
	};
	class milgp_f_face_shield_tactical_green: milgp_glasses_class
	{
		displayname="Face Shield + Tactical(GRN)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gre_co.paa"
		};
	};
	class milgp_f_face_shield_goggles_green: milgp_glasses_class
	{
		displayname="Face Shield + Goggles (GRN)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gre_co.paa"
		};
	};
	class milgp_f_face_shield_shades_green: milgp_glasses_class
	{
		displayname="Face Shield + Shades (GRN)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gre_co.paa"
		};
	};
	
			//-------- YELLOW ---------\\
	
	
	class RSFGear_f_face_shield_shemagh_yellow: milgp_glasses_class //Yellow FaceShield + Shemag
	{
		displayname="Face Shield + Shemagh (YEL)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_yel_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_yel_co.paa"
		};
	};
	
	class RSFGear_f_face_shield_tactical_shemagh_yellow: milgp_glasses_class 
	{
		displayname="Face Shield + Tactical/Shemagh(YEL)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_yel_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_yel_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_goggles_shemagh_yellow: milgp_glasses_class 
	{
		displayname="Face Shield + Goggles/Shemagh (YEL)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_yel_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_yel_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_shades_shemagh_yellow: milgp_glasses_class
	{
		displayname="Face Shield + Shades/Shemagh (YEL)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_yel_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_yel_co.paa"
		};
	};
	
		class milgp_f_face_shield_yellow: milgp_glasses_class
	{
		displayname="Face Shield (YEL)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_yel_co.paa"
		};
	};
	class milgp_f_face_shield_tactical_yellow: milgp_glasses_class
	{
		displayname="Face Shield + Tactical(YEL)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_yel_co.paa"
		};
	};
	class milgp_f_face_shield_goggles_yellow: milgp_glasses_class
	{
		displayname="Face Shield + Goggles (YEL)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_yel_co.paa"
		};
	};
	class milgp_f_face_shield_shades_yellow: milgp_glasses_class
	{
		displayname="Face Shield + Shades (YEL)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_yel_co.paa"
		};
	};


			//-------- GCAM Night ---------\\
	
	
	class RSFGear_f_face_shield_shemagh_gcamnight: milgp_glasses_class //Gcam Night FaceShield + Shemag
	{
		displayname="Face Shield + Shemagh (GCam Night)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gni_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_gni_co.paa"
		};
	};
	
	
	
		class RSFGear_f_face_shield_tactical_shemagh_gcamnight: milgp_glasses_class //Gcam Night FaceShield + Shemag (Tactical)
	{
		displayname="Face Shield + Tactical/Shemagh(GCam Night)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gni_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_gni_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_goggles_shemagh_gcamnight: milgp_glasses_class //Gcam Night FaceShield + Shemag (ESS)
	{
		displayname="Face Shield + Goggles/Shemagh (GCam Night)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gni_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_gni_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_shades_shemagh_gcamnight: milgp_glasses_class //Gcam Night FaceShield + Shemag (Shades)
	{
		displayname="Face Shield + Shades/Shemagh (GCam Night)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gni_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_gni_co.paa"
		};
	};
	
		class milgp_f_face_shield_gcamnight: milgp_glasses_class
	{
		displayname="Face Shield (GCam Night)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gni_co.paa"
		};
	};
	class milgp_f_face_shield_tactical_gcamnight: milgp_glasses_class
	{
		displayname="Face Shield + Tactical(GCam Night)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gni_co.paa"
		};
	};
	class milgp_f_face_shield_goggles_gcamnight: milgp_glasses_class
	{
		displayname="Face Shield + Goggles (GCam Night)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gni_co.paa"
		};
	};
	class milgp_f_face_shield_shades_gcamnight: milgp_glasses_class
	{
		displayname="Face Shield + Shades (Gcam Night)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_gni_co.paa"
		};
	};
	
	
	//-------- SORLAND ---------\\
	
	
	
		class RSFGear_f_face_shield_shemagh_sorland2: milgp_glasses_class //Sorland FaceShield + Shemag
	{
		displayname="Face Shield + Shemagh (Sorland)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_sor_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_sor_co.paa"
		};
	};
	
		class RSFGear_f_face_shield_shemagh_sorland: milgp_glasses_class //Sorland FaceShield + Shemag
	{
		displayname="Face Shield + Shemagh (Sorland)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_sor_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_sor_co.paa"
		};
	};
	
	
	
		class RSFGear_f_face_shield_tactical_shemagh_sorland: milgp_glasses_class //Sorland FaceShield + Shemag (Tactical)
	{
		displayname="Face Shield + Tactical/Shemagh(Sorland)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Shades",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_sor_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_sor_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_goggles_shemagh_sorland: milgp_glasses_class //Sorland FaceShield + Shemag (ESS)
	{
		displayname="Face Shield + Goggles/Shemagh (Sorland)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_Shades",
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_sor_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_sor_co.paa"
		};
	};
	
	
	class RSFGear_f_face_shield_shades_shemagh_sorland: milgp_glasses_class //Sorland FaceShield + Shemag (Shades)
	{
		displayname="Face Shield + Shades/Shemagh (Sorland)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_Tactical",
			"_ESS"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_sor_co.paa",
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_shemagh_sor_co.paa"
		};
	};
	
	class milgp_f_face_shield_sorland: milgp_glasses_class
	{
		displayname="Face Shield (Sorland)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_sor_co.paa"
		};
	};
	class milgp_f_face_shield_tactical_sorland: milgp_glasses_class
	{
		displayname="Face Shield + Tactical(Sorland)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Shades",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_sor_co.paa"
		};
	};
	class milgp_f_face_shield_goggles_sorland: milgp_glasses_class
	{
		displayname="Face Shield + Goggles (Sorland)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_Shades",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_sor_co.paa"
		};
	};
	class milgp_f_face_shield_shades_sorland: milgp_glasses_class
	{
		displayname="Face Shield + Shades (Sorland)";
		scope=2;
		author="RSF";
		model="milgp_headgear\models\f_face_shield_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Tactical",
			"_ESS",
			"_Shemagh"
		};
		hiddenSelectionsTextures[]=
		{
			"\Gear-Reskins\Headgear-Reskins\Faceshields\Data\f_face_shield_sor_co.paa"
		};
	};
	
	
};



