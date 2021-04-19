/*	Author: blam025
 *  Partner(s) Name: Bao Lam Le
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
volatile unsigned char TimerFlag = 0;
//#void TimerISR(){ TimerFlag  = 1; }

enum SM_STATES{SM_START,SM_END}SM_STATE;

void SM_Func(){
	switch(SM_STATE){
	case SM_START:
	if (PORTA == 0x00){ SM_STATE = SM_START; }
	else if (PORTA == 0x01){ SM_STATE = SM_END;}
	break;
	case SM_END:
	if (PORTA == 0x00){ SM_STATE = SM_END; }
	else if (PORTA == 0x01) { SM_STATE = SM_START;}
	break;
	default:
	break;
	}
	
	switch(SM_STATE){
	case SM_START:
	PORTB = 0x01;
	break;
	case SM_END:
	PORTB = 0x02;
	break;
	default:
	break;
	}

}
int main(void) {
        DDRA = 0x00; PORTA = 0xFF;
        DDRB =  0xFF; PORTB = 0x00;
 //       TimerSet(1000);
 //       TimerOn();
        SM_STATE = SM_START;
        while(1){
                SM_Func();
//                while(!TimerFlag){}
//		TimerFlag = 0;
				
	}

	return 0;
}
