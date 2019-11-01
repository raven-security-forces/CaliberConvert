_srcIdc = param [0, -1, [0]];
_srcIndex = param [1, -1, [0]];
_tgtIdc = param [2, -1, [0]];


_faction = lbData [_srcIdc, _srcIndex];


_soldierConfigs = "getText (_x >> 'simulation') == 'soldier' AND getText (_x >> 'faction') == _faction AND getNumber (_x >> 'scope') isEqualTo 2 AND getText (_x >> 'role') != 'Unarmed' AND getText (_x >> 'role') != 'Crewman'" configClasses (configFile >> 'CfgVehicles' );

_soldiers = [];

{
  _soldier = (_x);
  _displayName = getText(_soldier >> "displayName");
  _cfgName = configName _x;
  _soldiers pushBack [_displayName, _cfgName];
} forEach _soldierConfigs;

lbClear _tgtIdc;

{

  _displayName = _x select 0;
  _cfgName = _x select 1;

  _index = lbAdd [_tgtIdc, _displayName];
  lbSetData [_tgtIdc, _index, _cfgName];

} forEach _soldiers;
