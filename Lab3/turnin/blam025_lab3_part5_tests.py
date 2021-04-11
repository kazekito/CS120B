tests = [ 
         {'description': 'PINB: 0x01, PIND: 0x22 => PORTB: 0x04',
        'steps': [ {'inputs': [('PINB',0x01), ('PIND',0x22)], 'iterations': 5 } ],
        'expected': [('PORTB',0x04)],
        },




] 
