/*
 * manual_fsm.c
 *
 *  Created on: Dec 5, 2022
 *      Author: Admin
 */


#include "manual_fsm.h"


void fsm_manual_run(){
	switch(status){
	case MAN_RED_GREEN:
		setLEDRED();
		if(timer1_flag==1)
		{
			status=AUTO_RED;
			setTimer1(500);
		}
		if(isButton1Pressed())
		{
			status=MAN_RED_YELLOW;
			setTimer1(1000);
		}
		break;
	case MAN_RED_YELLOW:
		setLEDGREEN();
		if(timer1_flag==1)
		{
			status=AUTO_YELLOW;
			setTimer1(300);
		}
		if(isButton1Pressed())
		{
			status=MAN_GREEN_RED;
			setTimer1(1000);
		}
		break;
	case MAN_GREEN_RED:
		setLEDYELLOW();
		if(timer1_flag==1)
		{
		status=AUTO_YELLOW;
		setTimer1(200);
		}
		if(isButton1Pressed())
		{
			status=MAN_YELLOW_RED;
			setTimer1(1000);
		}
		break;
	case MAN_YELLOW_RED:
		setLEDYELLOW();
		if(timer1_flag==1)
		{
			status=AUTO_YELLOW;
			setTimer1(200);
		}
		if(isButton1Pressed())
		{
			status=MAN_RED_GREEN;
			setTimer1(1000);
		}
				break;
		default:
			break;
	}
}
