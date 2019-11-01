/*
 *
 * Gathers all factions available in the game. Intended to filter out factions
 * that are used for config purposes, and only provide those that can be used
 * in-game.
 *
 * Intended for use as part of the FIBUA spawner UI scripts.
 *
 * Params:
 * None
 *
 * Returns:
 * Array of arrays. Elements of each sub-array are displayname and cfgname
 * for the faction respectively.
*/
_selector = param [0, FALSE,["string"]];
_factionCfgs = [];

switch (_selector) do {

    case ("all"): {
        _factionCfgs = "isNumber ( _x >> 'side') AND getText (_x >> 'displayName') != '' AND getNumber (_x >> 'side') == 0 OR getNumber (_x >> 'side') == 1 OR getNumber (_x >> 'side') == 2" configClasses (configFile >> "CfgFactionClasses");
    };

    case ("WEST"): {
        _factionCfgs = "isNumber ( _x >> 'side') AND getText (_x >> 'displayName') != '' AND getNumber (_x >> 'side') == 1" configClasses (configFile >> "CfgFactionClasses");
    };

    case ("EAST"): {
        _factionCfgs = "isNumber ( _x >> 'side') AND getText (_x >> 'displayName') !='' AND getNumber (_x >> 'side') == 0" configClasses (configFile >> "CfgFactionClasses");
    };

    case ("GUER"): {
        _factionCfgs = "isNumber ( _x >> 'side') AND getText (_x >> 'displayName') != '' AND getNumber (_x >> 'side') == 2" configClasses (configFile >> "CfgFactionClasses");
    };

    case default {
        _factionCfgs = "isNumber ( _x >> 'side') AND getText (_x >> 'displayName') != '' AND getNumber (_x >> 'side') == 0 OR getNumber (_x >> 'side') == 1 OR getNumber (_x >> 'side') == 2" configClasses (configFile >> "CfgFactionClasses");
    };

};


_factions = [];

{

_displayName = getText (_x >> 'displayName');
_cfgName = configName _x;
_factions pushBack [_displayName, _cfgName];

} forEach _factionCfgs;

_factions;
