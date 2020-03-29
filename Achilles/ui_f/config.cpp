class CfgPatches
{
	class achilles_ui_f
	{
		weapons[]={};
		requiredVersion=0.1;
		author="ArmA 3 Achilles Mod Inc.";
		authorUrl="https://github.com/ArmaAchilles/AresModAchillesExpansion";
		version="1.0.0";
		versionStr="1.0.0";
		versionAr[]={0,1,0};
		units[]={};
		requiredAddons[]=
		{
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Modules_F",
			"A3_Modules_F_Curator",
			"achilles_language_f",
			"achilles_functions_f_ares",
			"achilles_functions_f_achilles",
			"achilles_data_f_achilles",
			"achilles_data_f_ares",
			"achilles_settings_f"
		};
	};
};
class CfgFunctions
{
	class Achilles
	{
		class ui_f_init
		{
			file="\achilles\ui_f\functions\init";
			class onGameStarted;
		};
		class ui_f_eventHandler
		{
			file="\achilles\ui_f\functions\eventHandler";
			class AppendToModuleTree;
			class onDisplayCuratorLoad;
			class onDisplayCuratorUnload;
			class onModuleTreeLoad;
		};
		class ui_f_keyEvents
		{
			file="\achilles\ui_f\functions\keyEvents";
			class HandleCuratorKeyPressed;
			class HandleRemoteKeyPressed;
			class HandleMouseDoubleClicked;
			class HandleCuratorObjectPlaced;
			class HandleCuratorGroupPlaced;
			class HandleCuratorObjectEdited;
			class HandleCuratorObjectDeleted;
			class HandleCuratorWpPlaced;
		};
		class ui_f_common
		{
			file="\achilles\ui_f\functions\common";
			class SelectUnits;
			class sideTab;
		};
		class ui_f_dialogs
		{
			file="\achilles\ui_f\functions\dialogs";
			class RscDisplayAttributes_selectPlayers;
			class RscDisplayAttributes_CreateReinforcement;
			class RscDisplayAttributes_BuildingsDestroy;
			class RscDisplayAttributes_LockDoors;
			class RscDisplayAtttributes_SpawnEffect;
			class RscDisplayAttributes_editLigthSource;
			class RscDisplayAttributes_SpawnAdvancedComposition;
			class RscDisplayAttributes_manageAdvancedComposition;
			class RscDisplayAttributes_createAdvancedComposition;
			class RscDisplayAttributes_editAdvancedComposition;
			class RscDisplayAttributes_SpawnExplosives;
			class RscDisplayAttributes_Chatter;
			class RscDisplayAttributes_SpawnEmptyObject;
			class RscDisplayAttributes_selectAIUnits;
			class RscDisplayAttributes_editableObjects;
			class RscDisplayAttributes_SupplyDrop;
		};
		class ui_f_replacement
		{
			file="\achilles\ui_f\functions\replacement";
			class initCuratorAttribute;
		};
	};
	class Ares
	{
		class ui_f_dynamic
		{
			file="\achilles\ui_f\functions\dynamic";
			class ShowChooseDialog;
		};
	};
};
class IGUIBack;
class RscFrame;
class RscEdit;
class RscTitle;
class RscText;
class RscStructuredText;
class RscToolbox;
class RscCheckbox;
class RscCombo;
class RscListNBox;
class RscButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonImages;
class RscButtonSearch;
class RscSlider;
class RscXSliderH;
class ScrollBar;
class RscProgress;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscMapControl;
class RscActivePicture;
class RscPicture;
class RscTree;
class RscTreeSearch: RscTree
{
};
class ctrlDefault;
class ctrlDefaultText: ctrlDefault
{
};
class ctrlCombo: ctrlDefaultText
{
};
class ctrlEdit: ctrlDefaultText
{
};
class ctrlStatic: ctrlDefaultText
{
};
class ctrlStaticFrame: ctrlStatic
{
};
class ctrlStaticPicture: ctrlStatic
{
};
class ctrlXSliderV: ctrlDefault
{
};
class ctrlXSliderH: ctrlXSliderV
{
};
class ctrlControlsGroup: ctrlDefault
{
};
class ctrlControlsGroupNoScrollbars: ctrlControlsGroup
{
};
class RscAchillesXSliderH: RscXSliderH
{
	colorBackground[]={0,0,0,1};
};
class RscAchillesCombo: RscCombo
{
	h="1 * 	(0.04)";
	rowHeight="1.1 * 	(0.04)";
	wholeHeight="6.5 * 	(0.04)";
};
class RscAchillesEdit: RscEdit
{
	autocomplete="general";
	colorBackground[]={0,0,0,0};
};
class RscAchillesMessageEdit: RscAchillesEdit
{
	style=16;
	linespacing=1;
	default=1;
};
class RscAchillesScriptEdit: RscAchillesMessageEdit
{
	autocomplete="scripting";
};
class Ares_composition_Dialog
{
	idd=133799;
	movingEnable="true";
	class controls
	{
		class Ares_Title: RscText
		{
			idc=1000;
			moving=1;
			text="$STR_AMAE_ADVANCED_COMPOSITION";
			x="7.5 * 		(0.010 * safeZoneW) + 2 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="26 * 		(0.010 * safeZoneW) - 2 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.2 * 	(0.04))";
			sizeEx="(1.2 * 	(0.04))";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class Ares_Main_Background: IGUIBack
		{
			idc=2000;
			x="7.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="26 * 		(0.010 * safeZoneW)";
			h="20.5 * 		(0.022 * safeZoneH)";
			colorBackground[]={0.2,0.2,0.2,0.80000001};
		};
		class Ares_Dialog_Bottom_Bar: IGUIBack
		{
			idc=2010;
			x="8.5 * 		(0.010 * safeZoneW) + 6 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20.5 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="24 * 		(0.010 * safeZoneW) - 13 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorBackground[]={0,0,0,0.60000002};
		};
		class Ares_Cancle_Button: RscButtonMenuCancel
		{
			idc=3010;
			onButtonClick="uiNamespace setVariable ['Ares_Dialog_Result', -1]; closeDialog 2;";
			x="8 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20.5 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="6 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class RscButtonMenuOK: RscButtonMenuOK
		{
			idc=3000;
			onButtonClick="uiNamespace setVariable ['Ares_Dialog_Result', 1]; closeDialog 1;";
			text="$STR_AMAE_SPAWN";
			x="33 * 		(0.010 * safeZoneW) - 7 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20.5 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="7 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
		};
		class Ares_Background_Edit: IGUIBack
		{
			idc=2020;
			x="8 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="1 * 		(0.022 * safeZoneH) + 1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="25 * 		(0.010 * safeZoneW)";
			h="19 * 		(0.022 * safeZoneH) - 1.5 * 	(0.04)";
			colorBackground[]={0,0,0,0.60000002};
		};
		class Ares_Paragraph_edit: RscText
		{
			idc=1020;
			text="Select composition to edit or delete.";
			x="8 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="1 * 		(0.022 * safeZoneH) + 1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="25.5 * 		(0.010 * safeZoneW)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
		};
		class Ares_composition_tree: RscTree
		{
			idc=1400;
			expandOnDoubleclick=1;
			colorMarked[]={1,1,1,0.34999999};
			colorMarkedSelected[]={1,1,1,0.69999999};
			x="8.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="1 * 		(0.022 * safeZoneH) + 3 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="24 * 		(0.010 * safeZoneW)";
			h="18.5 * 		(0.022 * safeZoneH) - 3 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={0.5,0.5,0.5,1};
			colorBackground[]={0,0,0,0.5};
		};
		class Ares_Icon_Background: IGUIBack
		{
			idc=2020;
			x="7.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="2 * 	(0.025)";
			h="1.5 * 	(0.04)";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class Ares_Icon: RscPicture
		{
			idc=2030;
			text="\achilles\data_f_achilles\icons\icon_achilles_dialog.paa";
			x="7.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="2 * 	(0.025)";
			h="1.5 * 	(0.04)";
		};
		class Ares_Delete_Button: RscActivePicture
		{
			idc=3020;
			onButtonClick="([""DELETE_BUTTON""] + _this) call Achilles_fnc_RscDisplayAttributes_manageAdvancedComposition;";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
				0.090000004,
				1
			};
			text="a3\3den\Data\Displays\Display3DEN\PanelLeft\entityList_delete_ca.paa";
			x="33 * 		(0.010 * safeZoneW) - 2 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20.5 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="2 * 	(0.025)";
			h="1.5 * 	(0.04)";
		};
		class Ares_Edit_Button: Ares_Delete_Button
		{
			idc=3030;
			onButtonClick="([""EDIT_BUTTON""] + _this) call Achilles_fnc_RscDisplayAttributes_manageAdvancedComposition;";
			text="a3\3den\Data\Displays\Display3DEN\PanelRight\customcomposition_edit_ca.paa";
			x="33 * 		(0.010 * safeZoneW) - 4.5 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20.5 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="2 * 	(0.025)";
			h="1.5 * 	(0.04)";
		};
		class Ares_New_Button: Ares_Delete_Button
		{
			idc=3040;
			onButtonClick="([""NEW_BUTTON""] + _this) call Achilles_fnc_RscDisplayAttributes_manageAdvancedComposition;";
			text="a3\3den\Data\Displays\Display3DEN\PanelRight\customcomposition_add_ca.paa";
			x="33 * 		(0.010 * safeZoneW) - 7 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20.5 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="2 * 	(0.025)";
			h="1.5 * 	(0.04)";
		};
	};
};
class Ares_CopyPaste_Dialog
{
	idd=123;
	movingEnable="true";
	onLoad="((_this select 0) displayCtrl 1400) ctrlSetText (uiNamespace getVariable ['Ares_CopyPaste_Dialog_Text', '']);";
	onUnload="uiNamespace setVariable ['Ares_CopyPaste_Dialog_Text', ctrlText ((_this select 0) displayCtrl 1400)];";
	class controls
	{
		class Ares_Title: RscText
		{
			idc=1000;
			moving=1;
			text="$STR_AMAE_COPY_PASTE_DIALOG";
			x="2 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="40 * 		(0.010 * safeZoneW) - 2 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.2 * 	(0.04))";
			sizeEx="(1.2 * 	(0.04))";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class Ares_Main_Background: IGUIBack
		{
			idc=2000;
			x="0 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="40 * 		(0.010 * safeZoneW)";
			h="20.5 * 		(0.022 * safeZoneH)";
			colorBackground[]={0.2,0.2,0.2,0.80000001};
		};
		class Ares_Dialog_Bottom_Bar: IGUIBack
		{
			idc=2010;
			x="1 * 		(0.010 * safeZoneW) + 6 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="38 * 		(0.010 * safeZoneW) - 10 * 	(0.025)";
			h="1.5 * 	(0.04)";
			colorBackground[]={0,0,0,0.60000002};
		};
		class Ares_Ok_Button: RscButtonMenuOK
		{
			onButtonClick="uiNamespace setVariable ['Ares_CopyPaste_Dialog_Result', 1]; closeDialog 1;";
			idc=3000;
			x="39.5 * 		(0.010 * safeZoneW) - 4 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="4 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Ares_Cancle_Button: RscButtonMenuCancel
		{
			onButtonClick="uiNamespace setVariable ['Ares_CopyPaste_Dialog_Result', -1]; closeDialog 2;";
			idc=3010;
			x="0.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="6 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Ares_Background_Edit: IGUIBack
		{
			idc=2040;
			x="0.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="39 * 		(0.010 * safeZoneW)";
			h="19 * 		(0.022 * safeZoneH) - 1.5 * 	(0.04)";
			colorBackground[]={0,0,0,0.60000002};
		};
		class Ares_Paragraph_edit: RscText
		{
			idc=1020;
			text="$STR_AMAE_COPY_PASTE_CLIPBOARD_CONTENTS_USING_KEYS";
			x="1 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="39 * 		(0.010 * safeZoneW)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
		};
		class Ares_Edit: RscEdit
		{
			idc=1400;
			style=16;
			linespacing=1;
			default=1;
			autocomplete="scripting";
			x="1 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 3 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="38 * 		(0.010 * safeZoneW)";
			h="18.5 * 		(0.022 * safeZoneH) - 3 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={0.5,0.5,0.5,1};
			colorBackground[]={0,0,0,0.5};
		};
		class Ares_Icon_Background: IGUIBack
		{
			idc=2020;
			x="0 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="2 * 	(0.025)";
			h="1.5 * 	(0.04)";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class Ares_Icon: RscPicture
		{
			idc=2030;
			style=48;
			text="\achilles\data_f_achilles\icons\icon_achilles_dialog.paa";
			x="0.2 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.15 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="1.6 * 	(0.025)";
			h="1.2 * 	(0.04)";
		};
	};
};
class Ares_Dynamic_Dialog
{
	idd=133798;
	movingEnable="true";
	class controls
	{
		class Ares_Title: RscText
		{
			idc=1000;
			moving=1;
			text="Show Choose Dialog";
			x="2 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="40 * 		(0.010 * safeZoneW) - 2 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.2 * 	(0.04))";
			sizeEx="(1.2 * 	(0.04))";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class Ares_Main_Background: IGUIBack
		{
			idc=2000;
			x="0 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="40 * 		(0.010 * safeZoneW)";
			h="22.5 * 	(0.04)";
			colorBackground[]={0.2,0.2,0.2,0.80000001};
		};
		class Ares_Content: RscControlsGroup
		{
			idc=7000;
			x="0 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="1.9 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="40 * 		(0.010 * safeZoneW)";
			h="22.5 * 	(0.04)";
		};
		class Ares_Dialog_Bottom_Bar: IGUIBack
		{
			idc=2010;
			x="1 * 		(0.010 * safeZoneW) + 6 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="22 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="38 * 		(0.010 * safeZoneW) - 10 * 	(0.025)";
			h="1.5 * 	(0.04)";
			colorBackground[]={0,0,0,0.60000002};
		};
		class Ares_Ok_Button: RscButtonMenuOK
		{
			onButtonClick="uiNamespace setVariable ['Ares_ChooseDialog_Result', 1]; closeDialog 1;";
			idc=3000;
			x="39.5 * 		(0.010 * safeZoneW) - 4 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="22 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="4 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Ares_Cancle_Button: RscButtonMenuCancel
		{
			onButtonClick="uiNamespace setVariable ['Ares_ChooseDialog_Result', -1]; closeDialog 2;";
			idc=3010;
			x="0.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="22 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="6 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Ares_Icon_Background: IGUIBack
		{
			idc=2020;
			x="0 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="2 * 	(0.025)";
			h="1.5 * 	(0.04)";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class Ares_Icon: RscPicture
		{
			idc=2030;
			style=48;
			text="\achilles\data_f_achilles\icons\icon_achilles_dialog.paa";
			x="0.2 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.15 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="1.6 * 	(0.025)";
			h="1.2 * 	(0.04)";
		};
	};
};
class Ares_ExecuteCode_Dialog
{
	idd=123;
	movingEnable="true";
	onLoad="((_this select 0) displayCtrl 1400) ctrlSetText (profileNamespace getVariable ['Ares_ExecuteCode_Dialog_Text', '']);";
	onUnload="profileNamespace setVariable ['Ares_ExecuteCode_Dialog_Text', ctrlText ((_this select 0) displayCtrl 1400)];";
	class controls
	{
		class Ares_Title: RscText
		{
			idc=1000;
			moving=1;
			text="$STR_AMAE_EXECUTE_CODE";
			x="2 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="40 * 		(0.010 * safeZoneW) - 2 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.2 * 	(0.04))";
			sizeEx="(1.2 * 	(0.04))";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class Ares_Main_Background: IGUIBack
		{
			idc=2000;
			x="0 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="40 * 		(0.010 * safeZoneW)";
			h="22.5 * 		(0.022 * safeZoneH)";
			colorBackground[]={0.2,0.2,0.2,0.80000001};
		};
		class Ares_Dialog_Bottom_Bar: IGUIBack
		{
			idc=2010;
			x="1 * 		(0.010 * safeZoneW) + 6 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="22 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="38 * 		(0.010 * safeZoneW) - 10 * 	(0.025)";
			h="1.5 * 	(0.04)";
			colorBackground[]={0,0,0,0.60000002};
		};
		class Ares_Ok_Button: RscButtonMenuOK
		{
			onButtonClick="uiNamespace setVariable ['Ares_ExecuteCode_Dialog_Result', 1]; closeDialog 1;";
			idc=3000;
			x="39.5 * 		(0.010 * safeZoneW) - 4 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="22 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="4 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Ares_Cancle_Button: RscButtonMenuCancel
		{
			onButtonClick="uiNamespace setVariable ['Ares_ExecuteCode_Dialog_Result', -1]; closeDialog 2;";
			idc=3010;
			x="0.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="22 * 		(0.022 * safeZoneH) + 		(0.177 * safeZoneH + safeZoneY)";
			w="6 * 	(0.025)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Ares_Dialog_Paragraph_Combo: RscText
		{
			idc=1010;
			text="Mode:";
			x="0.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="20.5 * 		(0.022 * safeZoneH) - 1 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="39 * 		(0.010 * safeZoneW)";
			h="1 * 		(0.022 * safeZoneH) + 1 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorBackground[]={0,0,0,0.60000002};
		};
		class Ares_Dialog_Combo: RscCombo
		{
			onLBSelChanged="uiNamespace setVariable ['Ares_ExecuteCode_Dialog_Constraint', _this select 1];";
			idc=4000;
			x="16 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="21 * 		(0.022 * safeZoneH) - 1 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="22.5 * 		(0.010 * safeZoneW)";
			h="1 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorBackground[]={0,0,0,0.5};
		};
		class Ares_Background_Edit: IGUIBack
		{
			idc=2020;
			x="0.5 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="39 * 		(0.010 * safeZoneW)";
			h="19.5 * 		(0.022 * safeZoneH) - 2.5 * 	(0.04)";
			colorBackground[]={0,0,0,0.60000002};
		};
		class Ares_Paragraph_edit: RscText
		{
			idc=1020;
			text="$STR_AMAE_WRITE_OR_PASTE_CODE";
			x="1 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 1.5 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="39 * 		(0.010 * safeZoneW)";
			h="1.5 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
		};
		class Ares_Edit: RscEdit
		{
			idc=1400;
			style=16;
			linespacing=1;
			default=1;
			autocomplete="scripting";
			x="1 * 		(0.010 * safeZoneW) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.5 * 		(0.022 * safeZoneH) + 3 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="38 * 		(0.010 * safeZoneW)";
			h="19 * 		(0.022 * safeZoneH) - 4 * 	(0.04)";
			size="(1.0 * 	(0.04))";
			sizeEx="(1.0 * 	(0.04))";
			colorText[]={0.5,0.5,0.5,1};
			colorBackground[]={0,0,0,0.5};
		};
		class Ares_Icon_Background: IGUIBack
		{
			idc=2020;
			x="0 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="2 * 	(0.025)";
			h="1.5 * 	(0.04)";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class Ares_Icon: RscPicture
		{
			idc=2030;
			style=48;
			text="\achilles\data_f_achilles\icons\icon_achilles_dialog.paa";
			x="0.2 * 	(0.025) + 		(0.294 * safeZoneW + safeZoneX)";
			y="0.15 * 	(0.04) + 		(0.177 * safeZoneH + safeZoneY)";
			w="1.6 * 	(0.025)";
			h="1.2 * 	(0.04)";
		};
	};
};
class CfgScriptPaths
{
	AresDisplays="\achilles\ui_f\scripts\";
};
class RscDisplayCurator
{
	onLoad="[_this select 0] call Achilles_fnc_onDisplayCuratorLoad;";
	onUnload="[_this select 0] call Achilles_fnc_onDisplayCuratorUnload;";
};
class RscAttributeGroupID: RscControlsGroupNoScrollbars
{
};
class RscDisplayAttributes
{
	movingEnable="true";
	class Controls
	{
		class Title: RscText
		{
			moving=1;
		};
		class Background: RscText
		{
		};
		class ButtonOK: RscButtonMenuOK
		{
		};
		class ButtonCancel: RscButtonMenuCancel
		{
		};
		class ButtonCustom: RscButtonMenu
		{
		};
		class ButtonCustomLeft: RscButtonMenu
		{
			idc=30005;
			x="18.3 * 	(((safezoneW / safezoneH) min 1.2) / 40) + safezoneX + (safezoneW - 40 * 	(((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y="16.1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
			w="5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCustomLeftBelow: RscButtonMenu
		{
			idc=30006;
			x="18.3 * 	(((safezoneW / safezoneH) min 1.2) / 40) + safezoneX + (safezoneW - 40 * 	(((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y="17.2 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
			w="5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCustomBelow: RscButtonMenu
		{
			idc=30007;
			x="23.4 * 	(((safezoneW / safezoneH) min 1.2) / 40) + safezoneX + (safezoneW - 40 * 	(((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y="17.2 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
			w="5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCustomLeft2: RscButtonMenu
		{
			idc=30008;
			x="13.2 * 	(((safezoneW / safezoneH) min 1.2) / 40) + safezoneX + (safezoneW - 40 * 	(((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y="16.1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
			w="5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCustomLeftBelow2: RscButtonMenu
		{
			idc=30009;
			x="13.2 * 	(((safezoneW / safezoneH) min 1.2) / 40) + safezoneX + (safezoneW - 40 * 	(((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y="17.2 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
			w="5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Content: RscControlsGroup
		{
			class controls
			{
			};
		};
	};
};
class RscAttributeAmmo: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeAmmo','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
	idc=14775;
	x="7 * 	(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
	y="10 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
	w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
	h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class Title: RscText
		{
			idc=13475;
			text="$STR_AMAE_AMMO";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="10 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class Value: RscXSliderH
		{
			idc=14375;
			x="10.1 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="15.9 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscAttributeRank: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeRank','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeSkill: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeSkill','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeFuel: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeFuel','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeDamage: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeDamage','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeLock: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeLock','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeUnitPos: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeUnitPos','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeFormation: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeFormation','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeSpeedMode: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeSpeedMode','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeRespawnVehicle: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeRespawnVehicle','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeGroupID2: RscAttributeGroupID
{
	onSetFocus="[_this,'RscAttributeGroupID2','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeRespawnPosition: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeRespawnPosition','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
	class controls
	{
		class Title: RscText
		{
		};
		class Background: RscText
		{
		};
		class West: RscActivePicture
		{
		};
		class East: West
		{
		};
		class Guer: West
		{
		};
		class Civ: West
		{
		};
		class Disabled: West
		{
		};
	};
};
class RscAttributeName: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeName','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
	idc=119279;
	x="7 * 	(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
	y="10 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
	w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
	h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class Title: RscText
		{
			idc=117979;
			text="$STR_AMAE_NAME";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="10 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class Value: RscEdit
		{
			idc=118379;
			x="10.1 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="15.9 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscAttributeHeadlight: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeHeadlight','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
	idc=114725;
	x="7 * 	(((safezoneW / safezoneH) min 1.2) / 40) + safezoneX + (safezoneW - 40 * 	(((safezoneW / safezoneH) min 1.2) / 40)) / 2";
	y="10 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
	w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
	h="2.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class Title: RscText
		{
			idc=113427;
			text="$STR_AMAE_HEADLIGHT_SEARCHLIGHT";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="10 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="2.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class Background: RscText
		{
			style=2;
			idc=113425;
			x="10 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="16 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="2.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[]={1,1,1,0.5};
			colorBackground[]={1,1,1,0.1};
		};
		class HeadlightOn: RscActivePicture
		{
			idc=113627;
			text="achilles\data_f_achilles\icons\icon_headlightOn.paa";
			x="16 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_SWITCH_ON";
		};
		class HeadlightOff: HeadlightOn
		{
			idc=113630;
			text="achilles\data_f_achilles\icons\icon_headlightOff.paa";
			x="19.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_SWITCH_OFF";
		};
		class Default: HeadlightOn
		{
			idc=123470;
			text="\a3\ui_f_curator\Data\default_ca.paa";
			x="24 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_A3_RscAttributeUnitPos_Auto_tooltip";
		};
	};
};
class RscAttributeEngine: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeEngine','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
	idc=114726;
	x="7 * 	(((safezoneW / safezoneH) min 1.2) / 40) + safezoneX + (safezoneW - 40 * 	(((safezoneW / safezoneH) min 1.2) / 40)) / 2";
	y="10 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
	w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
	h="2.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class Title: RscText
		{
			idc=113427;
			text="$STR_AMAE_ENGINE";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="10 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="2.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class Background: RscText
		{
			style=2;
			idc=113426;
			x="10 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="16 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="2.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[]={1,1,1,0.5};
			colorBackground[]={1,1,1,0.1};
		};
		class EngineOn: RscActivePicture
		{
			idc=113628;
			text="achilles\data_f_achilles\icons\icon_engineOn.paa";
			x="16 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_SWITCH_ON";
		};
		class EngineOff: EngineOn
		{
			idc=113631;
			text="achilles\data_f_achilles\icons\icon_engineOff.paa";
			x="19.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_SWITCH_OFF";
		};
		class Default: EngineOn
		{
			idc=123471;
			text="\a3\ui_f_curator\Data\default_ca.paa";
			x="24 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_A3_RscAttributeUnitPos_Auto_tooltip";
		};
	};
};
class RscAttributeCombatMode: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeCombatMode','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
	idc=124569;
	x="7 * 	(((safezoneW / safezoneH) min 1.2) / 40) + safezoneX + (safezoneW - 40 * 	(((safezoneW / safezoneH) min 1.2) / 40)) / 2";
	y="10 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY + (safezoneH - 25 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
	w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
	h="2.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class Title: RscText
		{
			idc=123271;
			text="$STR_disp_arcwp_semaphore";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="10 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="2.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class Background: RscText
		{
			idc=123269;
			x="10 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="16 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="2.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={1,1,1,0.1};
		};
		class HoldFire: RscActivePicture
		{
			idc=123472;
			text="achilles\data_f_achilles\icons\icon_hold_fire.paa";
			x="11 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_HOLD_FIRE";
		};
		class HoldFireDefend: HoldFire
		{
			idc=123471;
			text="achilles\data_f_achilles\icons\icon_hold_fire_defend.paa";
			x="13.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_HOLD_FIRE_DEFEND";
		};
		class HoldFireEngage: HoldFire
		{
			idc=123474;
			text="achilles\data_f_achilles\icons\icon_hold_fire_engage.paa";
			x="16 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_HOLD_FIRE_ENGAGE";
		};
		class Fire: HoldFire
		{
			idc=123475;
			text="achilles\data_f_achilles\icons\icon_hold_fire.paa";
			x="18.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_FIRE_AT_WILL";
		};
		class FireEngage: HoldFire
		{
			idc=123469;
			text="achilles\data_f_achilles\icons\icon_hold_fire_engage.paa";
			x="21 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_FIRE_ENGAGE";
		};
		class Default: HoldFire
		{
			idc=123470;
			text="\a3\ui_f_curator\Data\default_ca.paa";
			x="24 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_combat_unchanged";
		};
	};
};
class RscAttributeBehaviour: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeBehaviour','AresDisplays'] call (uiNamespace getVariable 'Achilles_fnc_initCuratorAttribute')";
	class controls
	{
		class Title: RscText
		{
			text="$STR_AMAE_GROUP_BEHAVIOUR";
		};
		class Careless: RscActivePicture
		{
			idc=23472;
			text="achilles\data_f_achilles\icons\icon_careless.paa";
			x="11 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip="$STR_AMAE_CARELESS";
		};
	};
};
class RscAttributeOwners: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeOwners','AresDisplays'] call (uiNamespace getVariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeOwners2: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeOwners2','AresDisplays'] call (uiNamespace getVariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscAttributeExec: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeExec','AresDisplays'] call (uiNamespace getVariable 'Achilles_fnc_initCuratorAttribute')";
	adminOnly=0;
	codeExecution=1;
	class controls
	{
		class Title: RscText
		{
			text="$STR_3DEN_Object_AttributeCategory_Init";
		};
	};
};
class RscAttributeInventory: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,""RscAttributeInventory"",'AresDisplays'] call (uinamespace getvariable ""Achilles_fnc_initCuratorAttribute"")";
	h="29 * 	((safeZoneH / 1.81818) * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
	class controls
	{
		class ArrowLeft: RscButtonMenu
		{
			class Attributes
			{
				font="RobotoCondensed";
				color="#ffffff";
				align="center";
				shadow="false";
			};
			class TextPos
			{
				left=0;
				top=0;
				right=0;
				bottom=0;
			};
			idc=24468;
			text="-";
			size="2* 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx="2 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeExSecondary="2 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="-1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="1 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WeaponSpecificLabel: RscText
		{
			idc=24081;
			colorSelectBackground[]={1,1,1,0.25};
			shadow=0;
			text="";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="2 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonVA: ArrowLeft
		{
			idc=24470;
			text="Virtual Arsenal";
			size="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeExSecondary="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x="20 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="2 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="6 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class List: RscListNBox
		{
			columns[]={0.07,0.23,0.75999999,0.82999998};
			drawSideArrows=1;
			rowHeight="2 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idcLeft=24468;
			idcRight=24469;
			colorSelect2[]={0.94999999,0.94999999,0.94999999,1};
			colorSelectBackground[]={1,1,1,0.25};
			colorSelectBackground2[]={1,1,1,0.25};
			idc=24368;
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="3 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="29 * 	((safeZoneH / 1.81818) * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 4.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListBackground: RscText
		{
			h="29 * 	((safeZoneH / 1.81818) * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 3.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Load: RscProgress
		{
			y="29 * 	((safeZoneH / 1.81818) * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscDisplayAttributesInventory: RscDisplayAttributes
{
	scriptName="RscDisplayAttributesInventory";
	scriptPath="AresDisplays";
	onLoad="[""onLoad"",_this,""RscDisplayAttributesInventory"",'AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayAttributesInventory"",'AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
};
class RscAttributeCAS: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeCAS','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscDisplayAttributesMan: RscDisplayAttributes
{
	scriptName="RscDisplayAttributesMan";
	scriptPath="AresDisplays";
	onLoad="['onLoad',_this,'RscDisplayAttributesMan','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="['onUnload',_this,'RscDisplayAttributesMan','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{
		class Content: Content
		{
			class Controls: controls
			{
				delete Rank;
				delete UnitPos;
				delete Damage;
				delete Skill;
				delete RespawnPosition;
				delete Exec;
				class Name: RscAttributeName
				{
				};
				class Rank2: RscAttributeRank
				{
				};
				class UnitPos2: RscAttributeUnitPos
				{
				};
				class Damage2: RscAttributeDamage
				{
				};
				class Ammo: RscAttributeAmmo
				{
				};
				class Skill2: RscAttributeSkill
				{
				};
				class RespawnPosition2: RscAttributeRespawnPosition
				{
				};
				class Exec2: RscAttributeExec
				{
				};
			};
		};
		class ButtonBehaviour: ButtonCustom
		{
			text="$STR_AMAE_SKILL";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_changeSkills";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonCargo: ButtonCustomLeft
		{
			text="$STR_AMAE_ARSENAL";
			onMouseButtonClick="(findDisplay -1) closeDisplay 1; 								['Open',[true,nil,BIS_fnc_initCuratorAttributes_target]] call bis_fnc_arsenal; 								[BIS_fnc_initCuratorAttributes_target] spawn { 									waitUntil { sleep 1; isnull ( uinamespace getvariable 'RSCDisplayArsenal' ) }; 									params ['_template_unit']; 									_loadout = getUnitLoadout _template_unit; 									_curatorSelected = ['man'] call Achilles_fnc_getCuratorSelected; 									{_x setUnitLoadout _loadout} forEach _curatorSelected; 								}";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonFlag: ButtonCustomLeft2
		{
			text="$STR_AMAE_ACCESSORY";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_changeAccessoires";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
	};
};
class RscDisplayAttributesVehicle: RscDisplayAttributes
{
	scriptName="RscDisplayAttributesVehicle";
	scriptPath="AresDisplays";
	onLoad="['onLoad',_this,'RscDisplayAttributesVehicle','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="['onUnload',_this,'RscDisplayAttributesVehicle','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{
		class Content: Content
		{
			class Controls: controls
			{
				delete Skill;
				delete Lock;
				delete RespawnVehicle;
				delete RespawnPosition;
				delete Exec;
				class Ammo: RscAttributeAmmo
				{
				};
				class Skill2: RscAttributeSkill
				{
				};
				class Lock2: RscAttributeLock
				{
				};
				class Headlight: RscAttributeHeadlight
				{
				};
				class Engine: RscAttributeEngine
				{
				};
				class RespawnVehicle2: RscAttributeRespawnVehicle
				{
				};
				class RespawnPosition2: RscAttributeRespawnPosition
				{
				};
				class Exec2: RscAttributeExec
				{
				};
			};
		};
		class ButtonBehaviour: ButtonCustom
		{
			text="$STR_AMAE_GARAGE";
			onMouseButtonClick="(findDisplay -1) closeDisplay 1; 								 ['Open', [false, BIS_fnc_initCuratorAttributes_target]] call BIS_fnc_garage";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonCargo: ButtonCustomLeft
		{
			text="$STR_AMAE_CARGO";
			onMouseButtonClick="createdialog 'RscDisplayAttributesInventory'";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonAmmo: ButtonCustomLeftBelow
		{
			text="$STR_AMAE_LOADOUT";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_changePylonAmmo;";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonDamage: ButtonCustomBelow
		{
			text="$STR_AMAE_DAMAGE";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_damageComponents";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonSensors: ButtonCustomLeft2
		{
			text="$STR_AMAE_SENSORS";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_setSensors";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonFlag: ButtonCustomLeftBelow2
		{
			text="$STR_AMAE_ACCESSORY";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_changeAccessoires";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
	};
};
class RscDisplayAttributesVehicleEmpty: RscDisplayAttributes
{
	scriptName="RscDisplayAttributesVehicle";
	scriptPath="AresDisplays";
	onLoad="['onLoad',_this,'RscDisplayAttributesVehicle','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="['onUnload',_this,'RscDisplayAttributesVehicle','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{
		class Content: Content
		{
			class Controls: controls
			{
				delete Lock;
				delete RespawnVehicle;
				delete RespawnPosition;
				delete Exec;
				class Ammo: RscAttributeAmmo
				{
				};
				class Lock2: RscAttributeLock
				{
				};
				class Headlight: RscAttributeHeadlight
				{
				};
				class Engine: RscAttributeEngine
				{
				};
				class RespawnVehicle2: RscAttributeRespawnVehicle
				{
				};
				class RespawnPosition2: RscAttributeRespawnPosition
				{
				};
				class Exec2: RscAttributeExec
				{
				};
			};
		};
		class ButtonBehaviour: ButtonCustom
		{
			text="$STR_AMAE_GARAGE";
			onMouseButtonClick="(findDisplay -1) closeDisplay 1; 								 ['Open', [false, BIS_fnc_initCuratorAttributes_target]] call BIS_fnc_garage";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonCargo: ButtonCustomLeft
		{
			text="$STR_AMAE_CARGO";
			onMouseButtonClick="createDialog 'RscDisplayAttributesInventory'";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonAmmo: ButtonCustomLeftBelow
		{
			text="$STR_AMAE_LOADOUT";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_changePylonAmmo;";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonDamage: ButtonCustomBelow
		{
			text="$STR_AMAE_DAMAGE";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_damageComponents";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonSensors: ButtonCustomLeft2
		{
			text="$STR_AMAE_SENSORS";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_setSensors";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonFlag: ButtonCustomLeftBelow2
		{
			text="$STR_AMAE_ACCESSORY";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_changeAccessoires";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
	};
};
class RscDisplayAttributesGroup: RscDisplayAttributes
{
	scriptName="RscDisplayAttributesGroup";
	scriptPath="AresDisplays";
	onLoad="['onLoad',_this,'RscDisplayAttributesGroup','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="['onUnload',_this,'RscDisplayAttributesGroup','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{
		class Content: Content
		{
			class Controls: controls
			{
				delete GroupID;
				delete Skill;
				delete Formation;
				delete Behaviour;
				delete SpeedMode;
				delete UnitPos;
				delete RespawnPosition;
				class GroupID2: RscAttributeGroupID2
				{
				};
				class Skill2: RscAttributeSkill
				{
				};
				class Formation2: RscAttributeFormation
				{
				};
				class Behaviour2: RscAttributeBehaviour
				{
				};
				class CombatMode2: RscAttributeCombatMode
				{
				};
				class SpeedMode2: RscAttributeSpeedMode
				{
				};
				class UnitPos2: RscAttributeUnitPos
				{
				};
				class RespawnPosition2: RscAttributeRespawnPosition
				{
					class Controls: controls
					{
						class Title: Title
						{
							text="$STR_A3_RscAttributeRespawnPosition_TitleGroup";
						};
						class Background: Background
						{
						};
						class West: West
						{
						};
						class East: East
						{
						};
						class Guer: Guer
						{
						};
						class Civ: Civ
						{
						};
						class Disabled: Disabled
						{
						};
					};
				};
			};
		};
		class ButtonBehaviour: ButtonCustom
		{
			text="$STR_AMAE_SKILL";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_changeSkills";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
		class ButtonSide: ButtonCustomLeft
		{
			text="$STR_AMAE_SIDE";
			onMouseButtonClick="[BIS_fnc_initCuratorAttributes_target] spawn Achilles_fnc_changeSideAttribute";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
	};
};
class CfgCurator
{
	class DrawWaypoint
	{
		class 3D
		{
			texture="\a3\3den\Data\CfgWaypoints\move_ca.paa";
			textureCycle="\a3\3den\Data\CfgWaypoints\cycle_ca.paa";
			texturePreview="\a3\3den\Data\CfgWaypoints\move_ca.paa";
			colorNormal[]={0.5,1,0.5,0.69999999};
			colorCycleNormal[]={0.5,1,0.5,0.69999999};
		};
		class 2D
		{
			texture="\a3\3den\Data\CfgWaypoints\move_ca.paa";
			textureCycle="\a3\3den\Data\CfgWaypoints\cycle_ca.paa";
			texturePreview="\a3\3den\Data\CfgWaypoints\move_ca.paa";
		};
	};
};
class RscAttributeWaypointType: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeWaypointType','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
	h="8.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class Background: RscText
		{
			h="7.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value: RscToolbox
		{
			rows=6;
			columns=3;
			names[]=
			{
				"MOVE",
				"CYCLE",
				"SAD",
				"HOLD",
				"SENTRY",
				"configFile >> 'cfgWaypoints' >> 'Achilles' >> 'SearchBuilding'",
				"GETOUT",
				"UNLOAD",
				"TR UNLOAD",
				"configFile >> 'cfgWaypoints' >> 'Achilles' >> 'Land'",
				"configFile >> 'cfgWaypoints' >> 'Achilles' >> 'Fastroping'",
				"configFile >> 'cfgWaypoints' >> 'Achilles' >> 'Paradrop'",
				"HOOK",
				"UNHOOK",
				"configFile >> 'cfgWaypoints' >> 'Achilles' >> 'Repair'",
				"configFile >> 'cfgWaypoints' >> 'A3' >> 'Demine'"
			};
			strings[]=
			{
				"$STR_ac_move",
				"$STR_ac_cycle",
				"$STR_ac_seekanddestroy",
				"$STR_ac_hold",
				"$STR_ac_sentry",
				"$STR_AMAE_WP_SEARCH_BUILDING",
				"$STR_ac_getout",
				"$STR_ac_unload",
				"$STR_ac_transportunload",
				"$STR_A3_CfgWaypoints_Land",
				"$STR_AMAE_FASTROPING",
				"$STR_AMAE_PARADROP",
				"$STR_AMAE_LIFT_CLOSEST",
				"$STR_ac_unhook",
				"$STR_AMAE_WP_REPAIR",
				"$STR_A3_Functions_F_Orange_Demine"
			};
			h="7.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscAttributeWaypointTimeout: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeWaypointTimeout','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
};
class RscDisplayAttributesWaypoint: RscDisplayAttributes
{
	scriptName="RscDisplayAttributesWaypoint";
	scriptPath="AresDisplays";
	onLoad="['onLoad',_this,'RscDisplayAttributesWaypoint','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="['onUnload',_this,'RscDisplayAttributesWaypoint','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{
		class Content: Content
		{
			class Controls: controls
			{
				delete SpeedMode;
				class CombatMode: RscAttributeCombatMode
				{
				};
				class SpeedMode2: RscAttributeSpeedMode
				{
				};
			};
		};
	};
};
class RscAttributeDate: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,'RscAttributeDate','AresDisplays'] call (uinamespace getvariable 'Achilles_fnc_initCuratorAttribute')";
	idc=122438;
	x="7 * 	(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
	y="10 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - 25* 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
	w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
	h="12 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class Title1: RscText
		{
			idc=121138;
			text="$STR_3DEN_Environment_Attribute_Date_displayName";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="0 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class Background1: RscText
		{
			idc=121140;
			tooltip="$STR_3DEN_Environment_Attribute_Date_tooltip";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="4.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={1,1,1,0.1};
		};
		class ValueYear: ctrlCombo
		{
			idc=101;
			x="0.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="25 * 1/3 * 0.99 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorTextRight[]={1,1,1,0.60000002};
		};
		class ValueMonth: ValueYear
		{
			idc=102;
			x="(0.5 + 25 * 1/3) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			class Items
			{
				class Month1
				{
					text="$STR_3DEN_Attributes_Date_Month1_text";
					value=1;
				};
				class Month2
				{
					text="$STR_3DEN_Attributes_Date_Month2_text";
					value=2;
				};
				class Month3
				{
					text="$STR_3DEN_Attributes_Date_Month3_text";
					value=3;
				};
				class Month4
				{
					text="$STR_3DEN_Attributes_Date_Month4_text";
					value=4;
				};
				class Month5
				{
					text="$STR_3DEN_Attributes_Date_Month5_text";
					value=5;
				};
				class Month6
				{
					text="$STR_3DEN_Attributes_Date_Month6_text";
					value=6;
				};
				class Month7
				{
					text="$STR_3DEN_Attributes_Date_Month7_text";
					value=7;
					default=1;
				};
				class Month8
				{
					text="$STR_3DEN_Attributes_Date_Month8_text";
					value=8;
				};
				class Month9
				{
					text="$STR_3DEN_Attributes_Date_Month9_text";
					value=9;
				};
				class Month10
				{
					text="$STR_3DEN_Attributes_Date_Month10_text";
					value=10;
				};
				class Month11
				{
					text="$STR_3DEN_Attributes_Date_Month11_text";
					value=11;
				};
				class Month12
				{
					text="$STR_3DEN_Attributes_Date_Month12_text";
					value=12;
				};
			};
		};
		class ValueDay: ValueYear
		{
			idc=103;
			x="(0.5 + 25 * 2/3) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class Title2: RscText
		{
			idc=121139;
			text="$STR_3DEN_Environment_Attribute_Daytime_displayName";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="5.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.5};
		};
		class Background2: RscText
		{
			idc=121141;
			tooltip="$STR_3DEN_Environment_Attribute_Daytime_tooltip";
			x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="6.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="26 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="4.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={1,1,1,0.1};
		};
		class Preview: ctrlControlsGroupNoScrollbars
		{
			idc=110;
			x="(0.5 + 1.11) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="7 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="(25 * 2/3 - 2.22) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLoad="uinamespace setvariable ['AttributeSliderTimeDay_group',_this select 0];";
			class Controls
			{
				class PreviewNight1: ctrlStaticPicture
				{
					idc=111;
					text="\a3\3DEN\Data\Attributes\SliderTimeDay\night_ca.paa";
					colorText[]={1,1,1,0.60000002};
					x="0 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
					w="0.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
					h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PreviewNight2: PreviewNight1
				{
					idc=112;
				};
				class PreviewDay: PreviewNight1
				{
					idc=113;
					text="\a3\3DEN\Data\Attributes\SliderTimeDay\day_ca.paa";
				};
				class PreviewSunrise: PreviewNight1
				{
					idc=114;
					text="\a3\3DEN\Data\Attributes\SliderTimeDay\sunrise_ca.paa";
				};
				class PreviewSunset: PreviewNight1
				{
					idc=115;
					text="\a3\3DEN\Data\Attributes\SliderTimeDay\sunset_ca.paa";
				};
				class Sun: ctrlStaticPicture
				{
					idc=116;
					text="\a3\3DEN\Data\Attributes\SliderTimeDay\sun_ca.paa";
					colorText[]={1,1,1,0.60000002};
					x="(25 * 1/3 - 1.11 - 0.5) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
					w="1 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
					h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Value: ctrlXSliderH
		{
			idc=104;
			x="0.5 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="7 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="25 * 1/3 * 1.99 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sliderRange[]={0,1439};
			sliderPosition=0;
			lineSize=1;
			border="\a3\3DEN\Data\Attributes\SliderTimeDay\border_ca.paa";
			thumb="\a3\3DEN\Data\Attributes\SliderTimeDay\thumb_ca.paa";
			color[]={1,1,1,0.60000002};
			colorActive[]={1,1,1,1};
		};
		class Frame: ctrlStaticFrame
		{
			x="(0.5 + 25 * 2/3) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="7 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="25 * 1/9 * 2.99 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Separator: ctrlStatic
		{
			style=2;
			x="(0.5 + 25 * 2/3) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="7 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="25 * 1/9 * 2.99 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			font="EtelkaMonospacePro";
			colorBackground[]={0,0,0,0.5};
			text=":      :";
		};
		class Hour: ctrlEdit
		{
			idc=105;
			text="00";
			tooltip="$STR_3DEN_Attributes_SliderTime_Hour_tooltip";
			style="0x02 + 0x200";
			x="(0.5 + 25 * 2/3) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="7 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="25 * 1/9 * 0.99 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0};
			font="EtelkaMonospacePro";
		};
		class Minute: Hour
		{
			idc=106;
			tooltip="$STR_3DEN_Attributes_SliderTime_Minute_tooltip";
			x="(0.5 + 25 * 7/9) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="7 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="25 * 1/9 * 0.99 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Second: Hour
		{
			idc=107;
			tooltip="$STR_3DEN_Attributes_SliderTime_Second_tooltip";
			x="(0.5 + 25 * 8/9) * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			y="7 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="25 * 1/9 * 0.99 * 	(((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscDisplayAttributesModuleSetDate: RscDisplayAttributes
{
	scriptName="RscDisplayAttributesModuleSetDate";
	scriptPath="AresDisplays";
	onLoad="['onLoad',_this,'RscDisplayAttributesModuleSetDate','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="['onUnload',_this,'RscDisplayAttributesModuleSetDate','AresDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{
		class Background: Background
		{
		};
		class Title: Title
		{
		};
		class Content: Content
		{
			class Controls: controls
			{
				class Date: RscAttributeDate
				{
				};
			};
		};
		class ButtonOK: ButtonOK
		{
		};
		class ButtonCancel: ButtonCancel
		{
		};
		class ButtonBehaviour: ButtonCustom
		{
			text="$STR_AMAE_PREVIEW";
			onMouseButtonClick="with uiNamespace do {['preview',[ctrlParent (_this select 0)],objnull] call RscAttributeDate};";
			colorBackground[]={0.51800001,0.016000001,0,0.80000001};
		};
	};
};
class RscAttributeMusic: RscControlsGroupNoScrollbars
{
	onSetFocus="[_this,""RscAttributeMusic"",""AresDisplays""] call (uinamespace getvariable ""Achilles_fnc_initCuratorAttribute"")";
};
class cfgHints
{
	class Ares
	{
		displayName="$STR_AMAE_ARES_FIELD_MANUAL";
		class AresFieldManual
		{
			arguments[]={};
			description="$STR_AMAE_ARES_FIELD_MANUAL_DESCRIPTION";
			displayName="$STR_AMAE_ARES_FIELD_MANUAL";
			image="\achilles\data_f_achilles\icons\icon_achilles_hint.paa";
			tip="";
		};
		class PlacingModules
		{
			arguments[]={};
			description="$STR_AMAE_PLACING_MODULES_DESCRIPTION";
			displayName="$STR_AMAE_PLACING_MODULES";
			image="\achilles\data_f_achilles\icons\icon_achilles_hint.paa";
			tip="$STR_AMAE_PLACING_MODULES_TIP";
		};
		class SelectionOption
		{
			arguments[]={};
			description="$STR_AMAE_SELECTION_OPTION_DESCRIPTION";
			displayName="$STR_AMAE_SELECTION_OPTION";
			image="\achilles\data_f_achilles\icons\icon_achilles_hint.paa";
			tip="$STR_AMAE_SELECTION_OPTION_TIP";
		};
		class KeyAssignment
		{
			arguments[]=
			{
				
				{
					
					{
						"launchCM"
					}
				}
			};
			description="$STR_AMAE_KEY_ASSIGNMENT_DESCRIPTION";
			displayName="$STR_AMAE_KEY_ASSIGNMENT";
			image="\achilles\data_f_achilles\icons\icon_achilles_hint.paa";
			tip="";
		};
		class ExecuteCode
		{
			arguments[]={};
			description="$STR_AMAE_EXECUTE_CODE_DESCRIPTION";
			displayName="$STR_AMAE_EXECUTE_CODE";
			image="\achilles\data_f_achilles\icons\icon_achilles_hint.paa";
			tip="";
		};
		class RCvehicleCrew
		{
			arguments[]={};
			description="$STR_AMAE_RC_VEHICLE_CREW_DESCRIPTION";
			displayName="$STR_AMAE_RC_VEHICLE_CREW";
			image="\achilles\data_f_achilles\icons\icon_achilles_hint.paa";
			tip="";
		};
	};
};
class CfgMods
{
	class Ares
	{
		dir="@AresModAchillesExpension";
		name="Ares Mod";
		author="Anton Struyk";
		hidePicture=0;
		hideName=1;
		description="Ares augments the existing Zeus functionality, expanding the toolset and making it easy to create more compelling missions on the fly.";
		overview="Ares augments the existing Zeus functionality, expanding the toolset and making it easy to create more compelling missions on the fly.";
		picture="\achilles\data_f_ares\pictures\Ares_Insignia.paa";
		logo="\achilles\data_f_ares\pictures\Ares_Insignia.paa";
		logoOver="\achilles\data_f_ares\pictures\Ares_Insignia.paa";
		logoSmall="\achilles\data_f_ares\icons\icon_ares.paa";
	};
	class Achilles
	{
		dir="@AresModAchillesExpension";
		name="$STR_AMAE_ACHILLES";
		author="ArmA 3 Achilles Mod Inc.";
		hidePicture=0;
		hideName=1;
		actionName="Website";
		action="https://forums.bistudio.com/topic/191113-ares-mod-achilles-expansion/?p=3031548";
		description="Achilles includes Ares Mod with even more functionalites. Some functionalities only work with ACE mod, but those mods are not mandatory in order to run Achilles properly.";
		overview="Achilles includes Ares Mod with even more functionalites. Some functionalities only work with ACE mod, but those mods are not mandatory in order to run Achilles properly.";
		picture="\achilles\data_f_achilles\pictures\Achilles_Insignia.paa";
		logo="\achilles\data_f_achilles\icons\icon_achilles_hint.paa";
		logoOver="\achilles\data_f_achilles\icons\icon_achilles_hint.paa";
		logoSmall="\achilles\data_f_achilles\icons\icon_achilles_small.paa";
	};
	class Enyo
	{
		dir="@AresModAchillesExpension";
		name="Enyo Expansion";
		author="CreepPork_LV";
		hidePicture=0;
		hideName=1;
		description="The Enyo Expansion focuses more on bringing back the functionalites from MCC Sandbox 4 with improved support and them being updated to newest Arma 3 standards.";
		overview="The Enyo Expansion focuses more on bringing back the functionalites from MCC Sandbox 4 with improved support and them being updated to newest Arma 3 standards.";
		picture="\achilles\data_f_achilles\icons\icon_enyo_large.paa";
		logo="\achilles\data_f_achilles\icons\icon_enyo.paa";
		logoOver="\achilles\data_f_achilles\icons\icon_enyo_large.paa";
		logoSmall="\achilles\data_f_achilles\icons\icon_enyo.paa";
	};
	author="";
	timepacked="1580181271";
};
class ACE_ZeusActions
{
	class ZeusUnits
	{
		class Achilles_SwitchUnit
		{
			displayName="$STR_AMAE_SWITCH_UNIT";
			icon="\achilles\data_f_achilles\icons\icon_unit.paa";
			statement="_unit = objNull; { if ((side _x in [east,west,resistance,civilian]) && !(isPlayer _x)) exitWith { _unit = _x; }; } forEach (curatorSelected select 0); bis_fnc_curatorObjectPlaced_mouseOver = ['OBJECT',_unit]; [Achilles_fnc_switchUnit_start, [_unit]] call CBA_fnc_directCall;";
		};
	};
};
