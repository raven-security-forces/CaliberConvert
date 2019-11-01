//First we need to check if our player has a wallet saved in the mission already.
_playerWallet = [] call s39_fnc_getWallet;

//Next we check what's in our wallet.
if (typeName _playerWallet != "ARRAY") then {
	if (isNull _playerWallet) exitWith {FALSE};
};

_playerWallet select 1;
