class Functions(object):
    @staticmethod
    def sign(x):
        return (x > 0) - (x < 0)

def sign(x):
    return Functions.sign(x)
