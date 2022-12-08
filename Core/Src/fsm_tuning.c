/*
 * fsm_tuning.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Admin
 */


#include "fsm_tuning.h"



void fsm_tuning_run(){
	switch(status){

		case TUNING_RED1:
			if(isButton2Pressed()){
				RED_INC++;
				//updateBuffer(mode+1, red_val+RED_INC);
			}
			setLEDRED1();
			clearLED2();
			if(isButton3Pressed()){
				red_time_1+=RED_INC;
				//updateBuffer(2, red_val);
			}
			if(isButton1Pressed()){
				RED_INC=0;
				status=TUNING_GREEN1;
				//updateBuffer(mode+1, yellow_val)
			}
			break;

		case TUNING_GREEN1:
			if(isButton2Pressed()){
				GREEN_INC++;
				//updateBuffer(mode+1, green_val+GREEN_INC);
			}
			setLEDGREEN1();
			clearLED2();
			if(isButton3Pressed()){
				green_time_1+=GREEN_INC;
				//updateBuffer(mode+1, green_val);
			}
			if(isButton1Pressed()){
				GREEN_INC=0;
				status=TUNING_YELLOW1;
			}
			break;

		case TUNING_YELLOW1:
			if(isButton2Pressed()){
				YELLOW_INC++;
				//updateBuffer(mode+1, yellow_val+YELLOW_INC);
			}
			setLEDYELLOW1();
			clearLED2();
			if(isButton3Pressed()){
				yellow_time_1+=YELLOW_INC;
				//updateBuffer(mode+1, yellow_val);

			}
			if(isButton1Pressed()){
				YELLOW_INC=0;
				red_time_2=yellow_time_1+green_time_1;
				status=TUNING_GREEN2;
				//updateBuffer(mode+1, green_val);
				}
			break;

		case TUNING_GREEN2:
			if(isButton2Pressed()){
				GREEN_INC++;
				//updateBuffer(mode+1, yellow_val+YELLOW_INC);
			}
			setLEDGREEN2();
			clearLED1();
			if(isButton3Pressed()){
				green_time_2+=GREEN_INC;
				//updateBuffer(mode+1, green_val);
			}
			if(isButton1Pressed()){
				GREEN_INC=0;
				yellow_time_2=red_time_1-green_time_2;
				status=RED1_GREEN2;
			}
			break;

		default:
			break;

	}
}
