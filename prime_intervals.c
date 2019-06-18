#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,flag;
    scanf("%d",&num1);
    scanf("%d",&num2);
    while(num1<num2)
    {
        flag=0;
            for(i=2;i<=num1/2;i++)
            {
                if(num1%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("%d ",num1);
            }
            ++num1;
    }
return 0;
}
