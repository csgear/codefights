
### codefights.com drilling list: check participants

def checkParticipants(participants):
    # using the enumerate tricks
    return [x[0] for x in enumerate(participants) if x[1] < x[0]]
