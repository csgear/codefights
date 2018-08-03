def areEquallyStrong(yourLeft, yourRight, friendsLeft, friendsRight):
    minL = min(yourLeft, yourRight)
    maxL = max(yourLeft, yourRight)
    minR = min(friendsLeft, friendsRight)
    maxR = max(friendsLeft, friendsRight)
    
    return minL == minR and maxL == maxR
 