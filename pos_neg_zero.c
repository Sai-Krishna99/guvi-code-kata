#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    printf("Enter a number");
    scanf("%d",&b);
    if (b<0){
        printf("\nNegative");
    }
    else if(b>0)
        printf("\nPostive");
    else
        printf("\nZero");
return 0;
}
