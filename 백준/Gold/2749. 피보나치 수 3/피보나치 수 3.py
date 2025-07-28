a = int(input())
b = [0, 1]
mod = 1500000
for i in range(2, a%mod+1):
	b.append((b[i-1] + b[i-2])%1000000)
print(b[-1])