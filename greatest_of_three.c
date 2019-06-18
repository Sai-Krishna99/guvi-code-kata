#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
scanf("%d\n%d\n%d",&a,&b,&c);
if((a>b)&&(a>c))
{
    printf("\n%d",a);
}
else if(b>c)
{
    printf("\n%d",b);
}
else
{
    printf("\n%d",c);
}
return 0;
}
