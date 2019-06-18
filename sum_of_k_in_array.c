#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[20],n,k,sum,i;
sum=0;
scanf("%d\n%d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("\n%d",&a[i]);
}
for(i=0;i<k;i++)
{
    sum=sum+a[i];
}
printf("\n%d",sum);
return 0;
}
