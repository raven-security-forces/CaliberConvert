//Get our wallet
_wallet = [] call s39_fnc_getWallet;

hint format ["You have $%1", _wallet select 1];
sleep 5;
hintSilent "";

_wallet
