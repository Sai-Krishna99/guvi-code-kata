#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,count;
count=0;
scanf("%d",&n);
while(n>0)
{
    n=n/10;
    count=count+1;
}
printf("%d",count);
return 0;
}
