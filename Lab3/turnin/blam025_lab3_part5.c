#include <avr/io.h>
#include <stdio.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRD = 0x00; PORTB = 0xFF;
	DDRB = 0xFE; PORTB = 0x00;
	unsigned char tempD = 0x00; 
	unsigned char tempB = 0x00;
	unsigned short cnt = 0x00;
while(1) {

	PORTB = 0x00;
	tempD = PIND & 0xFF;	
	tempB = PINB & 0x01;
	cnt = (cnt | tempD) << 1;
	cnt = cnt | tempB;

	if (cnt >= 70){
	PORTB = PORTB | 0x02;
	}	
	if (cnt > 5 && cnt < 70){
	PORTB = PORTB | 0x04;
	}
	if (cnt < 5){
	PORTB = 0x00;
	}
	
		
	}
	return 0;
}

