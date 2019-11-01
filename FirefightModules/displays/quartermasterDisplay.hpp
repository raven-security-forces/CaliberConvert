class spartekQuartermasterDialog
{
	idd= -1;
	movingEnable = false;
	moving = 1;
	onLoad = ""; //code ran on opening the dialog.
	onUnload = ""; //code ran on closing dialog.
	controls[] = {
    "heagear_tab",
    "uniform_tab",
    "nvg_tab",
    "utility_tab",
    "packs_tab",
    "vests_tab",
    "display_selection_listbox",
    "display_cart_listbox",
    "purchase_button",
    "cancel_button",
    "exit_button"
	};

	controlsBackground[] = {
    "display_frame",
    "background_header",
    "wallet_lead",
    "total_cost_lead",
    "wallet_total",
    "total_cost",
    "selector_container",
    "display_cart_lead",
    "display_selection_lead"
	};

  ////////////////////////////////////////////////////////
  // GUI EDITOR OUTPUT START (by [S-Spec] SpartanD39, v1.063, #Fepytu)
  ////////////////////////////////////////////////////////

  class display_frame: RscText
  {
  	idc = 1800;
  	x = 0 * GUI_GRID_W + GUI_GRID_X;
  	y = 0 * GUI_GRID_H + GUI_GRID_Y;
  	w = 40 * GUI_GRID_W;
  	h = 25 * GUI_GRID_H;
  	colorBackground[] = {0,0,0,0.9};
  };
  class background_header: RscText
  {
  	idc = 1000;
  	text = "Supply Depot"; //--- ToDo: Localize;
  	x = 15.5 * GUI_GRID_W + GUI_GRID_X;
  	y = 0 * GUI_GRID_H + GUI_GRID_Y;
  	w = 10 * GUI_GRID_W;
  	h = 2 * GUI_GRID_H;
  	sizeEx = 2 * GUI_GRID_H;
  };
  class wallet_lead: RscText
  {
  	idc = 1001;
  	text = "You have:"; //--- ToDo: Localize;
  	x = 12 * GUI_GRID_W + GUI_GRID_X;
  	y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
  	w = 4 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  	colorText[] = {0,0.8,0,1};
  };
  class total_cost_lead: RscText
  {
  	idc = 1002;
  	text = "You need:"; //--- ToDo: Localize;
  	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
  	y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
  	w = 4 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  	colorText[] = {0.8,0,0,1};
  };
  class wallet_total: RscText
  {
  	idc = 1003;
  	text = ""; //--- ToDo: Localize;
    onLoad = "_total = [] call s39_fnc_armory_get_wallet; _this select 0 ctrlSetText str(_total);";
  	x = 16.5 * GUI_GRID_W + GUI_GRID_X;
  	y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  	colorText[] = {0,0.8,0,1};
  };
  class total_cost: RscText
  {
  	idc = 1007;
  	text = "0"; //--- ToDo: Localize;
  	x = 25 * GUI_GRID_W + GUI_GRID_X;
  	y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1 * GUI_GRID_H;
  	colorText[] = {0.8,0,0,1};
  };
  class selector_container: RscControlsGroup
  {
  	idc = 2300;
  	x = 14.5 * GUI_GRID_W + GUI_GRID_X;
  	y = 4 * GUI_GRID_H + GUI_GRID_Y;
  	w = 11 * GUI_GRID_W;
  	h = 4 * GUI_GRID_H;
  	class Controls {};
  };
  class heagear_tab: RscButton
  {
  	idc = 1608;

    onButtonClick = "[] call s39_fnc_qmaster_get_headgear";
    colorBackgroundActive[] = {0,0,0.8,1};
    colorFocused[] = {0,0,0.8,1};

  	text = "Headgear"; //--- ToDo: Localize;
  	x = 15 * GUI_GRID_W + GUI_GRID_X;
  	y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1.5 * GUI_GRID_H;
  	sizeEx = .8 * GUI_GRID_H;
  };
  class uniform_tab: RscButton
  {
  	idc = 1609;
  	text = "Uniforms"; //--- ToDo: Localize;

    onButtonClick = "[] call s39_fnc_qmaster_get_uniforms";
    colorBackgroundActive[] = {0,0,0.8,1};
    colorFocused[] = {0,0,0.8,1};

  	x = 18.5 * GUI_GRID_W + GUI_GRID_X;
  	y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1.5 * GUI_GRID_H;
  	sizeEx = .8 * GUI_GRID_H;
  };
  class nvg_tab: RscButton
  {
  	idc = 1610;

    onButtonClick = "[] call s39_fnc_qmaster_get_weapon_accessories";
    colorBackgroundActive[] = {0,0,0.8,1};
    colorFocused[] = {0,0,0.8,1};

  	text = "Wep. Acc."; //--- ToDo: Localize;
  	x = 15 * GUI_GRID_W + GUI_GRID_X;
  	y = 6 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1.5 * GUI_GRID_H;
  	sizeEx = .8 * GUI_GRID_H;
  };
  class utility_tab: RscButton
  {
  	idc = 1611;

    onButtonClick = "[] call s39_fnc_armory_get_utility";
    colorBackgroundActive[] = {0,0,0.8,1};
    colorFocused[] = {0,0,0.8,1};

  	text = "Utility"; //--- ToDo: Localize;
  	x = 18.5 * GUI_GRID_W + GUI_GRID_X;
  	y = 6 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1.5 * GUI_GRID_H;
  	sizeEx = .8 * GUI_GRID_H;
  };
  class packs_tab: RscButton
  {
  	idc = 1612;

    onButtonClick = "[] call s39_fnc_qmaster_get_backpacks";
    colorBackgroundActive[] = {0,0,0.8,1};
    colorFocused[] = {0,0,0.8,1};

  	text = "Packs"; //--- ToDo: Localize;
  	x = 22 * GUI_GRID_W + GUI_GRID_X;
  	y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
    w = 3.5 * GUI_GRID_W;
  	h = 1.5 * GUI_GRID_H;
    sizeEx = .8 * GUI_GRID_H;
  };

  class vests_tab: RscButton
  {
  	idc = 1613;
  	text = "Vests"; //--- ToDo: Localize;

    onButtonClick = "[] call s39_fnc_qmaster_get_vests";
    colorBackgroundActive[] = {0,0,0.8,1};
    colorFocused[] = {0,0,0.8,1};

  	x = 22 * GUI_GRID_W + GUI_GRID_X;
  	y = 6 * GUI_GRID_H + GUI_GRID_Y;
  	w = 3.5 * GUI_GRID_W;
  	h = 1.5 * GUI_GRID_H;
    sizeEx = .8 * GUI_GRID_H;
  };

  class display_selection_lead: RscText
  {
  	idc = 1005;
  	text = "Current stock:"; //--- ToDo: Localize;
  	x = 4.5 * GUI_GRID_W + GUI_GRID_X;
  	y = 3 * GUI_GRID_H + GUI_GRID_Y;
  	w = 5.5 * GUI_GRID_W;
  	h = 2 * GUI_GRID_H;
  };
  class display_selection_listbox: RscListNBox
  {
  	idc = 1500;

    onLBDblClick = "[_this select 0, _this select 1] call s39_fnc_armory_add_to_cart";

    columns[] = {-0.01,0.8};

    colorBackground[] = {0,0,0,1};

    sizeEx = .8 * GUI_GRID_H;

  	x = 0 * GUI_GRID_W + GUI_GRID_X;
  	y = 6 * GUI_GRID_H + GUI_GRID_Y;
  	w = 15 * GUI_GRID_W;
  	h = 15 * GUI_GRID_H;
  };
  class display_cart_listbox: RscListNBox
  {
  	idc = 1501;

    onLBDblClick = "[_this select 0, _this select 1] call s39_fnc_armory_remove_from_cart";

    columns[] = {-0.01,0.8};

    colorBackground[] = {0,0,0,1};

    sizeEx = .8 * GUI_GRID_H;

  	x = 25.5 * GUI_GRID_W + GUI_GRID_X;
  	y = 6 * GUI_GRID_H + GUI_GRID_Y;
  	w = 15 * GUI_GRID_W;
  	h = 15 * GUI_GRID_H;
  };
  class display_cart_lead: RscText
  {
  	idc = 1006;
  	text = "Current cart:"; //--- ToDo: Localize;
  	x = 30 * GUI_GRID_W + GUI_GRID_X;
  	y = 3 * GUI_GRID_H + GUI_GRID_Y;
  	w = 5.5 * GUI_GRID_W;
  	h = 2 * GUI_GRID_H;
  };
  class purchase_button: RscButton
  {
  	idc = 1600;
  	text = "PURCHASE"; //--- ToDo: Localize;
		onButtonClick = "[] call s39_fnc_handle_purchase;";
  	x = 16 * GUI_GRID_W + GUI_GRID_X;
  	y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
  	w = 8 * GUI_GRID_W;
  	h = 2.5 * GUI_GRID_H;
  	colorBackground[] = {0,0.8,0,0.7};
    colorActive[] = {0,0.8,0,1};
  	sizeEx = 1.5 * GUI_GRID_H;
  };
  class cancel_button: RscButton
  {
  	idc = 1601;
  	text = "CLEAR CART"; //--- ToDo: Localize;
    onButtonClick = "lbClear 1501; ctrlSetText [1007, '0'];";
  	x = 16 * GUI_GRID_W + GUI_GRID_X;
  	y = 13 * GUI_GRID_H + GUI_GRID_Y;
  	w = 8 * GUI_GRID_W;
  	h = 2.5 * GUI_GRID_H;
  	colorBackground[] = {0,0,0.8,0.7};
    colorActive[] = {0,0,0.8,1};
  	sizeEx = 1.5 * GUI_GRID_H;
  };
  class exit_button: RscButton
  {
  	idc = 1602;
  	text = "EXIT"; //--- ToDo: Localize;
    onButtonClick = "closeDialog 2";
  	x = 16 * GUI_GRID_W + GUI_GRID_X;
  	y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
  	w = 8 * GUI_GRID_W;
  	h = 2.5 * GUI_GRID_H;
  	colorBackground[] = {0.8,0,0,0.7};
    colorActive[] = {0.8,0,0,1};
  	sizeEx = 1.5 * GUI_GRID_H;
  };
  ////////////////////////////////////////////////////////
  // GUI EDITOR OUTPUT END
  ////////////////////////////////////////////////////////
};
