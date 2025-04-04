
/* ----------------------------------------------------------------------------
Function: btc_hideout_fnc_create_composition

Description:
    Create a random hideout composition.

Parameters:
    _pos - Position. [Array]

Returns:
    _result - The flag. [Object]

Examples:
    (begin example)
        _result = [getPos (allPlayers#0)] call btc_hideout_fnc_create_composition;
    (end)

Author:
    Giallustio

---------------------------------------------------------------------------- */

params [
    ["_pos", [0, 0, 0], [[]]]
];

private _type_bigbox = selectRandom ["Land_vn_pavn_weapons_cache","Land_vn_pavn_weapons_stack1", "Land_vn_pavn_weapons_stack2", "Land_vn_pavn_weapons_stack3"];
private _power = selectRandom ["vn_o_item_firstaid_01", "vn_o_item_canteen_02", "vn_o_item_canteen_01", "vn_o_item_shovel_02", "vn_o_item_shovel_01", "vn_o_item_machete_02", "vn_o_item_machete_01", "vn_o_item_binocs_case_01", "vn_o_item_bedroll_01", "Land_vn_pavn_pouch","Land_vn_c_prop_pot_fire_01", "Land_vn_c_prop_pot_01"];

private _composition_hideout = [
    [selectRandom btc_type_campfire,0,[-2.30957,-1.02979,0]],
    [_type_bigbox,121.331,[0.675781,-1.52539,0]],
    [selectRandom btc_type_bigbox,227.166,[2.66504,1.4126,0]],
    [selectRandom btc_type_sleepingbag,135.477,[0.758789,-3.91309,0]],
    [_power,77.6499,[0.418945,3.51855,0]],
    [selectRandom btc_type_seat,171.123,[-2.08203,-3.39795,0]],
    ["vn_flag_vc_dmg",0,[0,0,0]],
    [selectRandom btc_type_sleepingbag,161.515,[-0.726563,-4.76953,0]],
    [selectRandom btc_type_satelliteAntenna,304.749,[-3.71973,2.46143,0]],
    [selectRandom btc_type_seat,279.689,[-4.52783,-0.76416,0]],
    [selectRandom btc_type_seat,238.639,[-3.89014,-2.94873,0]],
    [selectRandom btc_type_bigbox,346.664,[3.66455,-1.72998,0]],
    [selectRandom btc_type_box,36.4913,[-2.65088,-4.5625,0]],
    [selectRandom btc_type_tent,86.984,[3.19922,-4.36133,0]],
    [selectRandom btc_type_tent,10,[-4.35303,-5.66309,0]],
    [selectRandom btc_type_tent,300,[-8.47949,-1.64063,0]]
];

private _composition = [_pos, random 360, _composition_hideout] call btc_fnc_create_composition;

_composition select ((_composition apply {typeOf _x}) find _type_bigbox);
