def sortCodesignalUsers(users):
    res = [CodeSignalUser(*user) for user in users]
    res.sort(reverse=True)
    return list(map(str, res))

class CodeSignalUser(object):
    def __init__(self, *args):
        self.name = args[0] 
        self.id = int(args[1])
        self.xp = int(args[2])
    
    def __str__(self):
        return self.name
    
    def __lt__(self, object):
        return (self.xp, object.id) < (object.xp, self.id)


if __name__ == "__main__":
    users = [["warrior", "1", "1050"],
         ["Ninja!",  "21", "995"],
         ["recruit", "3", "995"]] 
    
    print(users[1] < users[2])