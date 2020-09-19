#include <stdio.h>
/* Include other headers as needed */
int main()
{
   char a;
  scanf("%c",&a);
  if((a>=65)&&(a<=90))
  {
    printf("UPPER CASE");
  }
  if((a>=97)&&(a<=122))
  {
    printf("lower case");
  }
  if((a>=0)&&(a<=47))
    printf("Special character");
  if((a>=58)&&(a<=64))
    printf("Special character");
    if((a>=91)&&(a<=96))
      printf("Special character");
      if((a>=123)&&(a<=127))
    printf("Special character");
  if((a>=48)&&(a<=57))
    printf("Digit");
    return 0;
}