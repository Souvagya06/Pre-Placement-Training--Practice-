l = [3, 5, 3, 7, 5, 3, 9, 5]
m = list(set(l))
for ele in m:
    count = 0
    for ment in l:
        if ele == ment:
            count += 1
    print ("Frequency of ", ele, "is: ", count)