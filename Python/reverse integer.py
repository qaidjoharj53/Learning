num = int(input("Enter an integer (>1000) :"))
tnum = num
reverse = 0
while tnum :
	digit = tnum % 10
	tnum = int(tnum/10)
	reverse = reverse * 10 + digit
if num > 1000 :
	print("Reverse of", num, "is", reverse)
else :
	print("The integer", num, "is less than 1000")