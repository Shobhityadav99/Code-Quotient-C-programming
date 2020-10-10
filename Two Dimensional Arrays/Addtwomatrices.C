#include <stdio.h>
int main()
{
  int k[5][5];
  int l[5][5];
  int a,b;
 scanf("%d %d",&a,&b); 
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      scanf("%d",&k[i][j]);
    }
  }
    for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
scanf("%d",&l[i][j]);
    }
  }
      for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
     printf("%d ",k[i][j]+l[i][j]);
    }
        printf("\n");
  }
  return 0;
}