
### codefights.com drilling list: pref sum

from itertools import accumulate

def prefSum(a):
    return list(accumulate(a))


# other solutions
# print([sum(a[:i+1]) for i in range(len(a))])
# print( reduce(lambda c, x: c + [c[-1] + x], a, [0])[1:] )