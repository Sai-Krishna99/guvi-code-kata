#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=65&ch<=90)||(ch>=97&ch<=122))
    {
        printf("\nAlphabet");
    }
    else
        printf("\nNo");
return 0;
}
