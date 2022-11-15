/*
 * button.c
 *
 *  Created on: Nov 15, 2022
 *      Author: luuvinhloi
 */

#include "button.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int KeyReg12 = NORMAL_STATE;
int KeyReg13 = NORMAL_STATE;

int KeyReg20 = NORMAL_STATE;
int KeyReg21 = NORMAL_STATE;
int KeyReg22 = NORMAL_STATE;
int KeyReg23 = NORMAL_STATE;

int TimerForkeyPress = 200;

void subKeyProcess()
{
	button1_flag = 1;
	button2_flag = 1;
	button3_flag = 1;
}

int isButton1Pressed()
{
	if(button1_flag == 1) {
		button1_flag = 0;
		return 1;
	}
	return 0;
}

int isButton2Pressed()
{
	if(button2_flag == 1) {
		button2_flag = 0;
		return 1;
	}
	return 0;
}

int isButton3Pressed()
{
	if(button3_flag == 1) {
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput1()
{
	//BUTTON1
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
	if((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)) {
		if(KeyReg3 != KeyReg2) {
			KeyReg3 = KeyReg2;
			if(KeyReg2 == PRESSED_STATE) {
				//TODO
				subKeyProcess();
				TimerForkeyPress = 200;
			}
		}
		else {
			TimerForkeyPress--;
			if(TimerForkeyPress == 0) {
				//TODO
				KeyReg3 = NORMAL_STATE;
			}
		}
	}
}

void getKeyInput2()
{
	//BUTTON2
	KeyReg10 = KeyReg11;
		KeyReg11 = KeyReg12;
		KeyReg12 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
		if((KeyReg10 == KeyReg11) && (KeyReg11 == KeyReg12)) {
			if(KeyReg13 != KeyReg12) {
				KeyReg13 = KeyReg12;
				if(KeyReg12 == PRESSED_STATE) {
					//TODO
					subKeyProcess();
					TimerForkeyPress = 200;
				}
			}
			else {
				TimerForkeyPress--;
				if(TimerForkeyPress == 0) {
					//TODO
					KeyReg13 = NORMAL_STATE;
				}
			}
		}
}

void getKeyInput3()
{
	//BUTTON3
	KeyReg20 = KeyReg21;
	KeyReg21 = KeyReg22;
	KeyReg22 = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);
	if((KeyReg20 == KeyReg21) && (KeyReg21 == KeyReg22)) {
		if(KeyReg23 != KeyReg22) {
			KeyReg23 = KeyReg22;
			if(KeyReg22 == PRESSED_STATE) {
				//TODO
				subKeyProcess();
				TimerForkeyPress = 200;
			}
		}
		else {
			TimerForkeyPress--;
			if(TimerForkeyPress == 0) {
				//TODO
				KeyReg23 = NORMAL_STATE;
			}
		}
	}
}


