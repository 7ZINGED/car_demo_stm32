//
// Created by jieting on 24-7-21.
//
#include "motor.h"
#include "tim.h"



/**
 * 函数名:Motor_Left_DIR
 * 描述:左轮电机控制函数
 * 输入:Direction=(FORWARD,BACK,STOP)
 * 输出:无
 **/
void Motor_Left_DIR(MotorDIR_Choose Direction)
{
    if(FORWARD==Direction)
    {
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_RESET);
    }
    else if(BACK==Direction)
    {
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_SET);
    }
    else if(STOP==Direction)
    {
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_RESET);
    }
}

/**
 * 函数名:Motor_Right_DIR
 * 描述:右轮电机控制函数
 * 输入:Direction=(FORWARD,BACK,STOP)
 * 输出:无
 */
void Motor_Right_DIR(MotorDIR_Choose Direction)
{
    if(FORWARD==Direction)
    {
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, GPIO_PIN_RESET);
    }
    else if(BACK==Direction)
    {
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, GPIO_PIN_SET);
    }
    else if(STOP==Direction)
    {
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, GPIO_PIN_RESET);
    }
}

/**
 * 函数名:Load_Motor_PWM
 * 描述:更新PWM,并将其写定时器
 * 输入:MOTOR1_PWM-左轮电机计算得出的PWM值，MOTOR2_PWM-右轮电机计算得出的PWM值
 * 输出:无
 */
void Load_Motor_PWM(int MOTORL_PWM,int MOTORR_PWM)
{
    MOTORL_PWM=(MOTORL_PWM>0)?MOTORL_PWM:(-MOTORL_PWM);
    MOTORR_PWM=(MOTORR_PWM>0)?MOTORR_PWM:(-MOTORR_PWM);

    MOTORL_PWM=(MOTORL_PWM>PWM_MAX)?PWM_MAX:MOTORL_PWM;
    MOTORR_PWM=(MOTORR_PWM>PWM_MAX)?PWM_MAX:MOTORR_PWM;
    __HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_1,MOTORL_PWM);
    __HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_2,MOTORR_PWM);

}


