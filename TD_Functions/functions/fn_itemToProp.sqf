/*
	Author: Mesa

	Description:
		Allows for ACE interaction to simply and reliably turn an inventory item into
        a prop placed on the ground.

	Parameter(s):
        0: classname of item desired

	Example:
		["this","player","TD_Potions_Large_Health" ] call TD_fnc_itemToProp;
*/

params ["_itemClass"];

_itemDropped = createVehicle [_itemClass, position player, [], 0, "CAN_COLLIDE"];
player removeItem _itemClass;