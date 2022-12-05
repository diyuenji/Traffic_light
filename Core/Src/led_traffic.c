/*
 * led_trafic.c
 *
 *  Created on: Dec 5, 2022
 *      Author: Admin
 */

#include "led_traffic.h"
void setLEDRED1(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 0);
}
void setLEDYELLOW1(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
}
void setLEDGREEN1(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 0);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
}

void setLEDRED2(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 0);
}
void setLEDYELLOW2(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 1);
}
void setLEDGREEN2(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 1);
}

void setLEDRED3(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 1);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, 0);
}
void setLEDYELLOW3(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 1);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, 1);
}
void setLEDGREEN3(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 0);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, 1);
}
