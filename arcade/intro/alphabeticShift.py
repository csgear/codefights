def alphabeticShift(inputString):
     return ''.join(map(lambda x: (chr(ord(x) + 1)) if x != 'z' else 'a',
        list(inputString)))

