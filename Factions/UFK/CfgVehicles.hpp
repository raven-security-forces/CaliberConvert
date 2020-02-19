class CfgVehicles {

    class rhs_zsu234_aa;
    class C_Offroad_01_F;
    class C_Quadbike_01_F;
    class C_Offroad_02_unarmed_F;
    class rhs_btr70_msv;
    class RHS_AGS30_TriPod_MSV;
    class rhs_SPG9M_MSV;
    class rhssaf_army_o_m252;
    class rhs_bmp2d_msv;
    class rhs_t72ba_tv;
    class rhs_t72bc_tv;
    class rhs_btr80a_msv;
    class rhs_bmp1p_msv;
    class RHS_Ural_MSV_01;
    class RHS_Ural_Fuel_VDV_01;
    class RHS_Ural_Repair_VDV_01;
    class RHS_Mi8mt_vvs;
    class RHS_Mi8MTV3_vvsc;
    class RHS_Mi24P_vvsc;
    class rhssaf_airforce_o_l_18;
    class RHS_Su25SM_vvsc;
    class I_C_Offroad_02_AT_F;
    class I_C_Offroad_02_LMG_F;
    class RHS_ZU23_MSV;
    class rhs_KORD_high_MSV;
    class LOP_IA_Offroad_M2;
    class LOP_IA_Offroad_AT;
    class rhs_tigr_3camo_msv;
    class rhs_tigr_sts_3camo_msv;
    class rhs_KORD_MSV;
	
	class Turrets;
	class MainTurret;
	class CargoTurret_01;
	class CargoTurret_02;
	class CargoTurret_03;
	class CargoTurret_04;
	class CargoTurret_05;
	class CargoTurret_06;
	class CargoTurret_07;	
	class CargoTurret_08;	
	class CargoTurret_09;		
	class CargoTurret_10;		
	class Commander_Out;
	class AT_Turret;
	class CommanderOptics;
	class CopilotTurret;
	class SideTurret; 
	class BackTurret;
	class FrontTurret;
	class Com_BMP1;
	class LMG_Turret;
	class M2_Turret;
	class AGS_Turret;
	class EventHandlers;
	class TransportMagazines;
	class TransportItems;
	
	// Backpack Config
	
	#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
	#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
	#define item_xx(a,b) class _xx_##a {name = a; count = b;}

	class B_Kitbag_cbr;
	class B_FieldPack_cbr;
	class B_AssaultPack_cbr;
	class B_LegStrapBag_black_F;
	class TFAR_rt1523g_sage;
	
	//Ammo Bearer Kitbag
	class B_Kitbag_cbr_UFK_Ammo : B_Kitbag_cbr
	{
		scope = 1;		
		class TransportMagazines 
		{
			mag_xx(rhs_30Rnd_762x39mm_bakelite,4);
			mag_xx(rhs_30Rnd_762x39mm,5);
			mag_xx(rhs_75Rnd_762x39mm,2);
			mag_xx(rhsgref_10Rnd_792x57_m76,4);
			mag_xx(rhs_mag_rgd5,2);
			mag_xx(rhs_mag_rdg2_white,3);				
		};
	};
	
	//Asst Machine Gunner Kitbag
	class B_Kitbag_cbr_UFK_AMG : B_Kitbag_cbr
	{
		scope = 1;		
		class TransportMagazines 
		{
			mag_xx(rhs_30Rnd_762x39mm,2);
			mag_xx(rhs_100Rnd_762x54mmR_7N13,3);
			mag_xx(rhs_mag_rgd5,2);
			mag_xx(rhs_mag_rdg2_white,3);			
		};
	};	
	
	//Autorifleman Fieldpack
	class B_FieldPack_cbr_UFK_AR : B_FieldPack_cbr
	{
		scope = 1;		
		class TransportMagazines 
		{
			mag_xx(rhs_75Rnd_762x39mm,5);
			mag_xx(rhs_30Rnd_762x39mm_polymer,2);			
		};
	};	
	
	//Crewman Leg Strap Bag
	class B_LegStrapBag_black_F_UFK_Crew : B_LegStrapBag_black_F
	{
		scope = 1;		
		class TransportItems
		{
			item_xx(ToolKit,1);			
		};
	};
	
	//Engineer Assaultpack
	class B_AssaultPack_cbr_UFK_Engi : B_AssaultPack_cbr
	{
		scope = 1;	
		class TransportItems
		{
			item_xx(ToolKit,1);	
			item_xx(ACE_wirecutter,1);				
		};		
		class TransportMagazines 
		{	
			mag_xx(rhs_30Rnd_762x39mm,3);	
			mag_xx(ACE_M14,3);				
		};
	};	
	
	//Explosive Specialist Assaultpack
	class B_AssaultPack_cbr_UFK_Expl: B_AssaultPack_cbr
	{
		scope = 1;	
		class TransportItems
		{
			item_xx(ACE_DefusalKit,1);
			item_xx(ACE_M26_Clacker,1);	
			item_xx(MineDetector,1);				
		};			
		class TransportMagazines 
		{
			mag_xx(rhsusf_mine_m14_mag,5);	
			mag_xx(DemoCharge_Remote_Mag,3);	
			mag_xx(rhs_mag_mine_ptm1,2);				
		};
	};		
	
	//Grenadier Assaultpack
	class B_AssaultPack_cbr_UFK_Grnd : B_AssaultPack_cbr
	{
		scope = 1;		
		class TransportMagazines 
		{
			mag_xx(rhs_VOG25P,5);
			mag_xx(rhs_GRD40_Red,3);	
			mag_xx(rhs_GRD40_Green,3);	
			mag_xx(rhs_GRD40_White,5);	
			mag_xx(rhs_30Rnd_762x39mm_bakelite,5);	
			mag_xx(rhs_VOG25,5);				
		};
	};	
	
	//Machine Gunner Fieldpack
	class B_FieldPack_cbr_UFK_MG : B_FieldPack_cbr
	{
		scope = 1;		
		class TransportMagazines 
		{
			mag_xx(rhs_100Rnd_762x54mmR_7N13,3);			
		};
	};	
	
	//Marksman Assault Pack
	class B_AssaultPack_cbr_UFK_Mark : B_AssaultPack_cbr
	{
		scope = 1;		
		class TransportMagazines 
		{
			mag_xx(rhsgref_10Rnd_792x57_m76,7);
			mag_xx(rhssaf_10Rnd_792x57_m76_tracer,7);
			mag_xx(rhs_30Rnd_762x39mm_bakelite,4);			
		};
	};	

	//Medic Kitbag
	class B_Kitbag_cbr_UFK_Medic: B_Kitbag_cbr
	{
		scope = 1;		
		class TransportItems
		{
			item_xx(ACE_fieldDressing,20);
			item_xx(ACE_elasticBandage,20);	
			item_xx(ACE_packingBandage,20);
			item_xx(ACE_quikclot,20);
			item_xx(ACE_bloodIV_500,8);
			item_xx(ACE_bloodIV_250,6);
			item_xx(ACE_morphine,6);
			item_xx(ACE_salineIV_500,4);
			item_xx(ACE_salineIV_250,4);
			item_xx(ACE_splint,8);
			item_xx(ACE_tourniquet,8);
			item_xx(ACE_plasmaIV_500,4);		
			item_xx(ACE_plasmaIV_250,4);
			item_xx(ACE_personalAidKit,1);
			item_xx(ACE_epinephrine,4);	
			item_xx(ACE_adenosine,4);				
		};
		class TransportMagazines
		{
			mag_xx(rhssaf_30Rnd_762x39mm_M67,1);			
		};
	};

	//AA Rifleman Fieldpack
	class B_FieldPack_cbr_UFK_AA: B_FieldPack_cbr
	{
		scope = 1;	
		class TransportMagazines 
		{
			mag_xx(rhs_mag_9k38_rocket,2);	
		};
	};	
	
	//AT Rifleman Fieldpack
	class B_FieldPack_cbr_UFK_AT : B_FieldPack_cbr
	{
		scope = 1;
		class TransportMagazines 
		{
			mag_xx(rhs_rpg7_PG7VL_mag,5);	
		};
	};
	
	//Sharpshooter Assaultpack
	class B_AssaultPack_cbr_UFK_Sniper : B_AssaultPack_cbr
	{
		scope = 1;
		class TransportItems
		{
			item_xx(ACE_SpottingScope,1);			
		};
		class TransportMagazines 
		{			
			mag_xx(rhs_10Rnd_762x54mmR_7N1,9);	
			mag_xx(rhs_30Rnd_762x39mm_bakelite,4);				
		};
	};	
	
	//Squadleader LR
	class TFAR_rt1523g_sage_UFK_SL : TFAR_rt1523g_sage
	{
		scope = 1;
		class TransportMagazines 
		{
			mag_xx(rhs_30Rnd_762x39mm,6);			
			mag_xx(rhssaf_mag_brd_m83_red,1);	
			mag_xx(rhs_mag_rgd5,1);				
		};
	};
	
	//Teamleader Assaultpack
	class B_AssaultPack_cbr_UFK_TL : B_AssaultPack_cbr
	{
		scope = 1;
		class TransportMagazines 
		{	
			mag_xx(rhs_VOG25P,5);	
			mag_xx(rhs_GRD40_Red,3);		
			mag_xx(rhs_GRD40_Green,3);	
			mag_xx(rhs_GRD40_White,5);	
			mag_xx(rhs_VOG25,5);	
			mag_xx(rhssaf_30Rnd_762x39mm_M67,5);			
		};
	};

	//Start of Class assignment Base Class
	class I_Soldier_base_F;
	class RSF_UFK_Infantry_Base : I_Soldier_base_F
	{
		_generalMacro="RSF_UFK_Infantry_Base";
		author="NeroTheHero111";
		editorPreview="\Factions\UFK\Factions\UFK\data\RSF_UFK_Rifleman.jpg";
		scope=1;
		dlc="RSF";
		side=1;
		faction="UFK";
		vehicleClass="Men";
		editorSubcategory = "EdSubcat_Personnel";
		displayName="Rifleman";
		accuracy=4.9000001;
		secondaryAmmoCoef=0.5;
		asr_ai_level=6;
		camouflage=1.2;
		identityTypes[]= 
		{
		"Head_African",
		"LanguageGRE_F",
		"G_GUERIL_default"};
		faceType="Man_A3";
		genericNames = "AfroMen";
		uniformClass="LOP_U_Fatigue_BDU_RACS_02";
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
		};
		respawnMagazines[]=
		{
		};
		headgearList[]=
		{
			"",0.1,
			"H_FakeHeadgear",0.1,		
			"LOP_H_6B27M_RACS",0.8,
			"LOP_H_6B27M_ess_RACS",0.8,
			"PO_H_PASGT_6CD",0.8,				
			"LOP_H_Booniehat_RACS",0.6,	
			"H_MilCap_gry",0.4,				
			"H_MilCap_blue",0.4,			
			"H_Bandanna_cbr",0.2,	
			"H_Bandanna_sand",0.2,			
			"H_Booniehat_khk_hs",0.2,					
			"H_Booniehat_khk",0.2,		
			"H_Cap_blk",0.2,		
			"H_Cap_blu",0.2,	
			"H_Cap_red",0.2,	
			"H_Cap_tan",0.2,		
		};
		class EventHandlers: EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
		backpack="";
	};	  
	
	class RSF_UFK_Ammo_Bearer : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Ammo_Bearer.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_akm","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		
		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		
        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};

        backpack = "B_Kitbag_cbr_UFK_Ammo";
	};
	
    class RSF_UFK_Asst_Machine_Gunner : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Asst_Machine_Gunner.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Machine Gunner";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_akm","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
	
        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

        backpack = "B_Kitbag_cbr_UFK_AMG";
    };	

	class RSF_UFK_Autorifleman : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Autorifleman.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m70b3n","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m70b3n","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
	
        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_75Rnd_762x39mm","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_75Rnd_762x39mm","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};

        backpack = "B_FieldPack_cbr_UFK_AR";
    };
	
	class RSF_UFK_Crewman : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Crewman.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "UFK";
		engineer = true;
		uniformClass="rhs_uniform_g3_blk";
        linkedItems[] = {"V_Chestrig_blk","H_Tank_black_F","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Chestrig_blk","H_Tank_black_F","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m92","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m92","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};	  
	
		backpack = "B_LegStrapBag_black_F_UFK_Crew";
		class EventHandlers: EventHandlers
		{
		init = "";
		};
	};	
	
	class B_UFK_Engineer_01 : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\B_UFK_Engineer_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "UFK";
		engineer = true;
		canDeactivateMines = true;  		
        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_akm","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};	
   
        backpack = "B_AssaultPack_cbr_UFK_Engi";
    };
	
	class RSF_UFK_Explosive_Specialist : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Explosive_Specialist.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "UFK";
		canDeactivateMines = true;   
        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m70b3n","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m70b3n","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};	
  
        backpack = "B_AssaultPack_cbr_UFK_Expl";
    };	
	
	class RSF_UFK_Grenadier : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Grenadier.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_VOG25P","rhs_VOG25P","rhs_VOG25P","rhs_VOG25P","rhs_VOG25P","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_VOG25P","rhs_VOG25P","rhs_VOG25P","rhs_VOG25P","rhs_VOG25P","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};
  
        backpack = "B_AssaultPack_cbr_UFK_Grnd";
    };
	
	class RSF_UFK_Heli_Pilot : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Heli_Pilot.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heli Pilot";
        side = 1;
        faction = "UFK";
		uniformClass="U_B_HeliPilotCoveralls";
        linkedItems[] = {"V_Rangemaster_belt","rhs_zsh7a_mike_green_alt","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Rangemaster_belt","rhs_zsh7a_mike_green_alt","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_aks74u","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};

        magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhssaf_mag_brd_m83_green"};
        respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhssaf_mag_brd_m83_green"};
		class EventHandlers: EventHandlers
		{
		init = "";
		};
    };

    class RSF_UFK_Jet_Pilot : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Jet_Pilot.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jet Pilot";
        side = 1;
        faction = "UFK";
		uniformClass="U_B_PilotCoveralls";
        linkedItems[] = {"rhs_zsh7a_alt","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_zsh7a_alt","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};

        magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhssaf_mag_brd_m83_green"};
        respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhssaf_mag_brd_m83_green"};
		class EventHandlers: EventHandlers
		{
		init = "";
		};
	};
	
    class RSF_UFK_Machine_Gunner : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Machine_Gunner.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_pkm","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
        respawnMagazines[] = {"rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
  
        backpack = "B_FieldPack_cbr_UFK_MG";
    };	
	
	class RSF_UFK_Marksman : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Marksman.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_m76_pso","Throw","Put","Binocular"};
        respawnWeapons[] = {"rhs_weap_m76_pso","Throw","Put","Binocular"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76"};
 
        backpack = "B_AssaultPack_cbr_UFK_Mark";
    };	
	
	class RSF_UFK_Medic : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Medic.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 1;
        faction = "UFK";
        attendant = 1;
        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m70b3n","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m70b3n","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};

        backpack = "B_Kitbag_cbr_UFK_Medic";
    };

	class RSF_UFK_Officer : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Officer.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"rhs_vest_commander","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_vest_commander","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhssaf_mag_brd_m83_green","rhssaf_mag_brd_m83_red"};
        respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhssaf_mag_brd_m83_green","rhssaf_mag_brd_m83_red"};
    };
	
    class RSF_UFK_Rifleman : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Rifleman.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_akm","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};	
    };
	
	class B_UFK_Rifleman_AA_01 : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\B_UFK_Rifleman_AA_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AA)";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_akms","rhs_weap_igla","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_akms","rhs_weap_igla","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_mag_9k38_rocket"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_mag_9k38_rocket"};
	
        backpack = "B_FieldPack_cbr_UFK_AA";
    };	
	
    class RSF_UFK_Rifleman_AT : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Rifleman_AT.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m70ab2","rhs_weap_rpg7_pgo","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m70ab2","rhs_weap_rpg7_pgo","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhs_rpg7_PG7VL_mag"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhs_rpg7_PG7VL_mag"};
	
        backpack = "B_FieldPack_cbr_UFK_AT";
    };

    class RSF_UFK_Rifleman_Unarmed : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Rifleman_Unarmed.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
   };

    class RSF_UFK_Sharpshooter : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Sharpshooter.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_svdp_pso1","Throw","Put","Binocular"};
        respawnWeapons[] = {"rhs_weap_svdp_pso1","Throw","Put","Binocular"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
 
        backpack = "B_AssaultPack_cbr_UFK_Sniper";
    };

    class RSF_UFK_Squad_Leader : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Squad_Leader.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m70b3n","Binocular","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m70b3n","Binocular","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhssaf_mag_brd_m83_green","rhssaf_mag_brd_m83_yellow"};
        respawnMagazines[] = {"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhssaf_mag_brd_m83_green","rhssaf_mag_brd_m83_yellow"};

        backpack = "TFAR_rt1523g_sage_UFK_SL";
    };

    class RSF_UFK_Team_Leader : RSF_UFK_Infantry_Base {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Team_Leader.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "UFK";

        linkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","PO_H_PASGT_6CD","ItemMap","TFAR_rf7800str","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m70b3n_pbg40","Binocular","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m70b3n_pbg40","Binocular","Throw","Put"};

		Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_EntrenchingTool"};

        magazines[] = {"rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhssaf_mag_brd_m83_green","rhssaf_mag_brd_m83_red","rhssaf_mag_brd_m83_yellow","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};
        respawnMagazines[] = {"rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhssaf_mag_brd_m83_green","rhssaf_mag_brd_m83_red","rhssaf_mag_brd_m83_yellow","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};

        backpack = "B_AssaultPack_cbr_UFK_TL";
    };

    class B_BUFK_ZSU_23_4V_01 : rhs_zsu234_aa {
        editorPreview = "\Factions\UFK\data\B_BUFK_ZSU_23_4V_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZSU-23-4V";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Crewman";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Crewman"; };
        };
    };

    class RSF_UFK_Offroad : C_Offroad_01_F {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Offroad.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };
    };

    class RSF_UFK_Quad_Bike : C_Quadbike_01_F {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Quad_Bike.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";
    };

    class RSF_UFK_Jeep_Wrangler : C_Offroad_02_unarmed_F {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Jeep_Wrangler.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };
    };

    class B_UFK_BTR_70_01 : rhs_btr70_msv {
        editorPreview = "\Factions\UFK\data\B_UFK_BTR_70_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-70";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Crewman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_1_sand_co.paa","rhsafrf\addons\rhs_btr70_camo\data\btr70_2_sand_co.paa","","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Crewman"; };
            class CommanderOptics : CommanderOptics { gunnerType = "RSF_UFK_Crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class Commander_Out : Commander_Out { gunnerType = ""; };
        };
    };

    class B_UFK_AGS_30_6P17_01 : RHS_AGS30_TriPod_MSV {
        editorPreview = "\Factions\UFK\data\B_UFK_AGS_30_6P17_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "AGS-30 (6P17)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Rifleman"; };
        };
    };

    class B_UFK_SPG_9M_01 : rhs_SPG9M_MSV {
        editorPreview = "\Factions\UFK\data\B_UFK_SPG_9M_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9M";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Rifleman"; };
        };
    };

    class B_UFK_M252_01 : rhssaf_army_o_m252 {
        editorPreview = "\Factions\UFK\data\B_UFK_M252_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "M252";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";
		editorSubcategory = "EdSubcat_Turrets";
		vehicleClass = "Static";		
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Rifleman"; };
        };
    };

    class RSF_UFK_BMP_2D : rhs_bmp2d_msv {
        editorPreview = "\Factions\UFK\data\RSF_UFK_BMP_2D.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-2D";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Crewman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class CargoTurret_10 : CargoTurret_10 { gunnerType = ""; };
        };
    };

    class RSF_UFK_T_72B_obr_1984g : rhs_t72ba_tv {
        editorPreview = "\Factions\UFK\data\RSF_UFK_T_72B_obr_1984g.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-72B (obr. 1984g.)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Crewman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Crewman"; };
        };
    };

    class RSF_UFK_T_72B_obr_1989g : rhs_t72bc_tv {
        editorPreview = "\Factions\UFK\data\RSF_UFK_T_72B_obr_1989g.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-72B (obr. 1989g.)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Crewman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Crewman"; };
        };
    };

    class B_UFK_BTR_80A_01 : rhs_btr80a_msv {
        editorPreview = "\Factions\UFK\data\B_UFK_BTR_80A_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-80A";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Crewman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Crewman"; };
            class CommanderOptics : CommanderOptics { gunnerType = "RSF_UFK_Crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class Commander_Out : Commander_Out { gunnerType = ""; };
        };
    };

    class RSF_UFK_BMP_1P : rhs_bmp1p_msv {
        editorPreview = "\Factions\UFK\data\RSF_UFK_BMP_1P.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-1P";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Crewman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Crewman"; };
            class Com_BMP1 : Com_BMP1 { gunnerType = "RSF_UFK_Crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class CargoTurret_10 : CargoTurret_10 { gunnerType = ""; };
        };
    };

    class RSF_UFK_Ural_4320 : RHS_Ural_MSV_01 {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Ural_4320.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural-4320";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_plachta_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };
    };

    class RSF_UFK_Ural_4320_Fuel : RHS_Ural_Fuel_VDV_01 {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Ural_4320_Fuel.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural-4320 (Fuel)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_fuel_sand_co.paa"};		
    };

    class RSF_UFK_Ural_4320_Repair : RHS_Ural_Repair_VDV_01 {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Ural_4320_Repair.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural-4320 (Repair)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};		
    };

    class RSF_UFK_Mi_8MT : RHS_Mi8mt_vvs {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Mi_8MT.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MT";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Heli_Pilot";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};
        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "RSF_UFK_Heli_Pilot"; };
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Heli_Pilot"; };
            class BackTurret : BackTurret { gunnerType = "RSF_UFK_Heli_Pilot"; };
        };
    };

    class RSF_UFK_Mi_8MTV_3 : RHS_Mi8MTV3_vvsc {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Mi_8MTV_3.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MTV-3";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Heli_Pilot";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};
        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "RSF_UFK_Heli_Pilot"; };
            class SideTurret : SideTurret { gunnerType = "RSF_UFK_Heli_Pilot"; };
            class BackTurret : BackTurret { gunnerType = "RSF_UFK_Heli_Pilot"; };
            class FrontTurret : FrontTurret { gunnerType = "RSF_UFK_Heli_Pilot"; };
        };
    };

    class RSF_UFK_Mi_24P : RHS_Mi24P_vvsc {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Mi_24P.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-24P";
        side = 1;
        faction = "UFK";
		hiddenSelections[] = {"camo1","camo2","exhaust","tail_decals","n1","n2","moving_map"};
		hiddenselectionstextures[] = {"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo3_co.paa","rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
        crew = "RSF_UFK_Heli_Pilot";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };
    };

    class RSF_UFK_L_18 : rhssaf_airforce_o_l_18 {
        editorPreview = "\Factions\UFK\data\RSF_UFK_L_18.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "L-18";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Jet_Pilot";
    };

    class RSF_UFK_SU_25 : RHS_Su25SM_vvsc {
        editorPreview = "\Factions\UFK\data\RSF_UFK_SU_25.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Su-25";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Jet_Pilot";
    };

    class RSF_UFK_Jeep_Wrangler_SPG_9 : I_C_Offroad_02_AT_F {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Jeep_Wrangler_SPG_9.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler (SPG-9)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "RSF_UFK_Rifleman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };
    };

    class RSF_UFK_Jeep_Wrangler_LMG : I_C_Offroad_02_LMG_F {
        editorPreview = "\Factions\UFK\data\RSF_UFK_Jeep_Wrangler_LMG.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler (LMG)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class LMG_Turret : LMG_Turret { gunnerType = "RSF_UFK_Rifleman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };
    };
	
    class B_UFK_ZU_23_2_01 : RHS_ZU23_MSV {
        editorPreview = "\Factions\UFK\data\B_UFK_ZU_23_2_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23-2";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Rifleman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "RSF_UFK_Rifleman"; };
        };
    };

    class B_UFK_KORD_6U16_01 : rhs_KORD_high_MSV {
        editorPreview = "\Factions\UFK\data\B_UFK_KORD_6U16_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "KORD (6U16)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Rifleman"; };
        };
    };

    class B_UFK_Offroad_M2_01 : LOP_IA_Offroad_M2 {
        editorPreview = "\Factions\UFK\data\B_UFK_Offroad_M2_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (M2)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "RSF_UFK_Rifleman"; };
        };
    };

    class B_UFK_Offroad_SPG_01 : LOP_IA_Offroad_AT {
        editorPreview = "\Factions\UFK\data\B_UFK_Offroad_SPG_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (SPG-9)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "RSF_UFK_Rifleman"; };
        };
    };

    class B_UFK_GAZ_233114_02 : rhs_tigr_3camo_msv {
        editorPreview = "\Factions\UFK\data\B_UFK_GAZ_233114_02.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "GAZ-233011";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";		
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };
    };

    class B_UFK_GAZ_233014_01 : rhs_tigr_sts_3camo_msv {
        editorPreview = "\Factions\UFK\data\B_UFK_GAZ_233014_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "GAZ-233014";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";		
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Rifleman"; };
            class AGS_Turret : AGS_Turret { gunnerType = ""; };
        };
    };

    class B_UFK_KORD_6T7_01 : rhs_KORD_MSV {
        editorPreview = "\Factions\UFK\data\B_UFK_KORD_6T7_01.jpg";
        author = "[Cpl] Nero";
        scope = 2;
        scopeCurator = 2;
        displayName = "KORD (6T7)";
        side = 1;
        faction = "UFK";
        crew = "RSF_UFK_Rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "RSF_UFK_Rifleman"; };
        };
	};	
};