//
// Created by jieting on 24-7-21.
//

#include "Car.h"
#include "motor.h"
#include "PID.h"


void Car_GoAhead(int Left_speed, int Right_Speed) {
    Motor_Left_DIR(FORWARD);
    Motor_Right_DIR(FORWARD);
    Load_Motor_PWM(Left_speed,Right_Speed);
}

void Car_GoDistance(float Distance) {

}