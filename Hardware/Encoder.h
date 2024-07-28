//
// Created by 24158 on 24-7-13.
//
#define Radius 3.25//cm
#define Counter 2464
#define time1 0.01
#define tim1 TIM2
#define tim2 TIM4
#ifndef DSCAR1_COUNTER_H
#define DSCAR1_COUNTER_H
#include <stdint-gcc.h>

//单位时间读取编码器的计数
void Counter_INIT();
//读取单位时间内的脉冲数
int Read_counter1();
int Read_counter2();
//将脉冲数转换为速度
float Calculate_counter(int counter);
//计算总的脉冲数
int counter_all_1(int counter_all);
int counter_all_2(int counter_all);
float distance_transform(int counter_all);
#endif //DSCAR1_COUNTER_H
