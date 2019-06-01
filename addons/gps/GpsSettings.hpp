#include "settingsDefaults.hpp"

class GVAR(GpsSettings) {
    GVAR(gpsZoom) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(gpsZoom)', GPS_ZOOM_DEFAULT)]);
    GVAR(gpsSpeedCoef) = QUOTE(profileNamespace getVariable [ARR_2('GVAR(gpsSpeedCoef)', GPS_SPEED_COEF_DEFAULT)]);
};
