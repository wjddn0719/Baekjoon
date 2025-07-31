a = int(input())
b = set(map(int, input().split()))
k = int(input())
j = input().split()
for i in range (len(j)):
    j[i] = int(j[i])
for num in j:
    if num in b:
        print(1)
    else:
        print(0)
