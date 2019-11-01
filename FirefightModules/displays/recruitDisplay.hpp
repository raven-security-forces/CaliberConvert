class recruitDisplay
{
	idd= 720;
	movingEnable = false;
	moving = 1;
	onLoad = ""; //code ran on opening the dialog.
	onUnload = ""; //code ran on closing dialog.
	controls[] = {
    "avail_troops_list",
    "selected_troops_list",
    "submit_button",
    "exit_button",
    "faction_select",
		"help_icon"
	};

	controlsBackground[] = {
    "bg_container",
    "faction_lead",
    "bg_troop_list_header",
    "bg_selected_troops_header",
    "status_message_box",
		"preview_image"
  };

	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by [S-Spec] SpartanD39, v1.063, #Legexi)
	////////////////////////////////////////////////////////

	class bg_container: RscText
	{
		idc = 1000;

		x = 0 * GUI_GRID_W + GUI_GRID_X;
		y = 0 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 25 * GUI_GRID_H;
		colorBackground[] = {0,0,0,0.8};
	};
	class faction_lead: RscText
	{
		idc = 1001;

		text = "Faction"; //--- ToDo: Localize;
		x = 2 * GUI_GRID_W + GUI_GRID_X;
		y = 1 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		sizeEx = 1  * GUI_GRID_H;
	};
	class bg_troop_list_header: RscText
	{
		idc = 1002;

		text = "Available Troops"; //--- ToDo: Localize;
		x = 4 * GUI_GRID_W + GUI_GRID_X;
		y = 4 * GUI_GRID_H + GUI_GRID_Y;
		w = 6 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};
	class bg_selected_troops_header: RscText
	{
		idc = 1003;

		text = "Selected Troops"; //--- ToDo: Localize;
		x = 30 * GUI_GRID_W + GUI_GRID_X;
		y = 4 * GUI_GRID_H + GUI_GRID_Y;
		w = 6 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};
	class faction_select: RscCombo
	{
		idc = 2100;
		onLoad = "_handle = ctrlIDC (_this select 0) spawn { [_this, 'recruits'] call s39_fnc_gui_setSelector};";
		onLBSelChanged = "_srcIdc = ctrlIDC (_this select 0); _srcIndex = _this select 1; _tgtIdc = 1500; [_srcIdc, _srcIndex, _tgtIdc] call s39_fnc_gui_getSoldiers;";

		x = 7 * GUI_GRID_W + GUI_GRID_X;
		y = 1 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class preview_image: RscPicture
	{
		idc = 1200;

		text = "#(argb,8,8,3)color(0,0,0,0)";
		x = 15 * GUI_GRID_W + GUI_GRID_X;
		y = 7 * GUI_GRID_H + GUI_GRID_Y;
		w = 10 * GUI_GRID_W;
		h = 6 * GUI_GRID_H;
	};
	class avail_troops_list: RscListBox
	{
		idc = 1500;
		onLBSelChanged = "_srcIdc = ctrlIDC (_this select 0); _srcIndex = _this select 1; [_srcIdc, _srcIndex] call s39_fnc_gui_handleSoldier";
		onLBDblClick = "_srcIdc = ctrlIDC (_this select 0); _srcIndex = _this select 1; [_srcIdc, _srcIndex, true] call s39_fnc_gui_handleSoldier";

		x = 1 * GUI_GRID_W + GUI_GRID_X;
		y = 6 * GUI_GRID_H + GUI_GRID_Y;
		w = 13 * GUI_GRID_W;
		h = 17 * GUI_GRID_H;
	};
	class selected_troops_list: RscListBox
	{
		idc = 1501;
		onLBDblClick = "_srcIdc = ctrlIDC (_this select 0); _srcIndex = _this select 1; [_srcIdc, _srcIndex, false, true] call s39_fnc_gui_handleSoldier";

		x = 26 * GUI_GRID_W + GUI_GRID_X;
		y = 6 * GUI_GRID_H + GUI_GRID_Y;
		w = 13 * GUI_GRID_W;
		h = 17 * GUI_GRID_H;
	};
	class submit_button: RscButton
	{
		idc = 1600;
		onButtonClick = "[] call s39_fnc_gui_addRecruits";

		text = "Recruit"; //--- ToDo: Localize;
		x = 15.5 * GUI_GRID_W + GUI_GRID_X;
		y = 18 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 2.5 * GUI_GRID_H;
		colorBackground[] = {0,0.7,0,0.8};
		colorActive[] = {0,0.7,0,1};
		sizeEx = 1.5 * GUI_GRID_H;
	};
	class exit_button: RscButton
	{
		idc = 1601;

		text = "Quit"; //--- ToDo: Localize;
		x = 15.5 * GUI_GRID_W + GUI_GRID_X;
		y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 2.5 * GUI_GRID_H;
		colorBackground[] = {0.7,0,0,0.8};
		colorActive[] = {0.7,0,0,1};
		sizeEx = 1.5 * GUI_GRID_H;
	};
	class status_message_box: RscText
	{
		idc = 1004;

		x = 15.5 * GUI_GRID_W + GUI_GRID_X;
		y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 9 * GUI_GRID_W;
		h = 4 * GUI_GRID_H;
	};
	class help_icon: RscStructuredText
	{
		idc = 1007;
		text = "?"; //--- ToDo: Localize;
		tooltip = "Max group size is 8. -- Use the dropdown to select a compatible faction. -- Single-click to preview a soldier, double-click to add it to the recruit list on the right. -- Double-click on soldiers on the right-hand list to remove them from the list.";
		x = 38 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 1.5 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
		sizeEx = 1.5 * GUI_GRID_H;
	};
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////

};
