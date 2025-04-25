/*
    fnc_getLookAtPos.sqf
    Returns the 3D world coordinates the player is looking at, up to 100m.
*/

params ["_unit"];

private _start = eyePos _unit;
private _dir = eyeDirection _unit;
private _end = _start vectorAdd (_dir vectorMultiply 100);

private _hit = lineIntersectsSurfaces [_start, _end, _unit, objNull, true, 1, "VIEW", "FIRE"];

if (_hit isNotEqualTo []) then {
    (_hit select 0) select 0 // just return the hit position
} else {
    [] // return empty array if nothing is hit
};