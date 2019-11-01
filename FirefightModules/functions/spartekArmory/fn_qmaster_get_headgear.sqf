//Clear the listbox
lbClear 1500;

{
_weapon = (configFile >> "cfgWeapons" >> _x);
_cost = "0";
if (initWallet) then {
  _cost = str(getnumber(_weapon >> "value") * 50);
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

} forEach allGameHeadgear;
