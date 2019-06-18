#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,flag=1;
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("\nno");
    }

}
