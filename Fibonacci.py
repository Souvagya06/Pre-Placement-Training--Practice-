n = int(input("no. of terms: "))
a = 0
b = 1
print ("Fibonacci series: ")
print(a, b, end = ', ')
for i in range (1, n-1):
    c = a+b
    a = b
    b = c
    print (c, end = ', ')
