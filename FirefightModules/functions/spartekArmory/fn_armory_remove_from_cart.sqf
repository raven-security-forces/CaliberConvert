_sourceControl = 1501;
_sourceIndex = _this select 1;

_control = 1501;

_totalControl = 1007;

_curTotalVal = parseNumber (ctrlText _totalControl);

_itemCostData = lnbData [_sourceControl, [_sourceIndex,1]];

_newTotal = (_curTotalVal - (parseNumber _itemCostData));

lnbDeleteRow [_sourceControl,_sourceIndex];

ctrlSetText [_totalControl, str _newTotal];
