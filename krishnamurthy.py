m = n = int(input("Enter a number: "))
_sum = 0
import math
while n>0:
    b = n%10
    n = n//10
    _sum += math.factorial(b)
if m == _sum:
    print (m, "is a krishnamurthy number")
else:
    print (m, "is not a krishnamurthy number")
