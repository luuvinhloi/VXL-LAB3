/*
 * global.h
 *
 *  Created on: Nov 15, 2022
 *      Author: luuvinhloi
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"

#define INIT 			1

#define AUTO_RED 		2
#define AUTO_YELLOW 	3
#define AUTO_GREEN 		4

#define AUTO_LED7_0 	10
#define AUTO_LED7_1 	11
#define AUTO_LED7_2 	12
#define AUTO_LED7_3 	13
#define AUTO_LED7_4 	14
#define AUTO_LED7_5 	15
#define AUTO_LED7_6 	16
#define AUTO_LED7_7 	17
#define AUTO_LED7_8 	18
#define AUTO_LED7_9 	19

#define TurnOnLed		20
#define TurnOffLed		21

#define MAN_LED7_0		30
#define MAN_LED7_1		31
#define MAN_LED7_2		32
#define MAN_LED7_3		33
#define MAN_LED7_4		34
#define MAN_LED7_5		35
#define MAN_LED7_6		36
#define MAN_LED7_7		37
#define MAN_LED7_8		38
#define MAN_LED7_9		39

extern int status1;
extern int status2;
extern int counter;

#endif /* INC_GLOBAL_H_ */
