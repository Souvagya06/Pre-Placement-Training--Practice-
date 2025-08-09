import sqlite3
MyGame = sqlite3.connect('Games.db')
#taking the name
nm = input("Enter the name: ")
sql = "SELECT * FROM GAMEPLAY WHERE Name = ?;"
curgame = MyGame.cursor()
curgame.execute (sql, (nm,))
record = curgame.fetchone()
print (record)

id = int(input("Enter new PlayerID: "))
sql = "UPDATE GAMEPLAY SET PlayerID = ? WHERE Name = ?;"
try:
    curgame.execute(sql, (id, nm))
    MyGame.commit()
    print ("Record Updated succesfully")
except:
    print ("Eroor occured while updating")
    MyGame.rollback()
