tests = [ 
	{'description': 'PINA: 0x08 -->  PINC: 0x3C',
	'steps': [ {'inputs': [('PINA',0x08)], 'iterations': 5 } ],
	'expected': [('PORTC',0x3C)],
	},

	 {'description': 'PINA: 0x03  --> PINC: 0x70',
        'steps': [ {'inputs': [('PINA',0x03)], 'iterations': 5 } ],
        'expected': [('PORTC',0x70)],
        },
	
	 {'description': 'PINA = 0x0F --> PINC = 0x3F',
        'steps': [ {'inputs': [('PINA',0x0F)], 'iterations': 1 } ],
        'expected': [('PORTC',0x3F)],
        },


] 
