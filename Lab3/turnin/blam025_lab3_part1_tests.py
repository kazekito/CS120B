tests = [ 
	{'description': 'PINA: 0x40 & PINB = 0x33 --> PINC: 0x05',
	'steps': [ {'inputs': [('PINA',0x40),('PINB',0x33)], 'iterations': 5 } ],
	'expected': [('PORTC',0x05)],
	},

	 {'description': 'PINA: 0x00 & PINB: 0x00 --> PINC: 0x00',
        'steps': [ {'inputs': [('PINA',0x00), ('PINB',0x00)], 'iterations': 5 } ],
        'expected': [('PORTC',0x00)],
        },
	
	 {'description': 'PINA = 0xFF & PINB = 0xFF --> PINC = 0x10',
        'steps': [ {'inputs': [('PINA',0xFF),('PINB',0xFF)], 'iterations': 1 } ],
        'expected': [('PORTC',0x10)],
        },


] 
