_srcIdc = param [0, -1, [0]];
_srcIndex = param [1, -1, [0]];
_addCart = param [2, false, [false]];
_removeCart = param [3, false, [false]];

_tgtPicIdc = 1200;
_tgtLbIdc = 1501;

_displayName = lbText [_srcIdc, _srcIndex];
_soldierCfg = lbData [_srcIdc, _srcIndex];

_image = getText (configFile >> "CfgVehicles" >> _soldierCfg >> "editorPreview");

ctrlSetText [_tgtPicIdc, _image];

if (_addCart) then {

  _count = lbSize _tgtLbIdc;

  if (_count > 7) then {
    _handle = [] spawn {hint "Too many soldiers!"; sleep 5; hintSilent ""};
  } else {
    _index = lbAdd [_tgtLbIdc, _displayName];
    lbSetData [_tgtLbIdc, _index, _soldierCfg];
  };

};

if (_removeCart) then {

  lbDelete [_srcIdc, _srcIndex];

};
