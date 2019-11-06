//how much money we want to add, passed from the eventhandler.
private _killer = _this select 0;
private _moneyToAdd = _this select 1;

//Get the players current wallet count.
_walletName = name player + "_wallet";

_playerWallet = missionNamespace getVariable _walletName;

//Get how much is in the wallet.
private _curMoney = _playerWallet select 1;

//Sum up our values.
private _newTotal = _curMoney + _moneyToAdd;
diag_log format ["Killer: %1 -- Added Money: %2", _killer, _moneyToAdd];

_isPlayer = isPlayer _killer;
if (_isPlayer) then {

  //Set the new wallet value
  missionNamespace setVariable [_walletName, [(name _killer), _newTotal]];

  //Display the new wallet amount
  _playerWallet = missionNamespace getVariable _walletName;

  [_moneyToAdd] spawn {
  hint format ["Made $%1", _this select 0];

  sleep 5;

  hintSilent "";
  };

};


_playerWallet;