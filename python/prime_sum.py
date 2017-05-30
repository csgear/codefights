
### codefights.com drilling list: prime sum

def primesSum(a, b):
    return sum([num for num in range(a, b + 1)
                if (all((num % j != 0 for j in range(2, int(num ** 0.5) + 1))) and num != 1)])