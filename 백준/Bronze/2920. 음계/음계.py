a = []
k=0
a = input().split()
a = list(map(int, a))
if a == sorted(a):
    print('ascending')
elif a == sorted(a,reverse = True):
    print('descending')
else:
    print('mixed')