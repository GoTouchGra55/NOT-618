/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define XMAX_STOP_Pin GPIO_PIN_2
#define XMAX_STOP_GPIO_Port GPIOE
#define YMAX_STOP_Pin GPIO_PIN_3
#define YMAX_STOP_GPIO_Port GPIOE
#define ZMAX_STOP_Pin GPIO_PIN_4
#define ZMAX_STOP_GPIO_Port GPIOE
#define XMIN_STOP_Pin GPIO_PIN_13
#define XMIN_STOP_GPIO_Port GPIOC
#define YMIN_STOP_Pin GPIO_PIN_14
#define YMIN_STOP_GPIO_Port GPIOC
#define ZMIN_STOP_Pin GPIO_PIN_15
#define ZMIN_STOP_GPIO_Port GPIOC
#define MOTOR_Z1_Pin GPIO_PIN_0
#define MOTOR_Z1_GPIO_Port GPIOA
#define HOTEND_THR_Pin GPIO_PIN_1
#define HOTEND_THR_GPIO_Port GPIOA
#define BED_THR_Pin GPIO_PIN_2
#define BED_THR_GPIO_Port GPIOA
#define AUX_THR_Pin GPIO_PIN_3
#define AUX_THR_GPIO_Port GPIOA
#define MX_DIR_Pin GPIO_PIN_4
#define MX_DIR_GPIO_Port GPIOA
#define MY_DIR_Pin GPIO_PIN_5
#define MY_DIR_GPIO_Port GPIOA
#define ME_DIR_Pin GPIO_PIN_6
#define ME_DIR_GPIO_Port GPIOA
#define MZ1_DIR_Pin GPIO_PIN_7
#define MZ1_DIR_GPIO_Port GPIOA
#define SERVO_Pin GPIO_PIN_9
#define SERVO_GPIO_Port GPIOE
#define PROBE_Pin GPIO_PIN_10
#define PROBE_GPIO_Port GPIOE
#define MOTOR_E_Pin GPIO_PIN_10
#define MOTOR_E_GPIO_Port GPIOB
#define MX_STEP_Pin GPIO_PIN_12
#define MX_STEP_GPIO_Port GPIOB
#define MY_STEP_Pin GPIO_PIN_13
#define MY_STEP_GPIO_Port GPIOB
#define ME_STEP_Pin GPIO_PIN_14
#define ME_STEP_GPIO_Port GPIOB
#define MZ1_STEP_Pin GPIO_PIN_15
#define MZ1_STEP_GPIO_Port GPIOB
#define MZ2_STEP_Pin GPIO_PIN_8
#define MZ2_STEP_GPIO_Port GPIOD
#define DR_EN_Pin GPIO_PIN_9
#define DR_EN_GPIO_Port GPIOD
#define HEAT_BED_Pin GPIO_PIN_12
#define HEAT_BED_GPIO_Port GPIOD
#define AUX_HEAT_Pin GPIO_PIN_13
#define AUX_HEAT_GPIO_Port GPIOD
#define MOTOR_Z2_Pin GPIO_PIN_6
#define MOTOR_Z2_GPIO_Port GPIOC
#define MOTOR_X_Pin GPIO_PIN_9
#define MOTOR_X_GPIO_Port GPIOA
#define SD_CD_Pin GPIO_PIN_1
#define SD_CD_GPIO_Port GPIOD
#define MOTOR_Y_Pin GPIO_PIN_5
#define MOTOR_Y_GPIO_Port GPIOD
#define LCD_CS_Pin GPIO_PIN_3
#define LCD_CS_GPIO_Port GPIOB
#define LCD_SCK_Pin GPIO_PIN_4
#define LCD_SCK_GPIO_Port GPIOB
#define LCD_MOSI_Pin GPIO_PIN_5
#define LCD_MOSI_GPIO_Port GPIOB
#define BEEPER_Pin GPIO_PIN_6
#define BEEPER_GPIO_Port GPIOB
#define BTN_EN1_Pin GPIO_PIN_9
#define BTN_EN1_GPIO_Port GPIOB
#define BTN_EN2_Pin GPIO_PIN_0
#define BTN_EN2_GPIO_Port GPIOE
#define BEN_ENC_Pin GPIO_PIN_1
#define BEN_ENC_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
