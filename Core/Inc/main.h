/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Track_L2_Pin GPIO_PIN_0
#define Track_L2_GPIO_Port GPIOC
#define Track_L1_Pin GPIO_PIN_1
#define Track_L1_GPIO_Port GPIOC
#define Track_R1_Pin GPIO_PIN_2
#define Track_R1_GPIO_Port GPIOC
#define Track_R2_Pin GPIO_PIN_3
#define Track_R2_GPIO_Port GPIOC
#define Encoder_Left1_Pin GPIO_PIN_0
#define Encoder_Left1_GPIO_Port GPIOA
#define Encoder_Left2_Pin GPIO_PIN_1
#define Encoder_Left2_GPIO_Port GPIOA
#define PWM1_Pin GPIO_PIN_6
#define PWM1_GPIO_Port GPIOA
#define PWM2_Pin GPIO_PIN_7
#define PWM2_GPIO_Port GPIOA
#define Track_M_Pin GPIO_PIN_4
#define Track_M_GPIO_Port GPIOC
#define Motor_IN1_Pin GPIO_PIN_6
#define Motor_IN1_GPIO_Port GPIOC
#define Motor_IN2_Pin GPIO_PIN_7
#define Motor_IN2_GPIO_Port GPIOC
#define Motor_IN3_Pin GPIO_PIN_8
#define Motor_IN3_GPIO_Port GPIOC
#define Motor_IN4_Pin GPIO_PIN_9
#define Motor_IN4_GPIO_Port GPIOC
#define Encoder_Right1_Pin GPIO_PIN_6
#define Encoder_Right1_GPIO_Port GPIOB
#define Encoder_Right2_Pin GPIO_PIN_7
#define Encoder_Right2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
