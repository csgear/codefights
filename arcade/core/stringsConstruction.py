
def stringsConstruction(a, b):
    time = 20

    for i in range(0,len(a)):
        time = min(int(time),b.count(a[i])/a.count(a[i]))
    
    return time


if __name__ == "__main__":
    a = "abc" 
    b = "abccba" 
    print(stringsConstruction(a * 3,b))
    print(stringsConstruction(a,b))