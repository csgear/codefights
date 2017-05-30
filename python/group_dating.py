
### codefighs.com drilling the list: group dating

def groupDating(male, female):
    # take 2 list seperatly
    return  \
        [
            [ x[0] for x in [ (x,y) for x,y in zip(male, female) if (x != y)]],
            [ x[1] for x in [ (x,y) for x,y in zip(male, female) if (x != y)]]
        ]

