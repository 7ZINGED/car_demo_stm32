//
// Created by jieting on 24-7-21.
//

#ifndef MOTOR_H
#define MOTOR_H
#include "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal.h"
#define PWM_MAX  7199

typedef enum
{
    FORWARD,
      BACK,
      STOP
  }MotorDIR_Choose;

void Motor_Left_DIR(MotorDIR_Choose Direction);
void Motor_Right_DIR(MotorDIR_Choose Direction);
void Load_Motor_PWM(int MOTORL_PWM,int MOTORR_PWM);

#endif //MOTOR_H
