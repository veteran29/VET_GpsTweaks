#include "settingsDefaults.hpp"

[
    QGVAR(gpsZoom),
    "SLIDER",
    LSTRING(setting_gpsZoom),
    LSTRING(setting_cat),
    [100, 1000, GPS_ZOOM_DEFAULT],
    2,
    {
        profileNamespace setVariable [QGVAR(gpsZoom), _this];
        saveProfileNamespace;
    },
    true
] call CBA_fnc_addSetting;


[
    QGVAR(gpsSpeedCoef),
    "SLIDER",
    LSTRING(setting_gpsSpeedCoef),
    LSTRING(setting_cat),
    [1, 100, GPS_SPEED_COEF_DEFAULT],
    2,
    {
        profileNamespace setVariable [QGVAR(gpsSpeedCoef), _this];
        saveProfileNamespace;
    },
    true
] call CBA_fnc_addSetting;
