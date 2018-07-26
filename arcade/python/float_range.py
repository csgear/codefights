
#  codefights itertools kit float range

from itertools import takewhile, count

def floatRange(start, stop, step):
    # using two itertools func to generate float range
    gen = takewhile(lambda x: x < stop, count(start, step))
    return list(gen)

