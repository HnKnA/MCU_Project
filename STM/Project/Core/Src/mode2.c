/*
 * mode2.c
 *
 *  Created on: Nov 1, 2022
 *      Author: A.Tuan
 */
#include "mode2.h"


int mode_red_time = 0;

int on_changed = 0;

void mode2(){
	if(mode_red_time > 99){
		mode_red_time = 0;
	}
if(mode_red_time >= 0){
//	display7SEG(mode_red_time, 'x');
	if(timer2_flag == 1){
//	HAL_GPIO_TogglePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin);
//	HAL_GPIO_TogglePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin);
//	HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin, RESET);
//	HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin, RESET);
//	HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port, LED_YELLOW_X_Pin, RESET);
//	HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port, LED_YELLOW_Y_Pin, RESET);

	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);

	setTimer2(50);
	}
}
	if(button3_flag == 1){
		on_changed = 0;
		red_time_global = mode_red_time;
		button3_flag = 0;
	}
	if(button2_flag == 1){
		button2_flag = 0;
		on_changed = 1;
		if(on_changed){
		mode_red_time++;
		}
	}
}
