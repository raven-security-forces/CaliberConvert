#define FACTION_SELECT 722
#define LOCATION_SELECT 723
#define RADIUS_SELECT 724
#define LEVEL_SELECT 725

class skirmishDisplay
{
	idd= 720;
	movingEnable = false;
	moving = 1;
	onLoad = ""; //code ran on opening the dialog.
	onUnload = ""; //code ran on closing dialog.
	controls[] = {
    "faction_select",
    "location_select",
    "radius_select",
    "level_select",
    "submit_btn",
		"gui_clearskirmish_btn",
		"gui_closeDialog_btn"
	};

	controlsBackground[] = {
    "bg_fill",
    "factions_desc",
    "locations_desc",
    "radius_desc",
    "level_desc",
    "location_map"
  };

  ////////////////////////////////////////////////////////
  // GUI EDITOR OUTPUT START (by [S-Spec] SpartanD39, v1.063, #Jevuvu)
  ////////////////////////////////////////////////////////

  class bg_fill: RscText
  {
  	idc = 1000;

  	x = 0 * GUI_GRID_W + GUI_GRID_X;
  	y = 0 * GUI_GRID_H + GUI_GRID_Y;
  	w = 40 * GUI_GRID_W;
  	h = 25 * GUI_GRID_H;
  	colorBackground[] = {0,0,0,0.8};
  };

  class factions_desc: RscText
  {
  	idc = 1001;
    onLoad = "";
  	text = "Faction"; //--- ToDo: Localize;
  	x = 4 * GUI_GRID_W + GUI_GRID_X;
  	y = 4 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  };

  class locations_desc: RscText
  {
  	idc = 1002;

  	text = "Loction"; //--- ToDo: Localize;
  	x = 4 * GUI_GRID_W + GUI_GRID_X;
  	y = 6 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  };

  class radius_desc: RscText
  {
  	idc = 1003;

  	text = "Radius"; //--- ToDo: Localize;
  	x = 4 * GUI_GRID_W + GUI_GRID_X;
  	y = 8 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  };

  class level_desc: RscText
  {
  	idc = 1004;

  	text = "Level"; //--- ToDo: Localize;
  	x = 4 * GUI_GRID_W + GUI_GRID_X;
  	y = 10 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  };

  class location_map: RscMapControl
  {
  	idc = 1005;

  	x = 22 * GUI_GRID_W + GUI_GRID_X;
  	y = 4 * GUI_GRID_H + GUI_GRID_Y;
  	w = 14 * GUI_GRID_W;
  	h = 12 * GUI_GRID_H;
  };

  class faction_select: RscCombo
  {
  	idc = FACTION_SELECT;
    onLoad = "_handle = ctrlIDC (_this select 0) spawn { [_this, 'factions'] call s39_fnc_gui_setSelector};";
  	x = 8 * GUI_GRID_W + GUI_GRID_X;
  	y = 4 * GUI_GRID_H + GUI_GRID_Y;
  	w = 8 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  };

  class location_select: RscCombo
  {
  	idc = LOCATION_SELECT;
    onLoad = "_handle = ctrlIDC (_this select 0) spawn { [_this, 'locations'] call s39_fnc_gui_setSelector};";

    onLBSelChanged = "_idc = ctrlIDC (_this select 0); _index = _this select 1; _data = lbData [_idc, _index]; _loc = parseSimpleArray _data; [_loc] call s39_fnc_gui_moveMap;";

  	x = 8 * GUI_GRID_W + GUI_GRID_X;
  	y = 6 * GUI_GRID_H + GUI_GRID_Y;
  	w = 8 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  };

  class radius_select: RscCombo
  {
    idc = RADIUS_SELECT;
    onLoad = "_handle = ctrlIDC (_this select 0) spawn { [_this, 'radius'] call s39_fnc_gui_setSelector};";
    x = 8 * GUI_GRID_W + GUI_GRID_X;
    y = 8 * GUI_GRID_H + GUI_GRID_Y;
    w = 8 * GUI_GRID_W;
    h = 1 * GUI_GRID_H;
  };

  class level_select: RscCombo
  {
    idc = LEVEL_SELECT;
    onLoad = "_handle = ctrlIDC (_this select 0) spawn { [_this, 'level'] call s39_fnc_gui_setSelector};";
    x = 8 * GUI_GRID_W + GUI_GRID_X;
    y = 10 * GUI_GRID_H + GUI_GRID_Y;
    w = 8 * GUI_GRID_W;
    h = 1 * GUI_GRID_H;
  };

  class submit_btn: RscButton
  {
  	idc = 1600;
    onButtonClick = [722, 723, 724, 725] remoteExec ["s39_fnc_gui_handleForm"];
  	text = "Go"; //--- ToDo: Localize;
  	x = 9 * GUI_GRID_W + GUI_GRID_X;
  	y = 14 * GUI_GRID_H + GUI_GRID_Y;
  	w = 6 * GUI_GRID_W;
  	h = 2 * GUI_GRID_H;
  	colorBackground[] = {-1,0.7,-1,1};
  };

	class gui_clearskirmish_btn: RscButton
{
	idc = 1601;
	onButtonClick = [] remoteExec ["s39_fnc_clearFirefight"];

	text = "Clear Skirmish"; //--- ToDo: Localize;
	x = 9 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
	colorBackground[] = {0.7,-1,-1,1};
};

class gui_closeDialog_btn: RscButton
{
	idc = 2;
	text = "X"; //--- ToDo: Localize;
	x = 38 * GUI_GRID_W + GUI_GRID_X;
	y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 1.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorBackground[] = {0.7,-1,-1,1};
	sizeEx = 2 * GUI_GRID_H;
};

  ////////////////////////////////////////////////////////
  // GUI EDITOR OUTPUT END
  ////////////////////////////////////////////////////////



};
