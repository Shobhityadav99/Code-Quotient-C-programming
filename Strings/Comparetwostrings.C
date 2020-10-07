#include <stdio.h>
#include <string.h>
int main() 
{
  char a[50],b[50];
  scanf("%s\n%s",a,b);
  int k=strcmp(a,b);
  if(k==0)
    printf("Equal");
  else if(k>=0)
    printf("Large");
  else
    printf("Small");
  return 0;
}