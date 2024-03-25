#ifndef LaunchState_h
#include <Arduino.h>
#include "SensorBoard.ino"
enum class LaunchState {
    PreIgnition,
    Ignition,
    Apogee,
    Thousand_ft,
    Descent,
    Touchdown,
};
#endif