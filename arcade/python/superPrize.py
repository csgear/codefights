class Prizes(object):
    def __init__(self, p, n, d):
        self.p = p
        self.n = n
        self.d = d
    
    def __iter__(self):
        for i, x in enumerate(self.p):
            if (i+1) % self.n == 0 and x%self.d == 0:
                yield i+1


def superPrize(purchases, n, d):
    return list(Prizes(purchases, n, d))

purchases = [12, 43, 13, 465, 1, 13]
n = 2
d = 3

print(superPrize(purchases, n, d))