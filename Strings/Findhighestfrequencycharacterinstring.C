#include <stdio.h>
int main() 
{
  char s[100],a;
  int i,j,p,count,max=0;
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
    count=0;
    a=s[i];
    for(j=0;s[j]!='\0';j++)
    {
      if(s[j]==a)
        count++;
    }
    if(max<count)
    {
      max=count;
      p=i;
    }
  }
  printf("%c",s[p]);
  return 0;
}