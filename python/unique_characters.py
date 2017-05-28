
def uniqueCharacters(document):
    return sorted(set(document))

if __name__ == '__main__':
    document = "Todd told Tom to trot to the timber"
    print(uniqueCharacters(document))