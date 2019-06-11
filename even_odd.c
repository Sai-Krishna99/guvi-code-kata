#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:");
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
