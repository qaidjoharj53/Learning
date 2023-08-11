nterms = int(input("How many terms do you want to print? : "))
n1, n2 = 0, 1
count = 0
if nterms <= 0:
    pass
elif nterms == 1:
    print("Fibonacci sequence upto", nterms, "term :")
    print(n1)
else:
    print(f"Fibonacci sequence upto {nterms} terms :")
    while count < nterms:
        print(n1)
        nth = n1 + n2
        n1 = n2
        n2 = nth
        count += 1
