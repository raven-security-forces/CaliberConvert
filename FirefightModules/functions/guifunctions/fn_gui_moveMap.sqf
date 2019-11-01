_markerPos = param [0, [0,0,0], [[]]];

_map = (findDisplay 720) displayCtrl 1005;

_map ctrlMapAnimAdd [1, 0.1, _markerPos];

ctrlMapAnimCommit _map;

TRUE;
