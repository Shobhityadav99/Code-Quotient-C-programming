#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a/1000;
    int c=a%1000;
    int d=c/100;
    int e=a%100;
    int f=e/10;
    int g=a%10;
    b=b+1;
    d=d+1;
    f=f+1;
    g=g+1;
  if(g==10)
  g=0;
  if(f==10)
  f=0;
  if(d==10)
  d=0;
  if(b==10)
  b=0;
  int t=b*1000+d*100+f*10+g;
  printf("%d",t);
  
    return 0;
}