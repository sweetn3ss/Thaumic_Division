/*
	Author: Mesa

	Description:
		Gets position ATL where player is looking. If the player is
		pointing at an object (cursorTarget) this will attempt to
		return a position on top of that object so props can be
		spawned on it. Otherwise it falls back to the world position
		under the crosshair.

	Parameter(s):
		NONE

	Returns:
		Coordinates: [x,y,z]
*/

private _screenPos = screenToWorld [0.5,0.5];
private _target = cursorTarget;

if (!(_target isEqualTo objNull)) then {
	private _topModelPoint = _target modelToWorld [0,0,1];
	private _topPos = [_topModelPoint select 0, _topModelPoint select 1, (_topModelPoint select 2) + 0.01];
	_topPos
} else {
	_screenPos
};