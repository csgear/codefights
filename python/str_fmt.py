
import re

s = "dkkdk %f%%"

s1 = s.format("{}", "%")

print(s1)

def newStyleFormatting(s):
    return "%".join([re.sub("%([bcdeEfFgGnosxX])","{}",S) for S in s.split("%%")])
