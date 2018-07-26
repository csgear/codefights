
### codefighs.com CORNER OF 1s and 0s: Equal Pair of Bits

def equalPairOfBits(n, m):
    return pow(2, len(bin(n^m)[2:]) - bin(n^m)[2:].rfind('0') - 1)
