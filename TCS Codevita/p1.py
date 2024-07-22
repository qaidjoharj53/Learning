import math


def dist(a, b):
    return math.ceil(math.sqrt((a[0] - b[0]) ** 2 + (a[1] - b[1]) ** 2))


A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))
areaAB = math.ceil(((dist(A, B)) ** 2) * 3.14)
areaAC = math.ceil(((dist(A, C)) ** 2) * 3.14)

if areaAB == areaAC:
    print(-1)
    exit()

elif areaAC > areaAB:
    difland = areaAC - areaAB
    areaAB = math.ceil(math.sqrt(areaAC - areaAB)) ** 2
    if areaAB > difland:
        print("Krishna", (areaAB - difland) * 20)
        exit()
    elif areaAB == difland:
        print(-1)
        exit()
    else:
        print("Shiva", (difland - areaAB) * 20)
        exit()

elif areaAC < areaAB:
    print("Krishna", (areaAB - areaAC) * 20)
    exit()
