/*
 * manual_fsm.c
 *
 *  Created on: Dec 5, 2022
 *      Author: Admin
 */


#include "manual_fsm.h"


void fsm_manual_run(){
	switch(status){

		case MAN_RED1_GREEN2:
			setLEDRED1();
			setLEDGREEN2();
			if(timer1_flag == 1){
				status=RED1_GREEN2;
				setTimer1(3000);
			}

			if(isButton2Pressed()){
				status=MAN_RED1_YELLOW2;
				setTimer1(10000);
			}

			if (isButton1Pressed()){
				status = TUNING_RED1;
			}

			break;

		case MAN_RED1_YELLOW2:
			setLEDYELLOW2();
			if(timer1_flag==1){
				status=RED1_YELLOW2;
				setTimer1(2000);
			}

			if(isButton2Pressed()){
				status=MAN_GREEN1_RED2;
				setTimer1(10000);
			}

			if (isButton1Pressed()){
				status = TUNING_RED1;
			}

			break;

		case MAN_GREEN1_RED2:
			setLEDGREEN1();
			setLEDRED2();
			if(timer1_flag==1){
				status=GREEN1_RED2;
				setTimer1(3000);
			}

			if(isButton2Pressed()){
				status=MAN_YELLOW1_RED2;
				setTimer1(10000);
			}

			if (isButton1Pressed()){
				status = TUNING_RED1;
			}

			break;

		case MAN_YELLOW1_RED2:
			setLEDYELLOW1();

			if(timer1_flag==1){
				status=YELLOW1_RED2;
				setTimer1(2000);
			}

			if(isButton2Pressed()){
				status=MAN_RED1_GREEN2;
				setTimer1(1000);
			}

			if (isButton1Pressed()){
				status = TUNING_RED1;
			}

			break;

		default:
			break;
	}
}
