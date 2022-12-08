/*
 * global.h
 *
 *  Created on: Dec 5, 2022
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#include "software_timer.h"
#include "button.h"
#include "led_traffic.h"
#include <stdio.h>
#include "main.h"
#include "transmit_info.h"



#define INIT 0
#define RED1_GREEN2 		1
#define RED1_YELLOW2 		2
#define GREEN1_RED2 		3
#define YELLOW1_RED2 		4

#define MAN_RED1_GREEN2 	20
#define MAN_RED1_YELLOW2 	21
#define MAN_GREEN1_RED2 	22
#define MAN_YELLOW1_RED2 	23

#define TUNING_RED1			40
#define TUNING_GREEN1		41
#define TUNING_YELLOW1		42
#define TUNING_GREEN2		43

#define INIT_PEDES			50
#define PEDES_RUN			51

extern int status;
extern int status_pedes;

extern int time_of_light;
extern int time_of_light_2;

extern int val_info1;
extern int val_info2;
extern char info_1[20];
extern char info_2[20];

extern int red_time_1;
extern int green_time_1;
extern int yellow_time_1;
extern int red_time_2;
extern int green_time_2;
extern int yellow_time_2;
extern int time_man_mode;

extern int RED_INC;
extern int YELLOW_INC;
extern int GREEN_INC;
#endif /* INC_GLOBAL_H_ */
