def secondRightmostZeroBit(n):
    return 2**(len(bin(n)[2:])-1-bin(n)[2:].rfind('0',0,len(bin(n)[2:])-(len(bin(n)[2:]) - bin(n)[2:].rfind('0'))))


