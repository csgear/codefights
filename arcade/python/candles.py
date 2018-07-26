### codefights.com

def candles(candlesNumber, makeNew):
    leftover = candlesNumber
    total = candlesNumber
    while True:
        if(leftover < makeNew):
            break
        else:
            total = total + leftover // makeNew
            leftover = leftover % makeNew + leftover // makeNew

    return total
