#include <stdlib.h>

#include "Car.h"
#include "encoder.h"
#include "tim.h"
#include "math.h"
#include "PID.h"
#include "Car.h"


void Counter_INIT()
{
    HAL_TIM_Encoder_Start(&htim2,TIM_CHANNEL_ALL);
    HAL_TIM_Encoder_Start(&htim4,TIM_CHANNEL_ALL);
    HAL_TIM_Base_Start_IT(&htim5);
    HAL_TIM_Base_Start_IT(&htim2);
    HAL_TIM_Base_Start_IT(&htim4);

}
//单位时间读取编码器的计数
// 定时器 TIMX
// 返回50ms内的脉冲数，采用4倍频，线数*减速比*4
int Read_counter1()
{
    int counter_TIM;
    counter_TIM = ((short) tim1->CNT);
    tim1 ->CNT=0;
    return counter_TIM;
}
int Read_counter2()
{
    int counter_TIM;
    counter_TIM =((short) tim2->CNT);
    tim2 ->CNT=0;
    return counter_TIM;
}
//接收一定时间内的脉冲数
//返回速度 m/s

float Calculate_counter(int counter)
{
    int velocity = counter/time1/Counter*2*Radius*3.1415926;
    return velocity;
}
int counter_all_1(int counter_all)
{
    counter_all+= ((short)tim1 ->CNT);
    return counter_all;
}
int counter_all_2(int counter_all)
{
    counter_all+= ((short)tim2 ->CNT);
    return counter_all;
}
float distance_transform(int counter_all)
{
    return ((float)counter_all/Counter)*2*Radius*3.1415926;
}


