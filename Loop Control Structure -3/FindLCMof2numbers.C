#include <stdio.h>
int main()
{
    int a,b,c=1,z;
    int d=1;
    int e=1;
  scanf("%d",&a);
  scanf(" %d",&b);
  z=a*b;
  if(a<0)
  {
    printf("%d",b);
  }
  if((a>=0)&&(b>=0))
  {
  for(int i=2;i<=z;i++)
  {
    if((i%a==0)&&(i%b==0))
    {
		c=i;
		break;
    }
  }
  printf("%d",c);
  }
    return 0;
}