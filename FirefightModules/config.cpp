class CfgPatches {

  class s39_utilityModules {

    units[] = {"s39_firefightPositionModule","s39_firefightCoreModule"};
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
    };

    class firefightModuleFunctions {
      file = "\FirefightModules\functions\firefightModuleFunctions";
      class allowMove {};
      class clearFirefight {};
      class createPatrol {};
      class garrisonNearBuilding {};
      class initFirefight {};
      class secondaryObjectives {};
    };

    class guiFunctions {
      file = "\FirefightModules\functions\guifunctions";
      class gui_get_factions {};
      class gui_handleForm {};
      class gui_moveMap {};
      class gui_setSelector {};
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
};
//Displays Configs
#include "displays\common.hpp"
#include "displays\skirmishDisplay.hpp"
