//Get all of our map  markers, then filter by name to get the
// positions we want.

_mapMarkers = allMapMarkers;

_filteredMarkers = [];

{
    _inString = ["ffArea", _x] call BIS_fnc_inString;
    if (_inString) then {
      _filteredMarkers pushBack [(markerText _x),_x];
    };

} forEach _mapMarkers;


_filteredMarkers;
