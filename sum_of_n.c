#include <stdio.h>
#include <stdlib.h>

int main()
{
int N,i,sum;sum=0;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    sum=sum+i;
}
printf("%d",sum);
return 0;
}
