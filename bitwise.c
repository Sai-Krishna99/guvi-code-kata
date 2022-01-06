#include<stdio.h>
#define enc_key 153
int main()
{
  char enc_text[100];
  int i;
  printf("Enter any text to decrypt: ");
  fgets(enc_text,100,stdin);
  for(i=0;enc_text[i]!='\0';i++)
  {
     enc_text[i]=enc_text[i]^enc_key;//Encrypting the text using bitwise XOR, that is, if c=a^b, then a=c^b and b=c^a.
  }
  printf("\nThe text after encryption is: %s",enc_text);
  for(i=0;enc_text[i]!='\0';i++)
  {
     enc_text[i]=enc_text[i]^enc_key;//Decrypting the text using the same function (bitwise XOR).
  }
  printf("\nAfter decryption, the original text is: %s",enc_text);
  return 0;
  }
