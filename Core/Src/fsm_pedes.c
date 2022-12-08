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
			if (isButton4Pressed()){
				setTimer2((red_time_1 + red_time_2) * 2 * 1000);
				status = PEDES_RUN;
			}
			break;
		case PEDES_RUN:

			if (status == RED1_GREEN2 || status == RED1_YELLOW){
				setLEDGREEN3();
			} else if (status == GREEN1_RED2){
				setLEDRED3();
			} else {
				setLEDYELLOW3();
			}

			if (timer2_flag == 1){
				status = INIT_PEDES;
			}

			break;

	}
}
