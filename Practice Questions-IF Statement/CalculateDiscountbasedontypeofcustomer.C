#include <stdio.h>
int main()
{
  int a;
  float d,b,c,f;
  scanf("%d",&a);
  if(a<1000)
  {
    d=0;
  }
  if((a>1000)&&(a<5000))
  {
    d=.05;
  }
  if((a>5000)&&(a<10000))
  {
    d=.1;
  }
  if(a>10000)
  {
    d=.15;
  }
  if(a>30000)
  {
    b=.02;
  }
  c=a*d;
  d=a*b;
  f=a-c-d;
  printf("%.2f",f);
    return 0;
}