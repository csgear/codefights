#  codefights itertools kit memeory pills

from itertools import dropwhile

def memoryPills(pills):
    ### append three empty strings to handle stopIteration exception
    gen = dropwhile(lambda x: len(x) % 2 != 0, pills + [''] * 3)
    next(gen)
    return [next(gen) for _ in range(3)]
