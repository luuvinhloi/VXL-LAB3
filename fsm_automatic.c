/*
 * fsm_automatic.c
 *
 *  Created on: Nov 15, 2022
 *      Author: luuvinhloi
 */

#include "fsm_automatic.h"

void fsm_automatic_run()
{
	//MODE 1: Normal mode
	switch(status1) {
		case INIT:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			status1 = AUTO_RED;
			setTimer1(500);
			break;
		case AUTO_RED: //TURN ON LED_RED
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			if(timer1_flag == 1) {
				status1 = AUTO_GREEN;
				setTimer1(300);
			}
			break;
		case AUTO_GREEN: //TURN ON LED_GREEEN
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			if(timer1_flag == 1) {
				status1 = AUTO_YELLOW;
				setTimer1(200);
			}
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			if(timer1_flag == 1) {
				status1 = AUTO_RED;
				setTimer1(500);
			}
			break;
		default:
			break;
	}

	switch(status2) {
			case INIT:
				HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
				HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
				HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
				status2 = AUTO_GREEN;
				setTimer2(300);
				break;
			case AUTO_GREEN: //TURN ON LED_GREEEN
				HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
				HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
				HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
				if(timer2_flag == 1) {
					status2 = AUTO_YELLOW;
					setTimer2(200);
				}
				break;
			case AUTO_YELLOW:
				HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
				HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
				HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
				if(timer2_flag == 1) {
					status2 = AUTO_RED;
					setTimer2(500);
				}
				break;
			case AUTO_RED: //TURN ON LED_RED
				HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
				HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
				HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
				if(timer2_flag == 1) {
					status2 = AUTO_GREEN;
					setTimer2(300);
				}
				break;
			default:
				break;
		}
}
