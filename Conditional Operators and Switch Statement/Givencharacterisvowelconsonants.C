#include <stdio.h>
int main()
{
   char a;
  scanf("%c",&a);
  switch(a)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      printf("vowel");
      break;
    default:
      printf("consonant");
      break;
      
      
  }
    return 0;
}