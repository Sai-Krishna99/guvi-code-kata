inp=int(input())
array=list(map(int,input().split()))
c=dict()
for i in array: 
    if i not in c:
        c[i]=1
    else:
        c[i]+=1
for i in array:
    if (c[i]==1):
        print(i)
