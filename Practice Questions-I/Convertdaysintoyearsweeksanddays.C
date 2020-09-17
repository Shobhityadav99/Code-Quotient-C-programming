#include <stdio.h>
int main()
{
   int a;
  scanf("%d",&a);
  int y=a/365;
  int k=a-365*y;
  int w=k/7;
  int d=a-365*y-w*7;
  printf("%d %d %d",y,w,d);
    return 0;
}