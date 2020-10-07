#include <stdio.h>
int main() 
{
  char s[50];
  int k=0,j=0;
  scanf("%s",s);
  for(int i=0;s[i]!='\0';i++)
  {
    if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
    {
      k=k+1;
    }
  else
  {
    j=j+1;
  }
  }
  printf("%d %d",k,j);
  return 0;
}