_srcIdc = 1501;
_soldiers = [];

_numRows = lbSize _srcIdc;

if(_numRows <= 0) exitWith {
  _handle = [] spawn {hint "No soldiers selected!"; sleep 5; hintSilent ""};
};

_grpSize = count units group player;
_newGrpSize = _grpSize + _numRows;
if(_newGrpSize > 8) exitWith {
  _grpTooBig = true;
  _handle = [] spawn {hint "Too many soldiers selected!"; sleep 5; hintSilent ""};

};


if (_grpTooBig) exitWith {false};

_soldiers = [];

for "_i" from 0 to (_numRows - 1) do {
  _data = lbData [_srcIdc, _i];
  _soldiers pushBack _data;
};

{
  group player createUnit [_x, position player, [], 25, "NONE"];
} forEach  _soldiers;


true;
