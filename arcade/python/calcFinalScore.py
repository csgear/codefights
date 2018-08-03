def calcFinalScore(scores, n):
    gen = iter(list(x * x for x in sorted(scores, reverse=True)))

    res = 0
    try:
        for _ in range(n):
            res += next(gen)
            print(res) 
    except StopIteration:
        res //= 5

    return res