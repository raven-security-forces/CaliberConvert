_tabType = _this select 0;
_items = [];

switch (_tabType) do {

  case "rifles": {

    _rifles = "getnumber (_x >> 'type') isEqualTo 1 AND getnumber (_x >> 'scope') isEqualTo 2 AND !isClass(_x >> 'LinkedItems' >> 'LinkedItemsOptic') AND !isClass(_x >> 'LinkedItems' >> 'LinkedItemsAcc')" configClasses (configfile >> 'CfgWeapons');
    _rifleNames = [];
    {_rifleNames pushBack configName _x;} forEach _rifles;

    _items = [];
    {
    	_type = _x call BIS_fnc_itemType select 1;
    	if(_type == 'AssaultRifle' OR _type == 'MachineGun' OR _type == 'Shotgun' OR _type == 'Rifle' OR _type == 'SubmachineGun' OR _type == 'SniperRifle') then {
    	 _items pushBack _x;
    	}
    } forEach _rifleNames;

  };

  case "pistols": {

    _pistols = "getnumber (_x >> 'type') isEqualTo 2 AND getnumber (_x >> 'scope') isEqualTo 2 AND !isClass(_x >> 'LinkedItems')" configClasses (configfile >> 'CfgWeapons');
    {_items pushBack configName _x;} forEach _pistols;

  };

  case "launchers": {

    _launchers = "getnumber (_x >> 'type') isEqualTo 4 AND getnumber (_x >> 'scope') isEqualTo 2 AND !isClass(_x >> 'LinkedItems')" configClasses (configfile >> 'CfgWeapons');
    {_items pushBack configName _x;} forEach _launchers;

  };

  case "explosives": {

    _explosives = "getnumber (_x >> 'type') isEqualTo 2* 256 OR getnumber(_x >> 'type') isEqualTo 256 AND getnumber (_x >> 'scope') isEqualTo 2" configClasses (configfile >> 'cfgMagazines');

    _explosiveNames = [];

    {_explosiveNames pushBack configName _x;} forEach _explosives;

    {

      _type = _x call BIS_fnc_itemType select 1;
      if(_type == "Throw" OR _type == "Mine" OR _type == "MineBounding" OR _type == "MineDirectional") then {
        _items pushBack _x;
      };

    } forEach _explosiveNames;

  };

  case "utility": {

    _utility = "getnumber (_x >> 'scope') isEqualTo 2 AND !isClass(_x >> 'LinkedItems')" configClasses (configfile >> 'CfgWeapons');
    _utilityNames = [];
    {_utilityNames pushBack configName _x;} forEach _utility;

    {
    	_type = _x call BIS_fnc_itemType select 1;
    	if(_type == 'FirstAidKit' OR _type == 'GPS' OR _type == 'Binocular' OR _type == 'Medikit' OR _type == 'MineDetector'  OR _type == 'Toolkit' OR _type == 'UAVTerminal' OR _type == 'NVGoggles' OR _type == 'LaserDesignator') then {
    	 _items pushBack _x;
    	}
    } forEach _utilityNames;

  };

  case "ammo": {

    _ammo = "getnumber(_x >> 'type') != 0 AND getnumber (_x >> 'scope') isEqualTo 2 AND !isClass(_x >> 'LinkedItems')" configClasses (configfile >> 'CfgMagazines');
    _ammoNames = [];
    {_ammoNames pushBack configName _x;} forEach _ammo;

    {
    	_type = _x call BIS_fnc_itemType select 1;
    	if(_type == 'Bullet' OR _type == 'Flare' OR _type == 'Grenade' OR _type == 'Missile' OR _type == 'ShotgunShell'  OR _type == 'SmokeShell' OR _type == 'Shell' OR _type == 'Artillery' OR _type == 'Rocket') then {
    	 _items pushBack _x;
    	}
    } forEach _ammoNames;

  };

  case "packs": {

    _packs = "getnumber (_x >> 'scope') isEqualTo 2" configClasses (configfile >> 'CfgVehicles');

    _packsNames = [];

    {_packsNames pushBack configName _x;} forEach _packs;

    _filteredPacks = [];
    {

      _type = _x call BIS_fnc_itemType select 1;
      if(_type == "Backpack") then {
        _items pushBack _x;
      };

    } forEach _packsNames;

  };

  case "headgear": {

    _headgear = "getnumber (_x >> 'scope') isEqualTo 2" configClasses (configfile >> 'CfgWeapons');

    _headgearNames = [];

    {_headgearNames pushBack configName _x;} forEach _headgear;

    {

      _type = _x call BIS_fnc_itemType select 1;
      if(_type == "Headgear" OR _type == "Glasses") then {
        _items pushBack _x;
      };

    } forEach _headgearNames;

  };

  case "uniforms": {

    _uniforms = "getnumber (_x >> 'scope') isEqualTo 2" configClasses (configfile >> 'CfgWeapons');

    _uniformsNames = [];

    {_uniformsNames pushBack configName _x;} forEach _uniforms;

    {

      _type = _x call BIS_fnc_itemType select 1;
      if(_type == "Uniform") then {
        _items pushBack _x;
      };

    } forEach _uniformsNames;

  };

  case "vests": {

    _vests = "getnumber (_x >> 'scope') isEqualTo 2" configClasses (configfile >> 'CfgWeapons');

    _vestsNames = [];

    {_vestsNames pushBack configName _x;} forEach _vests;

    {

      _type = _x call BIS_fnc_itemType select 1;
      if(_type == "Vest") then {
        _items pushBack _x;
      };

    } forEach _vestsNames;

  };

  case "wep_accs": {

    _accessories = "getnumber (_x >> 'scope') isEqualTo 2" configClasses (configfile >> 'CfgWeapons');

    _accessoriesNames = [];

    {_accessoriesNames pushBack configName _x;} forEach _accessories;

    _filteredAccessories = [];
    {

      _type = _x call BIS_fnc_itemType select 1;
      if(_type == "AccessoryMuzzle" OR _type == "AccessoryPointer" OR _type == "AccessorySights" OR _type == "AccessoryBipod") then {
        _items pushBack _x;
      };

    } forEach _accessoriesNames;

  };

  case "armoryBoxes": {

    _boxes = "getnumber (_x >> 'scope') isEqualTo 2 AND getText (_x >> 'vehicleClass') == 'Container' OR getText (_x >> 'vehicleClass') == 'Support' OR getText (_x >> 'vehicleClass') == 'Ammo'" configClasses (configfile >> 'CfgVehicles');

    _boxesNames = [];

    {_boxesNames pushBack configName _x;} forEach _boxes;

    {

      _items pushBack _x;

    } forEach _boxesNames;

  };

  default {

  };

};

_items;
