### codefights.com string slithering new style formating

import re

def newStyleFormatting(s):
    ### split by %% and process each split using regex
    return "%".join([re.sub("%([bcdeEfFgGnosxX])", "{}", S) for S in s.split("%%")])
