class cfgPatches {
    class TD_Items {
        name = "Thaumic Division - Items";
        authors[]={
            "gray",
            "neifer",
            "the voices"
        };
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={
            "ace_field_rations"
        };
    };
};
class cfgEditorSubcategories {
    class TD_Props {
        displayName = "Wizard Items";
    };
};
class cfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    // this is where the fun begins
    class TD_Potions_Health: ACE_ItemCore {
        displayName = "Potion of Health";
        scope = 2;
        author = "Gray";
        descriptionShort = "A potion concocted of the finest ingredients, to mend one's wounds.";
        model = "\TD_Items\data\large_potion.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
        acex_field_rations_consumeAnims[] = {"ace_field_rations_drinkStand","ace_field_rations_drinkCrouch","ace_field_rations_drinkProne"};
        acex_field_rations_consumeSounds[] = {"ace_field_rations_drink1","ace_field_rations_drink1","ace_field_rations_drink2"};
        acex_field_rations_consumeText = "Drinking from %1...";
        acex_field_rations_consumeTime = 10;
        acex_field_rations_replacementItem = "ACE_Canteen_Half";
        ACE_isFieldRationItem = 1;
    };
    class TD_Potions_Empty: ACE_ItemCore {
        displayName = "Potion of Health (Empty)";
        scope = 2;
        author = "Gray";
        descriptionShort = "An empty bottle, once filled with potion.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        ACE_isFieldRationItem = 0;
    };
};
class cfgVehicles {
    class Land_DrillAku_F;
    class TD_Potions_Health: Land_DrillAku_F {
        author = "Gray";
        scope = 2;
        scopeCurator = 2;
        displayName = "Potion of Health";
        editorSubcategory = "TD_Props";
        model = "\TD_Items\data\large_potion.p3d";
    };
};