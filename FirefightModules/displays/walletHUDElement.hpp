class walletHUDElement
{
	idd= 720;
	movingEnable = false;
	moving = 1;
	onLoad = ""; //code ran on opening the dialog.
	onUnload = ""; //code ran on closing dialog.
	controls[] = {};

	controlsBackground[] = {
    "wallet_hud_elem"
  };

  ////////////////////////////////////////////////////////
  // GUI EDITOR OUTPUT START (by [S-Spec] SpartanD39, v1.063, #Tazozi)
  ////////////////////////////////////////////////////////

  class wallet_hud_elem: RscText
  {
  	idc = 1000;
  	x = 0.4375;
  	y = 1.12;
  	w = 0.125;
  	h = 0.06;
  	colorBackground[] = {0,0,0,0.7};
  };
  ////////////////////////////////////////////////////////
  // GUI EDITOR OUTPUT END
  ////////////////////////////////////////////////////////

};
