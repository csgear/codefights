
### codefights.com: Almost increasing sequence

def almostIncreasingSequence(sequence):
    for i in range(len(sequence) - 1):
        if(sequence[i] >= sequence[i+1]):
            break

    l1 = sequence[:i] + sequence[i+1:]
    l2 = sequence[:i+1] + sequence[i+2:]

    answer1 = True
    answer2 = True

    for i in range(len(l1) - 1):
        if(l1[i] >= l1[i+1]):
            answer1 = False
            break

    for i in range(len(l2) - 1):
        if(l2[i] >= l2[i+1]):
            answer2 = False
            break

    return answer1 | answer2
