def celsiusVsFahrenheit(yourTemps, friendsTemps):
    l = map(lambda x: True if 9 * x[0] / 5.0 + 32.0 < x[1] else False, zip(yourTemps, friendsTemps))
    return sum(l)
