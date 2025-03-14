
[compileScript ["core\init.sqf"]] call CBA_fnc_directCall;

[compileScript ["cvo\define\cvo_arsenal_define.sqf"]] call CBA_fnc_directCall;
[compileScript ["cvo\define\cvo_csc_define.sqf"]] call CBA_fnc_directCall;

[compileScript ["cvo\cvo_init.sqf"]] call CBA_fnc_directCall;


// Init Interative Voices via Script
if (isServer) then {
    [] call vn_fnc_initsituationalawareness;
};

// VN Specials
if (hasInterface) then {
    // Init Gesture Menu with a default range of 60m
    [objNull, [], true] call vn_fnc_module_UI_gestureMenu_init;
};


// ["INIT", [btc_startDate]] call CVO_fnc_mapinfo;