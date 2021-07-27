#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Gun_Flashlights
	{
		units[]={};
		weapons[]=
		{
			"Carls_LED_flashlight_Flood",
			"Carls_LED_flashlight_Beam",
			"Carls_LED_flashlight",
			"Carls_LED_flashlight_Flood_Red",
			"Carls_LED_flashlight_Beam_Red",
			"Carls_LED_flashlight_Red",
			"Carls_LLM_Flood",
			"Carls_LLM_Beam",
			"Carls_LLM_LASER",
			"Carls_LLM_irLASER"
		};
		requiredVersion=0.1;
		requiredAddons[]={ "bwa3_attachments" };
		author = "Carl";
		authorUrl="";
	};
};
class cfgWeapons
{
	class acc_flashlight;
	class InventoryFlashLightItem_Base_F;
	class acc_pointer_IR;
	class BWA3_acc_VarioRay_irlaser;
	class BWA3_acc_VarioRay_flash;
	class BWA3_acc_VarioRay_laser;
	
//////////////////////////////////
//////////Multimode LLM///////////
//////////////////////////////////	
	
	class Carls_LLM_Flood: BWA3_acc_VarioRay_irlaser
	{
		author="CarlandBWMOD";
		scope=1;
		displayName="Laser Light Module (Multi-Mode)";
		descriptionUse="Mode: White Flood. Ctrl+L to change Mode";
		descriptionShort="Mode: White Flood. Ctrl+L to change Mode";
		MRT_SwitchItemNextClass="Carls_LLM_Beam";
		MRT_SwitchItemPrevClass="Carls_LLM_irLASER";
		MRT_switchItemHintText="White Flood";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			RMBhint="LED Flashlight (Flood)";
			class FlashLight
			{
				ambient[]={0.58431,0.72940999,0.81568998};
				color[]={149,186,208};
				coneFadeCoef=12;
				dayLight=1;
				direction="flash";
				flareMaxDistance=300;
				flareSize=4;
				innerAngle=20;
				intensity=2600;
				outerAngle=120;
				position="flash dir";
				scale[]={0};
				size=1;
				useFlare=1;
				class Attenuation
				{
					constant=32;
					hardLimitEnd=100;
					hardLimitStart=1;
					linear=1;
					quadratic=0.2;
					start=0;
				};
			};
		};		
	};
	class Carls_LLM_Beam: Carls_LLM_Flood
	{
		author="CarlandBWMOD";
		scope=2;
		displayName="Laser Light Module (Multi-Mode)";
		descriptionUse="Mode: White Beam. Ctrl+L to change Mode";
		descriptionShort="Mode: White Beam. Ctrl+L to change Mode";
		MRT_SwitchItemNextClass="Carls_LLM_irLASER";
		MRT_SwitchItemPrevClass="Carls_LLM_Flood";
		MRT_switchItemHintText="White Beam";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			RMBhint="LED Flashlight (Beam)";
			class FlashLight
			{
				ambient[]={0.58431,0.72940999,0.81568998};
				color[]={149,186,208};
				dayLight=1;
				useFlare = 1;
				direction="flash";
				flareMaxDistance = 554;
				flareSize=4;
				innerAngle = 8;	
				outerAngle = 14;
				coneFadeCoef = 4;
				intensity=400;
				position="flash dir";
				scale[]={0};
				size=1;
				class Attenuation {
					start = 100;
					constant = 100;
					linear = 60;
					quadratic = 20;
					hardLimitStart = 50;
					hardLimitEnd = 300;
				};
			};
		};	
	};
	class Carls_LLM_irLASER: BWA3_acc_VarioRay_irlaser
	{
		author="CarlandBWMOD";
		scope=1;
		displayName="Laser Light Module (Multi-Mode)";
		descriptionUse="Mode: IR-Laser. Ctrl+L to change Mode";
		descriptionShort="Mode: IR-Laser. Ctrl+L to change Mode";
		MRT_SwitchItemNextClass="Carls_LLM_LASER";
		MRT_SwitchItemPrevClass="Carls_LLM_Beam";
		MRT_switchItemHintText="IR Laser";		
		mass = 6;
	};		
	class Carls_LLM_LASER: BWA3_acc_VarioRay_laser
	{
		author="CarlandBWMOD";
		scope=1;
		displayName="Laser Light Module (Multi-Mode)";
		descriptionUse="Mode: Visible Laser Dot. Ctrl+L to change Mode";
		descriptionShort="Mode: Visible Laser Dot. Ctrl+L to change Mode";
		MRT_SwitchItemNextClass="Carls_LLM_Flood";
		MRT_SwitchItemPrevClass="Carls_LLM_irLASER";
		MRT_switchItemHintText="Visible Laser Dot";
		mass = 6;
	};
/////////////////////////////////////////
//////////Multimode Flashlight///////////
/////////////////////////////////////////	
	
	class Carls_LED_flashlight_Beam: acc_flashlight
	{
		author="Carl";
		scope=1;
		displayName="Tactical LED Flashlight (Multi-Mode)";
		descriptionUse="Mode: Focused White Beam. Ctrl+L to change Mode";
		descriptionShort="Mode: Focused White Beam. Ctrl+L to change Mode";
		MRT_SwitchItemNextClass="Carls_LED_flashlight";
		MRT_SwitchItemPrevClass="Carls_LED_flashlight_Red";
		MRT_switchItemHintText="Focused White Beam";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			RMBhint="LED Flashlight (Beam)";
			class FlashLight
			{
				ambient[]={0.58431,0.72940999,0.81568998};
				color[]={149,186,208};
				dayLight=1;
				useFlare = 1;
				direction="flash";
				flareMaxDistance = 554;
				flareSize=4;
				innerAngle = 8;	
				outerAngle = 14;
				coneFadeCoef = 4;
				intensity=400;
				position="flash dir";
				scale[]={0};
				size=1;
				class Attenuation {
					start = 100;
					constant = 100;
					linear = 60;
					quadratic = 20;
					hardLimitStart = 50;
					hardLimitEnd = 300;
				};
			};
		};
	};
	class Carls_LED_flashlight: acc_flashlight
	{
		author="Carl";
		scope=2;
		displayName="Tactical LED Flashlight (Multi-Mode)";
		descriptionUse="Mode: White Light. Ctrl+L to change Mode";
		descriptionShort="Mode: White Light. Ctrl+L to change Mode";
		MRT_SwitchItemNextClass="Carls_LED_flashlight_Flood";
		MRT_SwitchItemPrevClass="Carls_LED_flashlight_Beam";
		MRT_switchItemHintText="Standard Spread";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			RMBhint="LED Flashlight";
			class FlashLight
			{
				ambient[]={0.58431,0.72940999,0.81568998};
				color[]={149,186,208};
				coneFadeCoef=10;
				dayLight=1;
				direction="flash";
				flareMaxDistance=300;
				flareSize=4;
				innerAngle=10;
				intensity=3000;
				outerAngle=80;
				position="flash dir";
				scale[]={0};
				size=1;
				useFlare=1;
				class Attenuation
				{
					constant=32;
					hardLimitEnd=155;
					hardLimitStart=25;
					linear=1;
					quadratic=0.050000001;
					start=0;
				};
			};
		};
	};
	class Carls_LED_flashlight_Flood: acc_flashlight
	{
		author="Carl";
		scope=1;
		displayName="Tactical LED Flashlight (Multi-Mode)";
		descriptionUse="Mode: White Floodlight. Ctrl+L to change Mode";
		descriptionShort="Mode: White Floodlight. Ctrl+L to change Mode";
		MRT_SwitchItemNextClass="Carls_LED_flashlight_Red";
		MRT_SwitchItemPrevClass="Carls_LED_flashlight";
		MRT_switchItemHintText="White Flood";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			RMBhint="LED Flashlight (Wide)";
			class FlashLight
			{
				ambient[]={0.58431,0.72940999,0.81568998};
				color[]={149,186,208};
				coneFadeCoef=11;
				dayLight=1;
				direction="flash";
				flareMaxDistance=300;
				flareSize=4;
				innerAngle=35;
				intensity=2000;
				outerAngle=140;
				position="flash dir";
				scale[]={0};
				size=1;
				useFlare=1;
				class Attenuation
				{
					constant=32;
					hardLimitEnd=100;
					hardLimitStart=1;
					linear=1;
					quadratic=0.2;
					start=0;
				};
			};
		};
	};
	class Carls_LED_flashlight_Red: acc_flashlight
	{
		author="Carl";
		scope=1;
		displayName="Tactical LED Flashlight (Multi-Mode)";
		descriptionUse="Mode: Red Light. Ctrl+L to change Mode";
		descriptionShort="Mode: Red Light. Ctrl+L to change Mode";
		MRT_SwitchItemNextClass="Carls_LED_flashlight_Beam";
		MRT_SwitchItemPrevClass="Carls_LED_flashlight_Flood";
		MRT_switchItemHintText="Red Light";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			RMBhint="LED Flashlight (Beam)";

			class FlashLight
			{
				ambient[]={0.58431,0.72940999,0.81568998};
				color[]={255,0,0};
				coneFadeCoef=10;
				dayLight=1;
				direction="flash";
				flareMaxDistance=300;
				flareSize=4;
				innerAngle=10;
				intensity=2000;
				outerAngle=80;
				position="flash dir";
				scale[]={0};
				size=1;
				useFlare=1;
				class Attenuation
				{
					constant=32;
					hardLimitEnd=155;
					hardLimitStart=25;
					linear=1;
					quadratic=0.050000001;
					start=0;
				};
			};
		};
	};
};

//////////////////////////////
//////////////RAILS///////////
//////////////////////////////


class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		Carls_LED_flashlight_Flood=1;
		Carls_LED_flashlight_Beam=1;
		Carls_LED_flashlight=1;
		Carls_LED_flashlight_Red=1;
		Carls_LLM_Flood=1;
		Carls_LLM_Beam=1;
		Carls_LLM_LASER=1;
		Carls_LLM_irLASER=1;
	};
};
class PointerSlot;
class PointerSlot_Rail: PointerSlot
{
	class compatibleItems
	{
		Carls_LED_flashlight_Flood=1;
		Carls_LED_flashlight_Beam=1;
		Carls_LED_flashlight=1;
		Carls_LED_flashlight_Flood_Red=1;
		Carls_LED_flashlight_Beam_Red=1;
		Carls_LED_flashlight_Red=1;
		Carls_LLM_Flood=1;
		Carls_LLM_Beam=1;
		Carls_LLM_LASER=1;
		Carls_LLM_irLASER=1;
	};
};
};
