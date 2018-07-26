
### codefights.com Drilling the lists: Correct Lineup

def correctLineup(athletes):
    return [ x for sub_l in [ (athletes[2 * i + 1], athletes[2 * i])
                              for i in range(len(athletes) // 2)] for x in sub_l]