#define COMPONENT cargo
#define COMPONENT_BEAUTIFIED Cargo
#include "\z\ace\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_CARGO
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_ENABLED_CARGO
    #define DEBUG_SETTINGS DEBUG_ENABLED_CARGO
#endif

#include "\z\ace\addons\main\script_macros.hpp"

#define MAX_LOAD_DISTANCE 5

#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})
