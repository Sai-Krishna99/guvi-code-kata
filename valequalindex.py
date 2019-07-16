inp=int(input())
array=list(map(int,input().split()))
for i in range(0,len(array)):
    if(i==array[i]):
        print(array[i],end=" ")
count=0
for i in range(0,len(array)):    
    if (i!=array[i]):
        count+=1
if(count==len(array)):
    print(-1)
