import mysql.connector

# Configure MySQL Connector
mydb = mysql.connector.connect(
    host="localhost", user="root", password="1620", database="test"
)

# Create a cursor object
mycursor = mydb.cursor()

# Create a table (if it doesn't exist)
mycursor.execute(
    "CREATE TABLE IF NOT EXISTS students (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255), age INT)"
)

# Insert data into the table
sql = "INSERT INTO students (name, age) VALUES (%s, %s)"
values = ("Alice", 25)
mycursor.execute(sql, values)
mydb.commit()

print("Data inserted successfully.")

# Fetch and display data from the table
mycursor.execute("SELECT * FROM students")
result = mycursor.fetchall()

print("Fetched data from the table:")
for row in result:
    print("ID:", row[0])
    print("Name:", row[1])
    print("Age:", row[2])
    print("----------")

# Close the cursor and database connection
mycursor.close()
mydb.close()
