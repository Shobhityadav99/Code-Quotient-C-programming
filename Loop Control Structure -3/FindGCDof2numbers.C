#include <stdio.h>
int main()
{
    int a,b,d,c=0;
  scanf("%d",&a);
  scanf("%d",&b);
  if((b>=0)&&(a>=0))
  {
  for(int i=1;i<=a;i++)
  {
    if((a%i==0)&&(b%i==0))
    {
		c=i;
    }
  }
  printf("%d",c);
  }
  if(b<0)
  {
    d=-a;
    printf("%d",d);
  }
  
    return 0;
}