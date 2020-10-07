#include <stdio.h>
#include <string.h>
int main() 
{
  char a[50],b[50];
  scanf("%s\n%s",a,b);
  strcat(a,b);
  printf("%s",a);
  return 0;
}