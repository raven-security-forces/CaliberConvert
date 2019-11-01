  //Define our IDCs for reference later.
_cartID = 1501;
_totalID = 1007;
_walletID = 1003;

_totalCost = parseNumber (ctrlText _totalID);
_totalCash = parseNumber (ctrlText _walletID);

_newTotalCash = (_totalCash - _totalCost);
_numRows = (lnbSize _cartID select 0);

if(_newTotalCash < 0) then {

  _handle = [_totalCost, _totalCash] spawn {
    hint format ["Not enough cash. Need %1, have %2", _this select 0, _this select 1];
    sleep 3;
    hintSilent "";
};

} else {

  _toAdd = [];

  for "_i" from 0 to (_numRows - 1) do {

    _name = lnbData [_cartID, [_i, 0]];
    _quant = 1;
    _isMagazine = isClass (configFile >> "CfgMagazines" >> _name);
    if(_isMagazine) then {
      _quant = 5;
    };
    _toAdd pushBack [_name, _quant];

  };

  {
    armoryOutput addItemCargoGlobal [_x select 0, _x select 1]
  } forEach _toAdd;

  [player, _totalCost] call s39_fnc_loseMoney;
  ctrlSetText [_walletID, str(_newTotalCash)];
  ctrlSetText [_totalID, str(0)];
  lbClear _cartID;
  _handle = [] spawn {
    hintSilent "Purchase Successful! Check the equipment box.";
    sleep 3;
    hintSilent "";
  };
};
