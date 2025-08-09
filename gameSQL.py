import sqlite3
MyGame = sqlite3.connect('Games.db')
name = input("Enter player Name: ")
age = int(input("Enter player age: "))
pid = int(input("Enter player ID: "))
typ = input("Enter players speciality: ")
try:
    curgame = MyGame.cursor()
    curgame.execute ("INSERT INTO GamePlay (Name, Age, PlayerID, Type) VALUES (?, ?, ?, ?);", (name, age, pid, typ))
    MyGame.commit()
    print ("One Record added successfully.")
except:
    print ("Error in operation.")
    MyGame.rollback()
MyGame.close()
