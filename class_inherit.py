class Car:
    def __init__ (self, name):
        self.name = name

#inheriting fron Car
class Vehicle (Car):
    def __init__(self, name, brand):
        super().__init__(name)
        self.brand = brand
    def get(self):
        print ("Car's brand: ", self.brand)

#inheriting from Vehivle (Multilevel) and overriding car's brand
class Type (Vehicle):
    def __init__ (self, name, brand, type):
        super().__init__(name, brand)
        self.type = type
    def set (self, brand2):
        self.brand = brand2
    def get (self):
        print ("Brand: ", self.brand)
        print ("Name: ", self.name)
        print ("Type: ", self.type)

name = input("Enter car's name: ")
brand = input("Enter car's brand: ")
type = input("Enter car's type: ")
c1 = Type (name, brand, type)
c1.set("Honda")
c1.get()