from collections import deque

def doodledPassword(digits):
    n = len(digits)
    res = [deque(digits) for _ in range(n)]
    deque(map(deque.rotate, res, [-1 * (x) for x in range(n)]), 0)
    return [list(d) for d in res]

