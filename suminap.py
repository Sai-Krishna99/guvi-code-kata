N,A,D=map(int,input().split())
if((N>=1) and (N<=10000) and (A>=1) and (A<=10000) and (D>=1) and (D<=10000)):
    sum=(N/2)*((2*A)+(N-1)*D)
    print(int(sum))
