import mysql.connector

mydb = mysql.connector.connect(
    host="localhost", user="root", passwd="1620", database="test"
)
if mydb.is_connected() == False:
    print("Error")
mycursor = mydb.cursor()
mycursor.execute("select * from student;")
for i in mycursor:
    print("rows affected:", i)
mydb.close()
