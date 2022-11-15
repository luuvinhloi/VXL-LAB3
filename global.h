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

#define INIT 			10
#define AUTO_LED7_0 	0
#define AUTO_LED7_1 	1
#define AUTO_LED7_2 	2
#define AUTO_LED7_3 	3
#define AUTO_LED7_4 	4
#define AUTO_LED7_5 	5
#define AUTO_LED7_6 	6
#define AUTO_LED7_7 	7
#define AUTO_LED7_8 	8
#define AUTO_LED7_9 	9

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

extern int status;
extern int counter;

#endif /* INC_GLOBAL_H_ */
