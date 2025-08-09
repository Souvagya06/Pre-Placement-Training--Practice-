class person:
    def __init__(self, a, b):
        self.name = a
        self.roll= b
    def show(self):
        print ("Name : ", self.name)
        print ("Roll : ", self.roll)

name = input("Enter your name: ")
roll = int(input("Enter your roll no.: "))
s1 = person(name, roll)
s1.show()