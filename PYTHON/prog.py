# cook your dish here
N = int(input( ))
divisor = 0

for i in range [1,10]:
    if N % i == 0:
        divisor = i
print(max(N, divisor))