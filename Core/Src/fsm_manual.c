/*
 * manual_fsm.c
 *
 *  Created on: Dec 5, 2022
 *      Author: Admin
 */


#include "fsm_manual.h"


void fsm_manual_run(){
	switch(status){

		case MAN_RED1_GREEN2:
			setLEDRED1();
			setLEDGREEN2();
			if(timer1_flag == 1){
				status=RED1_GREEN2;
				setTimer2(10);
				setTimer1(3000);
				val_info1= red_time_1;
				val_info2=green_time_2;
			}
			if (timer2_flag == 1){
				send_info(0);
				send_info(1);
				setTimer2(1000);
				val_info1--;
				val_info2--;
			}
			if(isButtonPress(2)){
				status=MAN_RED1_YELLOW2;
				val_info1=time_man_mode;
				val_info2=time_man_mode;
				setTimer1(time_man_mode * 1000);
			}

			if (isButtonPress(1)){
				status = TUNING_RED1;
				val_info1=red_time_1;
				send_info(0);
				setTimer1(10);
			}

			break;

		case MAN_RED1_YELLOW2:
			setLEDYELLOW2();
			if(timer1_flag==1){
				status=RED1_YELLOW2;
				setTimer2(10);
				setTimer1(2000);
				val_info1= red_time_1-green_time_2;
				val_info2=yellow_time_2;
			}
			if (timer2_flag == 1){
				send_info(0);
				send_info(1);
				setTimer2(1000);
				val_info1--;
				val_info2--;
			}
			if(isButtonPress(2)){
				status=MAN_GREEN1_RED2;
				val_info1=time_man_mode;
				val_info2=time_man_mode;
				setTimer1(time_man_mode * 1000);
			}

			if (isButtonPress(1)){
				status = TUNING_RED1;
				val_info1=red_time_1;
				send_info(0);
				setTimer1(10);
			}

			break;

		case MAN_GREEN1_RED2:
			setLEDGREEN1();
			setLEDRED2();
			if(timer1_flag==1){
				status=GREEN1_RED2;
				setTimer2(10);
				setTimer1(3000);
				val_info1= green_time_1;
				val_info2=red_time_2;
			}
			if (timer2_flag == 1){
				send_info(0);
				send_info(1);
				setTimer2(1000);
				val_info1--;
				val_info2--;
			}
			if(isButtonPress(2)){
				status=MAN_YELLOW1_RED2;
				val_info1=time_man_mode;
				val_info2=time_man_mode;
				setTimer1(time_man_mode * 1000);
			}

			if (isButtonPress(1)){
				status = TUNING_RED1;
				val_info1=red_time_1;
				send_info(0);
				setTimer1(10);
			}

			break;

		case MAN_YELLOW1_RED2:
			setLEDYELLOW1();

			if(timer1_flag==1){
				status=YELLOW1_RED2;
				setTimer2(10);
				setTimer1(2000);
				val_info1= yellow_time_1;
				val_info2=red_time_2-green_time_1;
			}
			if (timer2_flag == 1){
				send_info(0);
				send_info(1);
				setTimer2(1000);
				val_info1--;
				val_info2--;
			}
			if(isButtonPress(2)){
				status=MAN_RED1_GREEN2;
				val_info1=time_man_mode;
				val_info2=time_man_mode;
				setTimer1(time_man_mode * 1000);
			}

			if (isButtonPress(1)){
				status = TUNING_RED1;
				val_info1=red_time_1;
				send_info(0);
				setTimer1(10);
			}

			break;

		default:
			break;
	}
}
