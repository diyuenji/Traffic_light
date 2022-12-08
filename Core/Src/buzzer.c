/*
 * buzzer.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */


//void Buzzer(){
//	if(timer5_flag){
//		__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, buzzer_freq);
//		setTimer6(buzzer_time/2);
//		if(timer3_counter<5000){
//			buzzer_freq += 100;
//			buzzer_time -= 100;
//		}else{
//			buzzer_freq += 30;
//			buzzer_time -= 30;
//		}
//
//
//		if(buzzer_freq >= 1000) buzzer_freq = 1000;
//		if(buzzer_time <= 100)	buzzer_time = 100;
//		setTimer5(buzzer_time);
//	}
//	if(timer6_flag){
//		__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, 0);
//	}
////	__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, 0);
//}
