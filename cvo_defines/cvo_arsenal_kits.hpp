/*
*   CVO Arsenal Define File
*   Detailed Information: https://github.com/CVO-Org/CVO-Auxiliary/blob/main/addons/arsenal/readme.md
*   Example File: https://github.com/CVO-Org/CVO-Auxiliary/blob/main/.hemtt/missions/Arsenal.Altis/cvo_arsenal_kits.hpp
*/


class cvo_arsenal_kits
{
    editor_layer_name = "cvo_arsenal_objects";
    object_variable_names[] = {"source"};

    // Imports Base from configFile
    import Base from cvo_arsenal_kits;

    // Base Kit - AK47 for everyone!
    class AK74: Base {
        class items {
        };
    };
    
    // Role Kit - Spare Barrels for Machinegunner's!
    class BarrelsForMG: Base {
        role = "Machinegunner";
        class items {
            class ACE_personalAidKit;
        };
    };

};
