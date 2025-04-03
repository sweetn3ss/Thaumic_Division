/*
	Author: Gray

	Description:
		Allows for ACE interaction to simply and reliably turn a prop placed on the ground
        into an inventory item.

	Parameter(s):
        0: classname of item desired

	Example:
		["cfgWeapons","TD_Potions_Large_Health" ] call TD_fnc_propToItem;
*/

params ["_target","_player","_itemClass"];

_player addItem _itemClass;
deleteVehicle _target;