from math import gcd
from functools import reduce

def lcm(a, b):
    return a * b // gcd(a, b)

def leastCommonDenominator(denominators):
    return reduce(lambda x,y: x * y // gcd(x, y), denominators)


if __name__ == '__main__':
    l = [2, 3, 4, 5, 6]
    print(leastCommonDenominator(l))