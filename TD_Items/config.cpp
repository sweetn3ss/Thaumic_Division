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
class cfgAmmo {
    class ACE_SatchelCharge_Remote_Ammo_Thrown;
    class TD_Grenade_HE_Ammo: ACE_SatchelCharge_Remote_Ammo_Thrown {
        hit=0;
		indirectHit=0;
		indirectHitRange=0;
		defaultMagazine="MM_Bubble_Mag";
		model="\TD_Items\data\impact_stone.p3d";
		explosive=0;
		explosionType="";
		mineModelDisabled="\TD_Items\data\impact_stone.p3d";
		triggerWhenDestroyed=0;
		explosionEffects="";
		CraterEffects="";
		soundHit1[]= {
			"",
			0,
			0,
			0
		};
		multiSoundHit[]={};
		mineInconspicuousness=9999;
		timetolive=15;
		explosionTime=6;
		effectFlare="";
		effectsFire="";
		effectsMissile="";
		effectsSmoke="";
		explosionEffectsDir="";
		explosionForceCoef="";
		explosionPos="";
		explosionEffectsRadius=0;
		explosionSoundEffect="";
		SoundSetExplosion[]= {
			""
		};
		class CamShakeExplode {
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
    };
};
class cfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    
    // this is where the fun begins
    class TD_Potions_Large_Health: ACE_ItemCore {
        displayName = "Potion of Health";
        scope = 2;
        author = "Gray";
        descriptionShort = "A potion concocted of the finest ingredients, to mend one's wounds.";
        model = "\TD_Items\data\large_potion.p3d";
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\large_pot_camo1_ca.paa",
            "TD_Items\data\large_pot_camo2_co.paa",
            "TD_Items\data\large_pot_camo3_ca.paa"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
        acex_field_rations_consumeAnims[] = {"ace_field_rations_drinkStand","ace_field_rations_drinkCrouch","ace_field_rations_drinkProne"};
        acex_field_rations_consumeSounds[] = {"ace_field_rations_drink1","ace_field_rations_drink1","ace_field_rations_drink2"};
        acex_field_rations_consumeText = "Drinking from %1...";
        acex_field_rations_consumeTime = 10;
        acex_field_rations_replacementItem = "TD_Potions_Large_Empty";
        ACE_isFieldRationItem = 1;
    };
    class TD_Potions_Small_Invis: ACE_ItemCore {
        displayName = "Potion of Invisibility";
        scope = 2;
        author = "Gray";
        descriptionShort = "A potion concocted of the finest ingredients, to mend one's wounds.";
        model = "\TD_Items\data\small_potion.p3d";
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\small_pot_camo1_ca.paa",
            "TD_Items\data\small_pot_camo2_co.paa",
            "TD_Items\data\small_pot_camo3_ca.paa"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        acex_field_rations_consumeAnims[] = {"ace_field_rations_drinkStand","ace_field_rations_drinkCrouch","ace_field_rations_drinkProne"};
        acex_field_rations_consumeSounds[] = {"ace_field_rations_drink1","ace_field_rations_drink1","ace_field_rations_drink2"};
        acex_field_rations_consumeText = "Drinking from %1...";
        acex_field_rations_consumeTime = 10;
        acex_field_rations_replacementItem = "TD_Potions_Small_Empty";
        ACE_isFieldRationItem = 1;
    };
    class TD_Potions_Large_Empty: ACE_ItemCore {
        displayName = "Empty Potion";
        scope = 2;
        author = "Gray";
        descriptionShort = "A large empty bottle, once filled with potion.";
        model = "\TD_Items\data\large_potion.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\large_pot_camo1_ca.paa",
            "TD_Items\data\large_pot_empty_co.paa",
            ""
        };
        ACE_isFieldRationItem = 0;
    };
    class TD_Potions_Small_Empty: ACE_ItemCore {
        displayName = "Empty Potion";
        scope = 2;
        author = "Gray";
        descriptionShort = "A small empty bottle, once filled with potion.";
        model = "\TD_Items\data\small_potion.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\small_pot_camo1_ca.paa",
            "TD_Items\data\small_pot_camo2_co.paa",
            ""
        };
        ACE_isFieldRationItem = 0;
    };
    class TD_Potions_Medium_Yeet: ACE_ItemCore {
        displayName = "Splash Potion";
        scope = 2;
        author = "Gray";
        descriptionShort = "A strange bottle, filled with a volatile potion.";
        model = "\TD_Items\data\yeet_potion.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\yeet_potion_camo1_ca.paa",
            "TD_Items\data\yeet_potion_camo2_co.paa",
            "TD_Items\data\yeet_potion_camo3_ca.paa"
        };
        ACE_isFieldRationItem = 0;
    };
};
class cfgVehicles {
    class Land_DrillAku_F;
    class TD_Potions_Large_Health: Land_DrillAku_F {
        author = "Gray";
        scope = 2;
        scopeCurator = 2;
        displayName = "Large Potion of Health";
        editorSubcategory = "TD_Props";
        model = "\TD_Items\data\large_potion.p3d";
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\large_pot_camo1_ca.paa",
            "TD_Items\data\large_pot_camo2_co.paa",
            "TD_Items\data\large_pot_camo3_ca.paa"
        };
    };
    class TD_Potions_Small_Invis: TD_Potions_Large_Health {
        author = "Gray";
        scope = 2;
        scopeCurator = 2;
        displayName = "Small Potion of Invisibility";
        editorSubcategory = "TD_Props";
        model = "\TD_Items\data\small_potion.p3d";
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\small_pot_camo1_ca.paa",
            "TD_Items\data\small_pot_camo2_co.paa",
            "TD_Items\data\small_pot_camo3_ca.paa"
        };
    };
    class TD_Potions_Large_Empty: TD_Potions_Large_Health {
        author = "Gray";
        scope = 2;
        scopeCurator = 2;
        displayName = "Large Potion Bottle";
        editorSubcategory = "TD_Props";
        model = "\TD_Items\data\large_potion.p3d";
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\large_pot_camo1_ca.paa",
            "TD_Items\data\large_pot_empty_co.paa",
            ""
        };
    };
    class TD_Potions_Small_Empty: TD_Potions_Small_Invis {
        author = "Gray";
        scope = 2;
        scopeCurator = 2;
        displayName = "Small Potion Bottle";
        editorSubcategory = "TD_Props";
        model = "\TD_Items\data\small_potion.p3d";
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\small_pot_camo1_ca.paa",
            "TD_Items\data\small_pot_camo2_co.paa",
            ""
        };
    };
    class TD_Grenades_Impact_Stone: Land_DrillAku_F {
        author = "Gray";
        scope = 2;
        scopeCurator = 2;
        displayName = "Impact Stone";
        editorSubcategory = "TD_Props";
        model = "\TD_Items\data\impact_stone.p3d";
        hiddenSelections[]={
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\impact_stone_camo1_co.paa",
            "TD_Items\data\impact_stone_camo2_ca.paa"
        };
    };
    class TD_Grenades_Impact_Brick: Land_DrillAku_F {
        author = "Gray";
        scope = 2;
        scopeCurator = 2;
        displayName = "Magician's Brick";
        editorSubcategory = "TD_Props";
        model = "\TD_Items\data\magicians_brick.p3d";
        hiddenSelections[]={
            "camo1"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\brick_camo1_co.paa"
        };
    };
    class TD_Potions_Medium_Yeet: Land_DrillAku_F {
        author = "Gray";
        scope = 2;
        scopeCurator = 2;
        displayName = "Yeet Potion";
        editorSubcategory = "TD_Props";
        model = "\TD_Items\data\yeet_potion.p3d";
        hiddenSelections[]={
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]={
            "TD_Items\data\yeet_potion_camo1_ca.paa",
            "TD_Items\data\yeet_potion_camo2_co.paa",
            "TD_Items\data\yeet_potion_camo3_ca.paa"
        };
    };
    class TD_Summon_Cigarettes_FH: Land_DrillAku_F {
        author = "Gray";
        scope = 2;
        scopeCurator = 2;
        displayName = "500 Cigarettes";
        editorSubcategory = "TD_Props";
        model = "\TD_Items\data\500cigs.p3d";
    };
};