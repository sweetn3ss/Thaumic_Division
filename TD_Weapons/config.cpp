class cfgPatches {
    class TD_Weapons {
        name = "Thaumic Division - Weapons";
        authors[]={
            "Gray"
        };
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={
            "WBK_NewMeleeWEaponsTier2"
        };
    };
};
class cfgWeapons {
    class WBK_SmallHammer;
	class TD_TestWand: WBK_SmallHammer
	{
		IMS_WeaponType = "OneHanded";
		IMS_Melee_Param_Sounds = "[""generis_empty_1"",""generis_empty_2"",""generis_empty_3"",""generis_empty_4"",""generis_empty_5""]";
		IMS_Melee_Param_Damage = 0.1;
		//model = "TD_Weapons\data\elder_wand.p3d";
		displayName = "Elder Wand";
		descriptionShort = "A wizard's focusing device.";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={
			"BCG_Melee\data\thunderhammer\camo1_CO.paa",
			"BCG_Melee\data\thunderhammer\camo2_CO.paa"
		};
	};
};