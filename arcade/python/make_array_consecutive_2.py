
### codefights.com Intro: Make array consecutive2

def makeArrayConsecutive2(statues):
    m = max(statues)
    n = min(statues)
    l = len(statues)
    return (m - n - l) + 1
