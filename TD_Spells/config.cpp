class cfgPatches {
    class TD_Spells {
        name = "Thaumic Division - Spells";
        authors[]={
            "Gray",
            "Indie"
        };
        units[]={};
        weapons[]={};
        requriedVersion = 0.1;
        requiredAddons[]={
            "TD_Items"
        };
    };
};
class cfgWeapons {
    class ItemCore;
    class InventoryWeapon_Base_F;
    class TD_Casting_Focus_Basic: ItemCore {
        author = "Gray";
        scope = 2;
        scopeArsenal = 2;
        displayName = "Alchemist's Pocket Tools";
        descriptionShort = "A basic alchemical toolkit.";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\TD_Spells\data\coal_icon.paa";
        detectRange = -1;
        simulation = "ItemMineDetector";
        useAsBinocular = 0;
		type = 4096;
		class ItemInfo: InventoryWeapon_Base_F
		{
			mass = 1;
		};
    };
    class TD_Reagent_Basic_Coal: ItemCore {
        author = "Gray";
        scope = 2;
        scopeArsenal = 2;
        displayName = "Small Lump of Coal";
        descriptionShort = "An alchemical reagent of ignition.";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\TD_Spells\data\coal_icon.paa";
        detectRange = -1;
        simulation = "ItemMineDetector";
        useAsBinocular = 0;
		type = 4096;
		class ItemInfo: InventoryWeapon_Base_F
		{
			mass = 1;
		};
    };
    class TD_Reagent_Basic_Stone: ItemCore {
        author = "Gray";
        scope = 2;
        scopeArsenal = 2;
        displayName = "Small Rock";
        descriptionShort = "An alchemical reagent of stone.";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\TD_Spells\data\rock_icon.paa";
        detectRange = -1;
        simulation = "ItemMineDetector";
        useAsBinocular = 0;
		type = 4096;
		class ItemInfo: InventoryWeapon_Base_F
		{
			mass = 1;
		};
    };
};
class cfgVehicles {
	class Man;
	class CAManBase : Man {
		class ACE_SelfActions {
			/*class bcg_anims {
				displayName = "BCG Fortnite";
				icon = "";
				condition = "(""BCG_Fortnite_Key"" in (items _player))";
				class bcg_Dance {
					displayName = "Skinwalking";
					icon = "";
					condition = "";
					statement = "[player, 'bcg_fortnitedance01'] remoteExec ['switchMove', 0]";
					exceptions[]={};
				};
				class BCG_Cancel
				{
					displayName = "stopp";
					icon = "\KKA3_ACE_Extension_Anim\data\ui_cancel.paa";
					condition = "";
					exceptions[] = {};
					statement = "[ace_player, ''] remoteExec ['switchMove', 0]";
				};
			};*/
            class td_crafting {
                displayName = "Reagent Crafting";
                icon = "";
                condition = "(""TD_Casting_Focus_Basic"" in (items _player))";
                statement = "";
                class td_spell_basic_bonfire {
                    displayName = "Summon Bonfire";
                    icon = "";
                    condition = "(""TD_Reagent_Basic_Coal"" in (items player) and ""TD_Reagent_Basic_Stone"" in (items player))";
                    statement = "hint str time";
                };
            };
		};
	};
};