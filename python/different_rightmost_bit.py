
### codefighs.com CORNER OF 1s and 0s: Different Rightmost bit

def differentRightmostBit(n, m):
    return pow(2,( (n^m) &-(n^m)).bit_length()-1)
