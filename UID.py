import random
def uid (l):
    a = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    b = 'abcdefghijklmnopqrstuvwxyz'

    while True:
        for i in range (2):
            if a not in l:
                l.append(a[random.randint(0, len(a)-1)])
        if len(l)==10:
            break
        for i in range (3):
            l.append(random.randint(0, 9))
        if len(l)==10:
            break
        if b not in l:
            l.append(b[random.randint(0, len(b)-1)])
        if len(l)==10:
            break
        else:
            continue
    print (l)

l= []
t = int(input("Times: "))
for i in range (t):
    uid(l)