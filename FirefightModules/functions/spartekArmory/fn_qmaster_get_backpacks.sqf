//Clear the listbox
lbClear 1500;

{
_weapon = (configFile >> "CfgVehicles" >> _x);

_isStaticWep = isClass (configFile >> "CfgVehicles" >> _x >> "assembleInfo");
_cost = "0";
if(_isStaticWep) then {
  _cost = str(2500);
} else {
  _cost = str(150);
};

if (initWallet) then {
  _cost = _cost
} else {
  _cost = "0";
};

_displayName = getText(_weapon >> "displayName");
_displayImage = getText(_weapon >> "picture");
_class = _x;

_ctrl = 1500;

_index = lnbAddRow [_ctrl, [_displayName, ("$" + _cost)]];
lnbSetPicture [_ctrl, [_index,0],_displayImage];

lnbSetData [_ctrl, [_index, 0], _class];
lnbSetData [_ctrl, [_index, 1], _cost];

} forEach allGamePacks;
