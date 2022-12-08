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
			}
			break;
		case PEDES_RUN:

			if (status == GREEN1_RED2){
				setLEDRED3();
			} else if (status == YELLOW1_RED2){
				setLEDRED3();
			} else if (val_info1<=yellow_pedes_time){
				setLEDYELLOW3();
				if(timer4_flag==1){
					freq=(red_time_1-val_info1)*30>1000?1000:(red_time_1-val_info1)*30;
					buzzer(freq);
					setTimer4(250);
				}
				buzzer(0);
				}
			else{
				setLEDGREEN3();
				if(timer4_flag==1){
					freq=(red_time_1-val_info1)*30>600?600:(red_time_1-val_info1)*30;
					buzzer(freq);
					setTimer4(1000);
				}
				buzzer(0);
			}
			if (timer3_flag == 1){
				status = INIT_PEDES;
				buzzer(0);
			}

			break;

	}
}
