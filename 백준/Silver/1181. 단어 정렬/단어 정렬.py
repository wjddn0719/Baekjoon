n = int(input())
b = set()
for i in range(n):
    a = input()
    b.add(a)
a = sorted(b)
a = sorted(a, key=len)
for i in range(len(a)):
    print(a[i])