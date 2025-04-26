/*
	Author: Gray

	Description:
		Gets position ATL where player is looking.

	Parameter(s):
        NONE

    Returns:
        Coordinates: [x,y,0]
        
	Example:
		["cfgWeapons","TD_Potions_Large_Health" ] call TD_fnc_propToItem;
*/

_lookPos = screenToWorld [0.5,0.5];


if (true) exitWith {
    _lookPos
};