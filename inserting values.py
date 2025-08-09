import sqlite3
MyScore = sqlite3.connect('Scores.db')
curscore = MyScore.cursor()
roll = int(input("Enter roll no.: "))
name = input ("Enter name: ")
score = int(input("Enter score: "))
rank = int(input("Enter desired rank: "))
curscore.execute ("INSERT INTO Students (Rollno, Name, Score, Rank) VALUES (?, ?, ?, ?);", (roll, name, score, rank))
MyScore.commit()
