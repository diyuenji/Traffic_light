/*
 * transmit_info.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */
#include "transmit_info.h"
void send_info(int traffic){
	switch(traffic){
		case 0:
			HAL_UART_Transmit (&huart2 , ( void *) info_1 , sprintf( info_1 , "!7SEG:%d:TRAFFIC1#", val_info1) , 1000) ;
			break;
		case 1:
			HAL_UART_Transmit (&huart2 , ( void *) info_2 , sprintf( info_2 , "!7SEG:%d:TRAFFIC2#", val_info2) , 1000) ;
			break;
		default:
			break;
	}
}
