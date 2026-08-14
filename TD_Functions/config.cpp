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
            class getCiggy {}; // TD_fnc_getCiggy;
            class itemToProp {}; // TD_fnc_itemToProp;
            class summonBonfire {}; // TD_fnc_summonBonfire;
        };
    };
    class TD_Init {
        class functions {
            file = "TD_Functions\functions";
            class postInit {
                postInit = 1;
            };
        };
    };
};