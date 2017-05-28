
from itertools import product

def crackingPassword(digits, k, d):
    def createNumber(digs):
        return "".join(map(str, digs))

    return sorted(list(map(createNumber,
                    filter(lambda  x: int(createNumber(x) ) % d == 0, product(digits, repeat=k))
                    )))

if __name__ == '__main__':
    digits = [1, 5, 2]
    k = 2
    d = 3
    print(crackingPassword(digits, k, d))
