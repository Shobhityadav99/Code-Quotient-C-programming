#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int ar[7],a,k=0;
for(int i=1;i<=7;i++)
{
  scanf("%d ",&ar[i]);
}
  scanf("%d",&a);
  for(int i=1;i<=7;i++)
  {
    if(ar[i]==a)
    {
      k=k+1;
    }
  }
  if(k>0)
  {
    printf("%d\n",k);
  }
   else
    {
      printf("Not Present");
    }
    return 0;
}