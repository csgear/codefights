
def transposeDictionary(scriptByExtension):
    return [[value, key] for key, value in sorted(scriptByExtension.items(), key=lambda x:x[1])]
