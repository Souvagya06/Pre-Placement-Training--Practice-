class Courses:
    def __init__(self, cor1, cor2, cor3):
        self.course1 = cor1
        self.course2 = cor2
        self.course3 = cor3
        
obj = Courses('Python', 'C++', 'Java')
print (obj.course1)
print (obj.course2)
obj.course3 = 'Machine Learning'
print (obj.course3)