#include "settingsDefaults.hpp"

#define GPS_SETTING(NAME)   GVAR(NAME) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(NAME)', DEFAULT)])

class GVAR(GpsSettings) {
    // Zoom
    GPS_SETTING(gpsZoom, GPS_ZOOM_DEFAULT);
    GPS_SETTING(gpsSpeedCoef, GPS_SPEED_COEF_DEFAULT);
    // Road colors
    GPS_SETTING(colorRoads_R, GPS_ROAD_R_DEFAULT);
    GPS_SETTING(colorRoads_G, GPS_ROAD_G_DEFAULT);
    GPS_SETTING(colorRoads_B, GPS_ROAD_B_DEFAULT);
    // Raod alpha
    GPS_SETTING(roads_A, GPS_ROAD_A_DEFAULT);
    GPS_SETTING(roadsFill_A, GPS_ROAD_FILL_A_DEFAULT);
    // Tracks alpha
    GPS_SETTING(tracks_A, GPS_TRACKS_A_DEFAULT);
    GPS_SETTING(tracksFill_A, GPS_TRACKS_FILL_A_DEFAULT);
    // Main roads alpha
    GPS_SETTING(mainRoads_A, GPS_MAINROAD_A_DEFAULT);
    GPS_SETTING(mainRoadsFill_A, GPS_MAINROAD_FILL_DEFAULT);
};
