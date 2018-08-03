def arrayMaximalAdjacentDifference(inputArray):
    return max([ abs(inputArray[i+1] - inputArray[i]) for i in range(len(inputArray) - 1)])
