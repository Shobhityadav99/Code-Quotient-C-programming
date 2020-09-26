#include <stdio.h>
/* Include other headers as needed */
int main()
{
      int n,m,i,j,k,temp,l=1,y=0;
  scanf("%d %d",&n,&m); 
  for(i=1;i<=n;i++)
  {
    temp=0;
    for(j=1;j<=n;j++)
    {
    if(i%j==0)
      temp++;
    }
    if(temp==2&&l<=m)
    {
    printf("%d\n",i);
      l++;
    }
  }
    return 0;
}