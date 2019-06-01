#include "script_component.hpp"
    class CfgPatches {
        class ADDON {
            name = 'COMPONENT';
            units[] = {};
            weapons[] = {};
            requiredVersion = REQUIRED_VERSION;
            requiredAddons[] = {
                "cba_main"
            };
            author = "veteran29";
            VERSION_CONFIG;
        };
    };


#include "CfgEventHandlers.hpp"
#include "GpsSettings.hpp"
#include "ui\RscCustomInfoMiniMap.hpp"
