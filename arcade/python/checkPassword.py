def checkPassword(attempts, password):
    def check():
        while True:
            x = yield
            yield True if x == password else False
            

    checker = check()
    for i, attempt in enumerate(attempts):
        next(checker)
        if checker.send(attempt):
            return i + 1

    return -1


attempts = ["hello", "world", "I", "like", "coding"] 

password = "like"

print(checkPassword(attempts, password))