#For Binary search, list must be sorted
l = [1, 2, 3, 4, 5, 6, 7]
target = 7       #element to be found from the list
start = 0        #initial forward index  of the list
end = len(l)-1   #initial backward index of the list
found = False
while start <= end:
    mid = (start+end)//2              #finding the middle element of the list
    if l[mid] == target:              #condition, checking for if the mid element is the target element or not
        print ("The index is: ", mid)
        found = True
        break
    elif l[mid]<target:               #condition checking if target > mid element
        start = mid+1                 #if condition is true, element will be peresent in the right side posrtion of the mid element. So the start value is changing to the mid+1 element
    else:
        end = mid-1                   #similar condition statement checking for if target < mid element
if not found:
    print ("Target not found")        #if target element is missing in the list then print this
        