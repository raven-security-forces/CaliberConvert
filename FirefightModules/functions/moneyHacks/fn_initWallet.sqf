//This is going to be how we define our player 'wallets' and make them persistent.
//First we need to check if our player has a wallet saved in the mission already.
_walletName = name player + "_wallet";

_playerWallet = missionNamespace getVariable _walletName;

if (isNil "_playerWallet") then {
	missionNamespace setVariable [_walletName, [name player, 0]];
	_playerWallet = missionNamespace getVariable _walletName;
};

_playerWallet
