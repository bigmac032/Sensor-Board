#include "LaunchState.h"
#include <Arduino.h>
#include "SensorBoard.ino"
#include "SixDOF.h"
#include "PHT.h"
#include "MPU9250.h"
SixDOF _6DOF;
PHT Alt;
MPU9250 mpu;
TwoWire I2C_two(1);

LaunchState::LaunchState(){
}
LaunchState current_state = LaunchState::PreIgnition();



switch (current_state){
    case(LaunchState::PreIgnition()):
        while(!_6DOF.check_IGNITABLE()){
            delay(1000);
        }
        Serial.println("halya ignitable");
        current_state = LaunchState::Ignition();
        break;
    case(LaunchState::Ignition()):
        


        break;
    case(LaunchState::Apogee()):

        break;
    case(LaunchState::Thousand_ft()):

        break;
    case(LaunchState::Descent()):

        break;
    case(LaunchState::Touchdown()):

        break;
    default:
        break;
}