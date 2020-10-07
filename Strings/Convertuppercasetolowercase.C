#include <stdio.h>
int main() 
{
  char s[50];
  scanf("%s",s);
  for (int i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
      }
  }
  printf("%s",s);
  return 0;
}