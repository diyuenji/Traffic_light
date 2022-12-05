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
//#include "traffic.h"

#define INIT 0
#define AUTO_RED 1
#define AUTO_GREEN 2
#define AUTO_YELLOW 3

#define MAN_RED_GREEN 0
#define MAN_RED_YELLOW 1
#define MAN_GREEN_RED 2
#define MAN_GREEN_YELLOW 3
#define MAN_YELLOW_RED 4
#define MAN_YELLOW_GREEN 5
extern int state;
extern int status;
#endif /* INC_GLOBAL_H_ */
