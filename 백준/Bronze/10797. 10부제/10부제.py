D = int(input())
cars = list(map(int, input().split()))

count = 0
for car in cars:
    if car == D:
        count += 1

print(count)
