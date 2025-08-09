def ele (l):
    x = l[0]
    y = l[0]
    for i  in range (len(l)):
        if l[i]>x:
            x = l[i]
        if l[i]<y:
            y = l[i]
    print ("Smalest element: ", y)
    print ("Latgest element: ", x)

a = eval(input("Enter a list: "))
ele(a)
