
def possibleSums2(coins, quantity):
    maximum = sum((map(lambda t: t[0] * t[1], zip(coins, quantity))))

    dp = [False] * (maximum + 1)

    dp[0] = True

    for coin,q in zip(coins,quantity):
        for b in range(coin):
            num = -1
            for i in range(b,maximum+1,coin):
                if dp[i]:
                    num = 0
                elif num>=0:
                    num += 1
                dp[i] = (0 <= num <= q) 

    return (sum(dp) - 1)


def possibleSums(coins, quantity):
    def subsetSum(arr,s):
        dp = [False] * (s + 1)  
        dp[0] = True

        for num in sorted(arr):  
            for i in range(1, len(dp)):  
                if num <= i:  
                    dp[i] = dp[i] or dp[i - num]  
        return sum(dp)


    maximum = sum((map(lambda t: t[0] * t[1], zip(coins, quantity))))

    combinations = [[]]*len(coins)

    for i,c in enumerate(coins):
        combinations[i] = [ j for j in range(c,(c*quantity[i])+1,c) ]

    array = []
    for item in combinations:
        array.extend(item)

    return (subsetSum(array,maximum) - 1)

if __name__ == '__main__':
    coin = [] 
    quantity = []
    possibleSums(coin, quantity) 
