a=int(input())
b=len(str(a))
sum=0
temp=a
while temp>0:
    d=temp%10
    sum=sum+d**b
    temp//=10
if(a==sum):
    print("yes")
else:
    print("no")
