/*
 * fsm_pedes.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Admin
 */


#include "fsm_pedes.h"
int freq=0;
void fsm_pedes_run(){
	switch (status_pedes){
		case INIT_PEDES:
			clearLED3();
			if (isButtonPress(0)){
				setTimer3((red_time_1 + red_time_2) * 2 * 1000);
				status_pedes = PEDES_RUN;
				setTimer4(10);
			}
			break;
		case PEDES_RUN:

			if (status == GREEN1_RED2){
				setLEDRED3();
			} else if (status == YELLOW1_RED2){
				setLEDRED3();
			} else if (val_info1<yellow_pedes_time){
				setLEDYELLOW3();
				//buzzer(5000);
				if(timer4_flag==1){
					freq=(red_time_1-val_info1)*100>5000?5000:(red_time_1-val_info1)*100;
					buzzer(freq);
					//buzzer(5000);
					setTimer4(250);
				}
				//buzzer(0);
			}
			else{
				setLEDGREEN3();
				//buzzer(1000);
				if(timer4_flag==1){
					freq=(red_time_1-val_info1)*100>2000?2000:(red_time_1-val_info1)*30;
					buzzer(freq);
					//buzzer(5000);
					setTimer4(5000);
				}
				//buzzer(0);
			}
			if (timer3_flag == 1){
				status_pedes = INIT_PEDES;
				buzzer(0);
			}
			buzzer(0);
			break;

	}
}
