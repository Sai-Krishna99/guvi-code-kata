arr=list(map(int,input().split()))
l=len(arr)
large=arr[0]
for i in range(1,l):
    if (large<arr[i]):
        large=arr[i]
print(large)
