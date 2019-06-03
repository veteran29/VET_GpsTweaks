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

                    // Roads colors
                    colorRoads[] = {
                        GPS_SETTING_VAL(colorRoads_R),
                        GPS_SETTING_VAL(colorRoads_G),
                        GPS_SETTING_VAL(colorRoads_B),
                        GPS_SETTING_VAL(roads_A)
                    };
                    colorRoadsFill[] = {
                        GPS_SETTING_VAL(colorRoads_R),
                        GPS_SETTING_VAL(colorRoads_G),
                        GPS_SETTING_VAL(colorRoads_B),
                        GPS_SETTING_VAL(roadsFill_A)
                    };

                    // Tracks colors (smaller dirt roads etc.)
                    colorTracks[] = {
                        GPS_SETTING_VAL(colorRoads_R),
                        GPS_SETTING_VAL(colorRoads_G),
                        GPS_SETTING_VAL(colorRoads_B),
                        GPS_SETTING_VAL(tracks_A)
                    };
                    colorTracksFill[] = {
                        GPS_SETTING_VAL(colorRoads_R),
                        GPS_SETTING_VAL(colorRoads_G),
                        GPS_SETTING_VAL(colorRoads_B),
                        GPS_SETTING_VAL(tracksFill_A)
                    };

                    // Main roads colors
                    colorMainRoads[] = {
                        GPS_SETTING_VAL(colorRoads_R),
                        GPS_SETTING_VAL(colorRoads_G),
                        GPS_SETTING_VAL(colorRoads_B),
                        GPS_SETTING_VAL(mainRoads_A)
                    };
                    colorMainRoadsFill[] = {
                        GPS_SETTING_VAL(colorRoads_R),
                        GPS_SETTING_VAL(colorRoads_G),
                        GPS_SETTING_VAL(colorRoads_B),
                        GPS_SETTING_VAL(mainRoadsFill_A)
                    };

                    // Forests colors
                    colorForest[] = {
                        GPS_SETTING_VAL(colorForests_R),
                        GPS_SETTING_VAL(colorForests_G),
                        GPS_SETTING_VAL(colorForests_B),
                        GPS_SETTING_VAL(forests_A)
                    };
                    colorForestBorder[] = {
                        GPS_SETTING_VAL(colorForests_R),
                        GPS_SETTING_VAL(colorForests_G),
                        GPS_SETTING_VAL(colorForests_B),
                        GPS_SETTING_VAL(forestsBorder_A)
                    };
                };
            };
        };
    };
};
