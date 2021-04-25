tests = [ 
	{'description': 'PINA: 0xFF -->  PINC: 0xF0 & PINB: 0x0F',
	'steps': [ {'inputs': [('PINA',0xFF)], 'iterations': 5 } ],
	'expected': [('PORTC',0xF0), ('PORTB',0x0F)],
	},

	 {'description': 'PINA: 0x00  --> PINC: 0x00 & PINB: 0x00',
        'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
        'expected': [('PORTC',0x00), ('PORTB',0x00)],
        },
	
	 {'description': 'PINA = 0x33 --> PINC = 0x30 & PINB --> 0x03',
        'steps': [ {'inputs': [('PINA',0x33)], 'iterations': 5 } ],
        'expected': [('PORTC',0x30),('PORTB',0x03)],
        },





] 
