tests = [ 
{'description': 'PINA = PINB = PINC = 0x40 => PORTD: 0x31',
'steps': [ {'inputs': [('PINA',0x40),('PINB', 0x40),('PINC',0x40)], 'iterations': 5 } ],
'expected': [('PORTD',0x31)],
},

{'description': 'PINA = 0x80, PINB = 0x40, PINC = 0x0F  => PORTD: 0x33',
'steps': [ {'inputs': [('PINA',0x80),('PINB', 0x40),('PINC',0x0F)], 'iterations': 5 } ],
'expected': [('PORTD',0x33)],
},




    ]
#watch = ['PORTB']

