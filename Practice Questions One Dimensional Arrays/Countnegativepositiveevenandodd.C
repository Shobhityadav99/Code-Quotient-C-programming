#include <stdio.h>
int main()
{
int a[10];
  int p=0,n=0,e=0,o=0;
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<10;i++)
  {
    if(a[i]>0)
    {
      p++;
    }
    if(a[i]<0)
    {
      n++;
    }
    if(a[i]%2==0)
    {
      e++;
    }
    if(a[i]%2!=0)
    {
      o++;
    }
  }
  printf("%d\n%d\n%d\n%d\n",p,n,e,o);
  return 0;
}