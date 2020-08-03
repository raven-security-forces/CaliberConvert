
_array = [];

_music = ["Funny_How_You_Sometimes_Find_Things"];

["InitDummy",["Stratis",[3081.4,2148.38,5.73682],18.53,0.75,[2.04545,0],10,0,720.033,0.3,1,1,0,1]] call bis_fnc_camera;

_play_music = _music;
_music_play = _play_music call BIS_fnc_selectRandom;
0 fadeMusic 1;
playMusic _music_play;
addMusicEventHandler ["MusicStop", {[] spawn {sleep 1; playMusic _music_play}}];