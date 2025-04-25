class cfgPatches {
    class TD_Medicine {
        name = "Thaumic Division - Medicine";
        authors[]={
            "Gray"
        };
        units[]={};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[]={
            "TD_Items",
            "ace_medical_treatment"
        };
    };
};
class Ace_Medical_Treatment_Actions {
    class Morphine;
    class Painkillers;
    class TXA;
    class EACA;
    class PersonalAidKit;
    class TD_Potions_Large_Health_Act: EACA {
        displayName = "Push Health Potion (Large)";
        displayNameProgress = "Pushing Large Potion of Health";
        condition = "_patient call ace_medical_status_fnc_isInStableCondition";
        treatmentTime = 8;
        allowedSelections[]={"Head"};
        category = "medication";
        items[]={"TD_Potions_Large_Health"};
        callbackSuccess = "";
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        sounds[]={{"\z\ace\addons\field_rations\sounds\drink2.ogg",1,1,50}};
        litter[]={{"TD_Potions_Large_Empty"}};
    };
};