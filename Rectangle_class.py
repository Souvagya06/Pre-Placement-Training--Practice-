class Rectangle:
    def __init__ (self, length, width):
        self.length = length
        self.width = width
    def area (self):
        print ("Area: ", self.length * self.width)
length = float(input("Enter length of rectangle: "))
width = float(input("Enter width of rectangle: "))
r1 = Rectangle (length, width)
r1.area()