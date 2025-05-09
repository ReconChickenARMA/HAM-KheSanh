diag_log ("[CVO] [INIT] (cvo_init.sqf) - START");





// Init SideMission Condition
// cvo_side_fnc_distanceCondition = compile preprocessFile "core\fnc\side\cvo_side_fnc_distanceCondition.sqf";


// Init CVO fullHeal at Medical Cabinet
["vn_b_air_ch47_02_02"] call CVO_Common_fnc_fullHeal;
["vn_b_air_uh1d_01_07"] call CVO_Common_fnc_fullHeal;
["vn_b_armor_m577_02"] call CVO_Common_fnc_fullHeal;


// Init CVO Foritfy Preset
[compileScript ["cvo\logistics\cvo_logistics_init_fortify.sqf"]] call CBA_fnc_directCall;


// Initialize Logistics module
[compileScript ["cvo\logistics\init.sqf"]] call CBA_fnc_directCall;

// Init CVO fullHeal at Medical Cabinet
["vn_b_armor_m577_02"] call CVO_Common_fnc_fullHeal;

// Init CVO Custom Spawnable Objects
//cvo_p_logistics_custom_construction_array
// init to be found in /core/def/mission.sqf

// #### Init Sandstorm
// execVM "cvo\sandstorm\cvo_ss_init.sqf";

// Init CVO Environment Night Time Multiplyer
[compileScript ["cvo\env\cvo_env_init.sqf"]] call CBA_fnc_directCall;


// Starts Server Restart Message + Save Script
//execVM "cvo\misc\cvo_server_restart.sqf";

// Init Players Job Board
execVM "cvo\misc\cvo_jobboard.sqf";

// Init Support Drones
//execVM "cvo\support\cvo_support_init.sqf";

// Init for CVO IED's
execVM "cvo\IED\cvo_ied_init.sqf";

// Init for CVO IED's
execVM "cvo\logistics\cvo_fnc_airlift.sqf";

// Define Misc Functions
// cvo_misc_fnc_gateAnimation = compile preprocessFile "cvo\misc\cvo_gateAnimation.sqf";

cvo_debug = false;

//CVO Earthquake Function
//cvo_misc_fnc_eq = compile preprocessFile "cvo\misc\cvo_eq.sqf";

diag_log ("[CVO] [INIT] (cvo_init.sqf) - END");

