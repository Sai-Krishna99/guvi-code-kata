#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
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
