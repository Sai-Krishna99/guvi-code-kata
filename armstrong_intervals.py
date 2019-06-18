n1=int(input())
n2=int(input())
for i in range(n1,n2+1):
    b = len(str(n1))
    sum = 0
    temp = i
    while temp > 0:
        d = temp % 10
        sum = sum + d ** b
        temp //= 10
    if i == sum:
        print(i)
