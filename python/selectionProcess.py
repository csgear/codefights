
import errno
import glob

path = '/root/devops/*/*.txt'

maths = {} 
chemistry = {}
physics = {}


files = glob.glob(path)
for name in files:
    try:
        with open(name) as f:
            pass # do what you want
    except IOError as exc:
        if exc.errno != errno.EISDIR:
            raise


def read_scores(file, subject='maths'):
    

def output_candidates:
    pass