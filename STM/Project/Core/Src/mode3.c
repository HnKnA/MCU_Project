/*
 * mode3.c
 *
 *  Created on: Nov 14, 2022
 *      Author: A.Tuan
 */

#include "mode3.h"


int mode_yellow_time = 0;

int on_changed3 = 0;

void mode3(){
	if(mode_yellow_time > 99){
		mode_yellow_time = 0;
	}
if(mode_yellow_time >= 0){
//	display7SEG(mode_yellow_time, 'x');
//	display7SEG(3, 'y');
	if(timer3_flag == 1){
//	HAL_GPIO_TogglePin(LED_YELLOW_X_GPIO_Port, LED_YELLOW_X_Pin);
//	HAL_GPIO_TogglePin(LED_YELLOW_Y_GPIO_Port, LED_YELLOW_Y_Pin);
//	HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin, RESET);
//	HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin, RESET);
//	HAL_GPIO_WritePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin, RESET);
//	HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin, RESET);

	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);

	setTimer3(50);
	}
}
	if(button3_flag == 1){
		on_changed3 = 0;
		yellow_time_global = mode_yellow_time;
		button3_flag = 0;
	}
	if(button2_flag == 1){
		button2_flag = 0;
		on_changed3 = 1;
		if(on_changed3){
		mode_yellow_time++;
		}
	}
}

