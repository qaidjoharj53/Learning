Stack = [] 
while True:
    print("STACK OPERATIONS")
    print("1. Push")
    print("2. Pop")
    print("3. Display")
    ch = int(input("Enter your choice: "))
    if ch==1 :
       a=input('Enter item: ')
       Stack.append(a)
    elif ch==2 :
        print('Deleted element is: ',Stack.pop())
    elif ch==3 :
        i=len(Stack)
        for i in range(i-1,-1,-1):
            print(Stack[i])
    else :    
        print("Invalid choice!")