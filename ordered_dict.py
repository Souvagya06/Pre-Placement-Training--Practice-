n = int(input("No. of items: "))
items = {}
for i in range (n):
    name = input("Enter name: ")
    price = int(input("Enter price: "))
    if name in items:
        items[name] += price
    else:
        items[name] = price
for name, price in items.items():
    print (name, " ", price)