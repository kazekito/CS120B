#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; 
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00; 
	unsigned char tempB = 0x00; 
	unsigned char tempA = 0x00; 
	unsigned cnt;
while(1) {
	tempA = PINA & 0xFF;
	tempB = PINB & 0xFF;
	cnt = 0;

	if ((tempA & 0x01) == 0x01){ ++cnt; }
	if ((tempA & 0x02) == 0x02){ ++cnt; }
	if ((tempA & 0x04) == 0x04){ ++cnt; }
	if ((tempA & 0x08) == 0x08){ ++cnt; }
	if ((tempA & 0x10) == 0x10){ ++cnt; }
	if ((tempA & 0x20) == 0x20){ ++cnt; }
	if ((tempA & 0x40) == 0x40){ ++cnt; }
	if ((tempA & 0x80) == 0x80){ ++cnt; }

	if ((tempB & 0x01) == 0x01){ ++cnt; }
	if ((tempB & 0x02) == 0x02){ ++cnt; }
	if ((tempB & 0x04) == 0x04){ ++cnt; }
	if ((tempB & 0x08) == 0x08){ ++cnt; }
	if ((tempB & 0x10) == 0x10){ ++cnt; }
	if ((tempB & 0x20) == 0x20){ ++cnt; }
	if ((tempB & 0x40) == 0x40){ ++cnt; }
	if ((tempB & 0x80) == 0x80){ ++cnt; }

	PORTC = cnt;
			
	}
	return 0;
}

