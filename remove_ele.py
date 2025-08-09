import numpy as nmp
l = eval(input("Enter a list: "))
arr = nmp.array(l)
m = int(input("Element to be removed: "))
print ("Before removing element: ", arr)
l.remove(m)
arr2 = nmp.array(l)
print ("After removing element: ", arr2)