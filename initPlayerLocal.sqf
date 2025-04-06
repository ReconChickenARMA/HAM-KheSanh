player addEventHandler ["Killed", {

    missionNamespace setVariable ["player_hunger", player getVariable ["acex_field_rations_hunger", 0], false];
    missionNamespace setVariable ["player_thrist", player getVariable ["acex_field_rations_thrist", 0], false];


}];
player addEventHandler ["Respawn", {

    private _hunger = missionNamespace getVariable ["player_hunger", "404"];
    private _thirst = missionNamespace getVariable ["player_thrist", "404"];

    if (_hunger isNotEqualTo "404") then { player setVariable ["acex_field_rations_hunger", _hunger, false]; };
    if (_thirst isNotEqualTo "404") then { player setVariable ["acex_field_rations_thrist", _thirst, false]; };
}];