//Set our parameters
_idcs = _this;

_firefightMarkerIDC = _idcs select 0;
_factionIDC = _idcs select 1;
_radiusIDC = _idcs select 2;
_levelIDC = _idcs select 3;

_firefightParams = [];
{
  _index = lbCurSel _x;
  _data = lbdata [_x, _index];
  _firefightParams pushBack _data;
} forEach _idcs;

_marker = _firefightParams select 1;
_faction = _firefightParams select 0;
_radius = parseNumber (_firefightParams select 2);
_level = _firefightParams select 3;

[_marker, _faction, _radius, _level] remoteExec ["s39_fnc_initFirefight"];
