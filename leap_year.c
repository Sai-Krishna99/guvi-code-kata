#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
scanf("%d",&a);
if(a%4==0)
{
    if(a%100==0)
    {
        if(a%400==0)
        {
            printf("yes");
        }
        else
        {
            printf("\nno");
        }
    }
    else
    {
        printf("\nyes");
    }
}
else{
    printf("\nno");
}
return 0;
}
