n = int(input("Enter no. of terms: "))
a= new_num = summ = 0
b=1
l = [a, b]
for i in range (n-1):
    new_num = a+b
    a = b
    b = new_num
    l.append(new_num)
for m in range (1, len(l)):
    summ += l[m]**2
print ("Sumation: ", summ)