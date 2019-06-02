#include "settingsDefaults.hpp"

// Zoom
[
    QGVAR(gpsZoom),
    "SLIDER",
    [LSTRING(setting_zoom), LSTRING(setting_zoom_desc)],
    [LSTRING(setting_cat), LSTRING(setting_subcat_zoom)],
    [100, 1000, GPS_ZOOM_DEFAULT, 0],
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
    [LSTRING(setting_speedCoef), LSTRING(setting_speedCoef_desc)],
    [LSTRING(setting_cat), LSTRING(setting_subcat_zoom)],
    [1, 100, GPS_SPEED_COEF_DEFAULT, 0],
    2,
    {
        profileNamespace setVariable [QGVAR(gpsSpeedCoef), _this];
        saveProfileNamespace;
    },
    true
] call CBA_fnc_addSetting;

// Raod colors
[
    QGVAR(colorRoads),
    "COLOR",
    [LSTRING(setting_colorRoads), LSTRING(setting_colorRoads_desc)],
    [LSTRING(setting_cat), LSTRING(setting_subcat_roads)],
    [GPS_ROAD_R_DEFAULT, GPS_ROAD_G_DEFAULT, GPS_ROAD_B_DEFAULT],
    2,
    {
        profileNamespace setVariable [QGVAR(colorRoads_R), _this#0];
        profileNamespace setVariable [QGVAR(colorRoads_G), _this#1];
        profileNamespace setVariable [QGVAR(colorRoads_B), _this#2];
        saveProfileNamespace;
    },
    true
] call CBA_fnc_addSetting;
