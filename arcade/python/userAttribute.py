class User(object):
    def __init__(self, username, _id, xp, name):
        self.username = username
        self._id = _id
        self.xp = xp
        self.name = name

    def __getattr__(self, n):
        if(n == 'username'):
            return str(self.username)
        elif(n == '_id'):
            return str(self._id)
        elif(n == 'xp'):
            return str(self.xp)
        elif(n == 'name'):
            return str(self.name)
        else:
            return n + ' attribute is not defined'


def userAttribute(attribute):
    user = User("annymaster", "1234567", "1500", "anny")
    return getattr(user, attribute)
