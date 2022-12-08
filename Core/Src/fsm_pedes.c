/*
 * fsm_pedes.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Admin
 */


#include "fsm_pedes.h"

void fsm_pedes_run(){
	switch (status_pedes){
		case INIT_PEDES:
			clearLED3();
			if (isButtonPress(0)){
				setTimer2((red_time_1 + red_time_2) * 2 * 1000);
				status_pedes = PEDES_RUN;
			}
			break;
		case PEDES_RUN:

			if (status == GREEN1_RED2){
				setLEDRED3();
			} else if (status == YELLOW1_RED2){
				setLEDYELLOW3();
			} else {
				setLEDGREEN3();
			}

			if (timer2_flag == 1){
				status = INIT_PEDES;
			}

			break;

	}
}
