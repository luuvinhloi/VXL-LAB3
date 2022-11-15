/*
 * fsm_manual.c
 *
 *  Created on: Nov 15, 2022
 *      Author: luuvinhloi
 */

#include "fsm_manual.h"

void fsm_manual_run()
{
	switch(counter) {
		case MAN_LED7_9:
			//TODO
			GPIOB->ODR = 0x90;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_8;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_8;
				setTimer1(1000);
			}
			break;
		case MAN_LED7_8:
			//TODO
			GPIOB->ODR = 0x80;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_7;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_9;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_7;
				setTimer1(1000);
			}
			break;
		case MAN_LED7_7:
			//TODO
			GPIOB->ODR = 0xF8;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_6;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_8;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_6;
				setTimer1(1000);
			}
			break;
		case MAN_LED7_6:
			//TODO
			GPIOB->ODR = 0x82;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_5;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_7;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_5;
				setTimer1(1000);
			}
			break;
		case MAN_LED7_5:
			//TODO
			GPIOB->ODR = 0x92;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_4;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_6;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_4;
				setTimer1(1000);
			}
			break;
		case MAN_LED7_4:
			//TODO
			GPIOB->ODR = 0x99;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_3;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_5;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_3;
				setTimer1(1000);
			}
			break;
		case MAN_LED7_3:
			//TODO
			GPIOB->ODR = 0xB0;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_2;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_4;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_2;
				setTimer1(1000);
			}
			break;
		case MAN_LED7_2:
			//TODO
			GPIOB->ODR = 0xA4;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_1;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_3;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_1;
				setTimer1(1000);
			}
			break;
		case MAN_LED7_1:
			//TODO
			GPIOB->ODR = 0xF9;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_0;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_2;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_0;
				setTimer1(1000);
			}
			break;
		case MAN_LED7_0:
			//TODO
			GPIOB->ODR = 0xC0;

			if(timer1_flag == 1) {
				counter = AUTO_LED7_9;
				setTimer1(100);
			}

			if(isButton1Pressed() == 1) { //RESET the counter value is 0
				counter = MAN_LED7_0;
				setTimer1(1000);
			}

			if(isButton2Pressed() == 1) { //INCREASE the counter is increased by 1
				counter = MAN_LED7_1;
				setTimer1(1000);
			}

			if(isButton3Pressed() == 1) { //Decrease the counter is decreased by 1
				counter = MAN_LED7_9;
				setTimer1(1000);
			}
			break;
	}
}
