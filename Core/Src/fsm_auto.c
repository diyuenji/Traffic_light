/*
 * fsm_auto.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Admin
 */


#include "fsm_auto.h"


void fsm_auto_run(){
	switch (status){
		case INIT:
			setTimer1(green_time_2 * 1000);
			setTimer2(10);
			status = RED1_GREEN2;
			val_info1= red_time_1;
			val_info2=green_time_2;

			break;

		case RED1_GREEN2:
			setLEDRED1();
			setLEDGREEN2();

			if (timer1_flag == 1){
				setTimer1(yellow_time_2 * 1000);
				setTimer2(10);
				status = RED1_YELLOW2;
				val_info2=yellow_time_2;
			}

			if (timer2_flag == 1){
				send_info(0);
				send_info(1);
				setTimer2(1000);
				val_info1--;
				val_info2--;
			}

			if (isButtonPress(1)){
				setTimer2(10);
				setTimer1(time_man_mode * 1000);
				val_info1=time_man_mode;
				val_info2=time_man_mode;
				status = MAN_RED1_GREEN2;
			}
			break;

		case RED1_YELLOW2:
			setLEDRED1();
			setLEDYELLOW2();

			if (timer1_flag == 1){
				setTimer1(green_time_1 * 1000);
				setTimer2(10);
				val_info1=green_time_1;
				val_info2=red_time_2;
				status = GREEN1_RED2;
			}

			if (timer2_flag == 1){
				send_info(0);
				send_info(1);
				setTimer2(1000);
				val_info1--;
				val_info2--;
			}

			if (isButtonPress(1)){
				setTimer2(10);
				setTimer1(time_man_mode * 1000);
				val_info1=time_man_mode;
				val_info2=time_man_mode;
				status = MAN_RED1_YELLOW2;
			}
			break;

		case GREEN1_RED2:
			setLEDRED2();
			setLEDGREEN1();

			if (timer1_flag == 1){
				setTimer1(yellow_time_1 * 1000);
				setTimer2(10);
				val_info1=yellow_time_1;
				status = YELLOW1_RED2;
			}

			if (timer2_flag == 1){
				send_info(0);
				send_info(1);
				setTimer2(1000);
				val_info1--;
				val_info2--;
			}

			if (isButtonPress(1)){
				setTimer2(10);
				setTimer1(time_man_mode * 1000);
				val_info1=time_man_mode;
				val_info2=time_man_mode;
				status = MAN_GREEN1_RED2;
			}
			break;

		case YELLOW1_RED2:
			setLEDRED2();
			setLEDYELLOW1();

			if (timer1_flag == 1){
				setTimer1(green_time_2 * 1000);
				setTimer2(10);
				val_info1=red_time_1;
				val_info2=green_time_2;
				status = RED1_GREEN2;
			}
			if (timer2_flag == 1){
				send_info(0);
				send_info(1);
				setTimer2(1000);
				val_info1--;
				val_info2--;
			}

			if (isButtonPress(1)){
				setTimer2(10);
				setTimer1(time_man_mode * 1000);
				val_info1=time_man_mode;
				val_info2=time_man_mode;
				status = MAN_YELLOW1_RED2;
			}
			break;
	}
}
