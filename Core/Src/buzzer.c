/*
 * buzzer.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */

#include "buzzer.h"
void buzzer(int freq){
	__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, freq);

}
