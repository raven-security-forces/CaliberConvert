class CfgPatches {

  class s39_utilityModules {

    units[] = {"s39_firefightPositionModule","s39_firefightCoreModule","s39_shopAddMoneyModule","s39_shopLoseMoneyModule","s39_shopCoreModule"};
    requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F"};

  };

};

class cfgFunctions {

  class s39 {

    class moduleFunctions {

      file = "\FirefightModules\functions\moduleFunctions";
      class initFirefightPositionModule {};
      class initFirefightCoreModule {};
      class initShopModule {};
      class addMakeMoneyEH_Module {};
      class addLoseMoneyEH_Module {};

    };

    class moneyHacks {
      file = "\FirefightModules\functions\moneyHacks";
      class initWallet {};
      class getWallet {};
      class checkWallet {};
      class loseMoney {};
      class makeMoney {};
    };

    class firefightModuleFunctions {
      file = "\FirefightModules\functions\firefightModuleFunctions";
      class allowMove {};
      class clearFirefight {};
      class createPatrol {};
      class garrisonNearBuilding {};
      class initFirefight {};
    };

    class guiFunctions {
      file = "\FirefightModules\functions\guifunctions";
      class gui_addRecruits {};
      class gui_get_factions {};
      class gui_getMarkers {};
      class gui_getSoldiers {};
      class gui_handleForm {};
      class gui_handleSoldier {};
      class gui_moveMap {};
      class gui_setSelector {};
    };

    class spartekArmory
		{
      file = "\FirefightModules\functions\spartekArmory";
			//getter classes
			class get_configs {};
			//Weapons
			class armory_get_pistols {};
			class armory_get_rifles {};
			class armory_get_launchers {};
			class armory_get_explosives {};
			class armory_get_ammo {};
			class armory_get_wallet {};

			//Uniforms/items
			class armory_get_utility {};
			class qmaster_get_backpacks {};
			class qmaster_get_headgear {};
			class qmaster_get_uniforms {};
			class qmaster_get_vests {};
			class qmaster_get_weapon_accessories {};

			//cart-related classes
			class armory_add_to_cart {};
			class armory_remove_from_cart {};
			class handle_purchase {};
		};

  };

};

class CfgFactionClasses {
  class NO_CATEGORY;
  class s39_firefightModules: NO_CATEGORY {
    displayName = "Firefight Modules";
  };
  class s39_shopModule: NO_CATEGORY {
    displayName = "Shop Modules";
  };
};

class cfgVehicles {

  //First we need some basic class defines for modules.
  class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit; // Default edit box (i.e., text input field)
			class Combo; // Default combo box (i.e., drop-down menu)
			class Checkbox; // Default checkbox (returned value is Bool)
			class CheckboxNumber; // Default checkbox (returned value is Number)
			class ModuleDescription; // Module description
			class Units; // Selection of units on which the module is applied
		};
		// Description base classes, for more information see below
		class ModuleDescription
		{
			class AnyBrain;
		};
	};

  #include "firefightModules\firefightPositionModule.hpp"
  #include "firefightModules\firefightCoreModule.hpp"
  #include "shopModule\shopCoreModule.hpp"
  #include "shopModule\addMoneyModule.hpp"
  #include "shopModule\loseMoneyModule.hpp"
};
//Displays Configs
#include "displays\common.hpp"
#include "displays\quartermasterDisplay.hpp"
#include "displays\recruitDisplay.hpp"
#include "displays\shopfrontDisplay.hpp"
#include "displays\skirmishDisplay.hpp"
