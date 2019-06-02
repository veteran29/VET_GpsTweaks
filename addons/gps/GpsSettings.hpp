#include "settingsDefaults.hpp"

class GVAR(GpsSettings) {
    // Zoom
    GVAR(gpsZoom) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(gpsZoom)', GPS_ZOOM_DEFAULT)]);
    GVAR(gpsSpeedCoef) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(gpsSpeedCoef)', GPS_SPEED_COEF_DEFAULT)]);
    // Road colors
    GVAR(colorRoads_R) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(colorRoads_R)', GPS_ROAD_R_DEFAULT)]);
    GVAR(colorRoads_G) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(colorRoads_G)', GPS_ROAD_G_DEFAULT)]);
    GVAR(colorRoads_B) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(colorRoads_B)', GPS_ROAD_B_DEFAULT)]);
    // Raod alpha
    GVAR(roads_A) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(roads_A)', GPS_ROAD_A_DEFAULT)]);
    GVAR(roadsFill_A) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(roadsFill_A)', GPS_ROAD_FILL_A_DEFAULT)]);
    // Tracks alpha
    GVAR(tracks_A) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(tracks_A)', GPS_TRACKS_A_DEFAULT)]);
    GVAR(tracksFill_A) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(tracksFill_A)', GPS_TRACKS_FILL_A_DEFAULT)]);
    // Main roads alpha
    GVAR(mainRoads_A) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(mainRoads_A)', GPS_MAINROAD_A_DEFAULT)]);
    GVAR(mainRoadsFill_A) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(mainRoadsFill_A)', GPS_MAINROAD_FILL_DEFAULT)]);
};
