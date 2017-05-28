
#  codefights itertools kit crazy balls

from itertools import combinations

def crazyball(players, k):
    return list(combinations(sorted(players), k))