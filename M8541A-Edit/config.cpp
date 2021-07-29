class CfgPatches
{
	class Switchable_M8541a_PVS27
	{
		units[]={};
		weapons[]=
		{
			"RHSUSAF_M8541A_switchable_anpvs"
		};
		requiredVersion=0.1;
		requiredAddons[]={"rhsusf_c_weapons"};
		author = "Carl";
	};
};
class cfgWeapons
{
	class ItemCore;
	class rhsusf_acc_sniper_base;
	class rhsusf_acc_LEUPOLDMK4_2;
	class rhsusf_acc_premier;
	class InventoryOpticsItem_Base_F;
	
////////////////////////////
////M854A Swtichable NV ////
////////////////////////////

	class RHSUSAF_M8541A_switchable_anpvs: rhsusf_acc_premier
	{
		author="CarlandRHS";
		displayName = "M8541A + Switchable AN/PVS-27";
		scope=2;
		model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\PVS27\PVS_27_M8451A";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
		opticType = 2;
		mass = 40;
		RMBhint = "Optical Sniper Sight + Night Vision Device";
		optics = 1;
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3";
			class OpticsModes
			{
			///! 3-15X MAGNIFICATION -> 0.25/3
			class pso1_nvg
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
 				discreteDistanceInitIndex = 1;
				opticsZoomMax = 0.25/3;
				opticsZoomMin = 0.25/15;
				opticsZoomInit = 0.25/3;
				discretefov[] = {0.25/3,0.25/6,0.25/9,0.25/12,0.25/15};
 				discreteInitIndex = 0;
 				modelOptics[] =
 				{
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot6",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot9",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot12",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot15"
 				};
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG","Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1800;
				cameraDir = "";
				};
			};
		};
	};
};

class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
			RHSUSAF_M8541A_switchable_anpvs=1;
	};
};