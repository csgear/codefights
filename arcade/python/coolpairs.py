def coolPairs(a, b ):
    uniqueSums = {x+y for x in a for y in b if (x*y)%(x+y) == 0}
    return len(uniqueSums)


if __name__ == '__main__':
    a = [4, 5, 6, 7, 8]
    b = [8, 9, 10, 11, 12]
    print(coolPairs(a,b))