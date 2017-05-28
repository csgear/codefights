def startupName(companies):
    comp1 = set(companies[0])
    comp2 = set(companies[1])
    comp3 = set(companies[2])
    res = ((comp1 & comp2) | (comp1 & comp3) | (comp2 & comp3)) - (comp1 & comp2 & comp3)
    return sorted(list(res))


if __name__ == '__main__':
    companies = ["coolcompany", "nicecompany", "legendarycompany"]
    print(startupName(companies))