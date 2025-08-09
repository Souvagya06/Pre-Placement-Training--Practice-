class Product:
    def __init__ (self, nm, pr, dc):
        self.name = nm
        self.price = pr
        self.delivery = dc
    def getName (self):
        return self.name
    def getPrice (self):
        return self.price + self.delivery

class Gift (Product):
    def __init__ (self, nm, pr, dc, wp):
        super().__init__ (nm, pr, dc)
        self.wrapping = wp
    def getPrice (self):
        return self.price + self.delivery + self.wrapping

p1 = Product ("Racing car", 1200, 70)
print ("The", p1.getName(), "will cost Rs.: ", p1.getPrice())
g1 = Gift ("Drone", 50000, 70, 30)
print ("The", g1.getName(), "will cost Rs.: ", g1.getPrice())
