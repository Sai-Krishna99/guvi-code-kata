#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    scanf("%d",&b);
    if (b<0){
        printf("Negative");
    }
    else if(b>0)
        printf("Positive");
    else
        printf("Zero");
return 0;
}
