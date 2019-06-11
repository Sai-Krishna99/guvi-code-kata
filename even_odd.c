#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if (a>0)
    {
    if(a%2==0)
        printf("\nEven");
    else
        printf("\nOdd");
    }
    else
        printf("\nInvalid");
    return 0;
}
