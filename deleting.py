import sqlite3
MyGame = sqlite3.connect ("GAMES.db")
curgame = MyGame.cursor()
n = input("Enter name: ")
sql = "SELECT * FROM GAMEPLAY WHERE name = ?;"
curgame.execute (sql, (n,))
record = curgame.fetchone()
print (record)

rep = input("Do you want to delet this record? (Y/N): ")
sql = "DELETE FROM GAMEPLAY WHERE Name = ?;"
if rep == 'Y':
    curgame.execute(sql, (n,))
    MyGame.commit()
    print ("Record is deleted")
else:
    print ("record is not deleted")
MyGame.close()