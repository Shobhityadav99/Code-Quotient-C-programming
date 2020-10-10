#include <stdio.h>
int main()
{
  int k[5][5];
  int a,b;
 scanf("%d %d",&a,&b); 
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      scanf("%d",&k[i][j]);
    }
  }
  int max=k[0][0];
    for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      if(max<k[i][j])
      {
        max=k[i][j];
      }
    }
  }
  printf("%d",max);
  
  return 0;
}