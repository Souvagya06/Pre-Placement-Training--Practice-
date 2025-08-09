import numpy as nmp
l = eval(input("Enter a list: "))
n = int(input("Enter the position of new element: "))
a = int(input ("Enter the new element: "))
l.insert(n, a)
arr = nmp.array(l)
print (arr)