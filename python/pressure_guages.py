
### codefights.com drilling the lists: pressure guages

def pressureGauges(morning, evening):
    return list(zip(*[(x, y) if x <= y else (y,x) for x,y in zip(morning, evening) ]))