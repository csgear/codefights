def swapAdjacentBits(n):
    '''
        to handle 32bit integer
    :param n:
    :return:
    '''
    return ((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1);


if __name__ == '__main__':
    a = 13
    b = 74
    c = 1073741823
    print(swapAdjacentBits(a))
    print(swapAdjacentBits(b))
    print(swapAdjacentBits(c))