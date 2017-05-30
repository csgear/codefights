
### codefights.com drilling list: math practice

from functools import reduce

def mathPractice(numbers):
    # initial x = 1 so where (a0 + a1) is written as a0 * 1 which is new x, and (a0 + a1) == (x + a1)
    return reduce(lambda x, t : x * t[1] if t[0] % 2 == 0 else x + t[1] , enumerate(numbers), 1)