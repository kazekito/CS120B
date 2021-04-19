tests = [ 
{'description': 'PINA = PINB = PINC = 0x40 => PORTD: 0x31',
'steps': [ {'inputs': [('PINA',0x40),('PINB', 0x40),('PINC',0x40)], 'iterations': 5 } ],
'expected': [('PORTD',0x31)],
},

{'description': 'PINA = 0x80, PINB = 0x40, PINC = 0x0F  => PORTD: 0x33',
'steps': [ {'inputs': [('PINA',0x80),('PINB', 0x40),('PINC',0x0F)], 'iterations': 5 } ],
'expected': [('PORTD',0x33)],
},

{'description': 'PINA = 0x00, PINB = 0x38, PINC = 0x55 => PORTD: 0x22',
'steps': [ {'inputs': [('PINA',0x00),('PINB', 0x37),('PINC',0x55)], 'iterations': 5 } ],
'expected': [('PORTD',0x22)],
},

{'description': 'PINA = 0x00, PINB = 0x23, PINC = 0x55 => PORTD: 0x1E',
'steps': [ {'inputs': [('PINA',0x00),('PINB', 0x23),('PINC',0x55)], 'iterations': 5 } ],
'expected': [('PORTD',0x1E)],
},






    ]
#watch = ['PORTB']

