inp=int(input())
array=list(map(int,input().split()))
c=[]
for i in range(0,inp):
    for j in range(i+1,inp):
        if (array[i]==array[j]):
            c.append(array[i])
if(len(c)==0):
    print("'unique'")
else:
    c.sort()
if(len(set(c))==1):
    print(c[0])
else:
    for l in range(0,len(c)):
        print(c[l],end=" ")
