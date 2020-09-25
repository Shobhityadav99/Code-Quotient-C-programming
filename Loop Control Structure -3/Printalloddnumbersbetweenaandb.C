#include <stdio.h>
int main()
{
   int a;
  scanf("%d ",&a);
  if(a%2==0)
    a=a+1;
     int b;
  scanf("%d",&b);
  if(b%2==0)
    b=b-1;
  for(int i=a;i<=b;i=i+2)
  {
    printf("%d ",i);
  }
    return 0;
}