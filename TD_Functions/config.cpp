class cfgPatches {
    class TD_Functions {
        name = "Thaumic Division - Functions";
        authors[]={
            "Gray"
        };
        units[]={};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[]={};
    };
};
class cfgFunctions {
    class TD {
        class functions {
            file = "TD_Functions\functions";
            class propToItem {}; // TD_fnc_propToItem;
            class getLookAtPos {}; // TD_fnc_getLookAtPos;
        };
    };
};