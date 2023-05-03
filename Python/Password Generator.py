import secrets
import string
import time

def generate_password(length):
    characters = string.ascii_letters + string.digits + string.punctuation
    password = ''.join(secrets.choice(characters) for i in range(length))
    
    return password

n = int(input("Enter the length of password : "))
Passwrd = generate_password(n)
print(Passwrd)
time.sleep(5)