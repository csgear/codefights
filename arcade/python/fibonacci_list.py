
### codefights.com drilling list: fibonacci list

from functools import reduce

def fibonacciList(n):
    return [[0] * x for x in
            reduce(lambda x, y: x + [x[y] + x[y - 1]], range(1, n-1), [0, 1])]
