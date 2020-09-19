#include <stdio.h>
int main()
{
  char a;
  scanf("%c",&a);
  if((a>=65)&&(a<=91))
  printf("yes");
  else if((a>=97)&&(a<=123))
printf("yes");
  else
    printf("no");
    return 0;
}