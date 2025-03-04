
[compileScript ["core\init.sqf"]] call CBA_fnc_directCall;

[compileScript ["cvo\define\cvo_arsenal_define.sqf"]] call CBA_fnc_directCall;
[compileScript ["cvo\define\cvo_csc_define.sqf"]] call CBA_fnc_directCall;

[compileScript ["cvo\cvo_init.sqf"]] call CBA_fnc_directCall;

// Init Interative Voices via Script
[] call vn_fnc_initsituationalawareness;

// Init Gestures via Script
[objNull, [], true] call VN_fnc_module_UI_gestureMenu_init;