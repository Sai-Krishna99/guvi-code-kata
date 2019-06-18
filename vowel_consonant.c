#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
    {
        printf("Vowel");
    }
    else if((ch<65||ch>90)&&(ch<97||ch>122))
    {
        printf("\nInvalid");
    }
    else
        printf("\nConsonant");
return 0;
}
