_sourceControl = 1500;
_sourceIndex = _this select 1;

_control = 1501;

_totalControl = 1007;
_curTotalVal = parseNumber (ctrlText _totalControl);


_itemClass = lnbData [_sourceControl, [_sourceIndex, 0]];
_itemName = lnbText [_sourceControl, [_sourceIndex, 0]];
_itemImage = lnbPicture [_sourceControl, [_sourceIndex, 0]];
_itemCost = lnbText [_sourceControl, [_sourceIndex,1]];
_itemCostData = lnbData [_sourceControl, [_sourceIndex,1]];


_index = lnbAddRow [_control, [_itemName, _itemCost]];
lnbSetPicture [_control, [_index,0],_itemImage];

lnbSetData [_control, [_index, 0], _itemClass];
lnbSetData [_control, [_index, 1], _itemCostData];

_newTotal = (_curTotalVal + (parseNumber _itemCostData));

ctrlSetText [_totalControl, str _newTotal];

// Adds a new row to the cart IDC with data values:
// Col1             Col2
// classname        cost
//
//
//
