#include <stdio.h>
int main() 
{
  int j=0,k=0;
  char s[50];
  scanf("%s",s);
  for (int i = 0; s[i]!='\0'; i++)
  {
    if(s[i]>47&&s[i]<=59)
    {
      k=k+1;
    }
    else
      j=j+1;
  }
  printf("%d %d",j,k);
  return 0;
}