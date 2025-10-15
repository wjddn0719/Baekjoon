s = input().strip()
v = sum(ch in "aeiou" for ch in s)
print(v)
