class RscControlsGroupNoScrollbars;
class RscMapControl;

#define GPS_SETTING_VAL(NAME)   QUOTE(call compile getText (configFile >> 'GVAR(GpsSettings)' >> 'GVAR(NAME)'))

class RscCustomInfoMiniMap {
    class Controls {
        class MiniMap: RscControlsGroupNoScrollbars {
            class Controls {
                class CA_MiniMap: RscMapControl {
                    // Dimensions of GPS area in meters,
                    // this config entry is present only on RscCustomInfoAirborneMiniMap in vanilla
                    // engine default seems to be 200
                    speedCoefSpeed0 = GPS_SETTING_VAL(gpsZoom);
                    // How much the GPS unzooms depending on speed,
                    // this config entry is present only on RscCustomInfoAirborneMiniMap in vanilla
                    // engine default seems to be around 30
                    speedCoefSpeedMax = GPS_SETTING_VAL(gpsSpeedCoef);
                };
            };
        };
    };
};
