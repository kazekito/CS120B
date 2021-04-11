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

int main(void) {
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00; 
	unsigned char tmpC = 0x00; 
	unsigned char tmpA = 0x00;
	unsigned char cnt; 
while(1) {
	tmpA = 0x00;
	cnt = 4;
	tmpA = PINA & 0x0F;

	if ((tmpA & 0x01) == 0x01){
		--cnt;
	}	
	if ((tmpA & 0x02) == 0x02){
		--cnt;
	}
	if ((tmpA & 0x04) == 0x04){
		--cnt;
	}
	if ((tmpA & 0x08) == 0x08){
		--cnt;
	}
	if ((tmpA & 0x0F) == 0x0F){
		cnt = 0;
		PORTC = 0x80;
	}
	else{
		PORTC = cnt;
	}	
}
	return 0;
}

