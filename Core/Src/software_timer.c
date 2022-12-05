/*
 * softwaretimer.c
 *
 *  Created on: Dec 4, 2022
 *      Author: Admin
 */


#include "software_timer.h"
#define CYCLE 10
int timer1_counter=0;
int timer1_flag=0;
int timer2_counter=0;
int timer2_flag=0;

void setTimer1(int duration){
	timer1_counter=duration/CYCLE;
	timer1_flag=0;
}

void setTimer2(int duration){
	timer2_counter=duration/CYCLE;
	timer2_flag=0;
}

void timerRun1(){
	if(timer1_counter>0){
		timer1_counter--;
		if(timer1_counter<=0){
			timer1_flag=1;
		}
	}
}

void timerRun2(){
	if(timer2_counter>0){
		timer2_counter--;
		if(timer2_counter<=0){
			timer2_flag=1;
		}
	}
}
