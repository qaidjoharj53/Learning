def MakePush(Package):
    a=int(input("Enter package title :"))
    Package.append(a)
def MakePop(Package):
    if(Package == []):
        print("Stack empty")
    else:
        print("Deleted element :", Package.pop())
