disableSerialization;
//idc
_idc = param [0, -1, [0]];
_mode = param [1, "", ["string"]];
_cfgItems = [];

switch (_mode) do {

  case ("factions"): {

    _playerSide = str(side player);
    switch (_playerSide) do {

      case ("WEST"): {
          _cfgItems = gameFactionsEast;
      };

      case ("EAST"): {
          _cfgItems = gameFactionsWest;
      };

      case ("GUER"): {
          _cfgItems = gameFactionsEast;
      };

    };

  };

  case ("locations"): {
      _cfgItems = allGameMapMarkers;
  };

  case ("radius"): {
      _cfgItems = [["150","150"],["175","175"],["200","200"],["225","225"],["250","250"]];
  };

  case ("level"): {
      _cfgItems = [["Light","light"],["Medium","medium"],["Heavy","heavy"]];
  };

  case ("recruits"): {

      _playerSide = str(side player);
      switch (_playerSide) do {

        case ("WEST"): {
            _cfgItems = gameFactionsWest;
        };

        case ("EAST"): {
            _cfgItems = gameFactionsEast;
        };

        case ("GUER"): {
            _cfgItems = gameFactionsIndep;
        };

      };

  };

};

lbClear _idc;

{
  _name = _x select 0;
  _cfg = _x select 1;
  _rowIndex = lbAdd [_idc, _name];
  lbSetData [_idc, _rowIndex, _cfg];
} forEach _cfgItems;

if (_mode isEqualTo "level") then {
  lbSetCurSel [_idc, 1];
} else {
  lbSetCurSel [_idc, 0];
};

//hint format ['%1 - %2 - %3', _idc, _selector, _cfgItems];
