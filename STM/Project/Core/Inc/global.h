/*
 * global.h
 *
 *  Created on: Nov 1, 2022
 *      Author: A.Tuan
 */



#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "string.h"
#include "stdio.h"

extern UART_HandleTypeDef huart2;
extern TIM_HandleTypeDef htim3;

extern int green_time_global;
extern int yellow_time_global;
extern int red_time_global;

extern int green_time[2];
extern int yellow_time[2];
extern int red_time[2];

extern int status;

extern int walking_mode;
extern int cycle_for_walking_mode;

void update_global_time();

void writeMess(int time);
extern char str[64];


#endif /* INC_GLOBAL_H_ */
