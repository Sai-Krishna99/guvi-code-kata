a=int(input())
str=list(map(int,input().split()))
count=dict()
for word in str: 
    if word not in count:
        count[word]=1
    else:
        count[word]+=1
for word in str:
    if (count[word]==1):
        print(word)
