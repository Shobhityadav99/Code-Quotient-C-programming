#include <stdio.h>
/* Include other headers as needed */
int main()
{
int a[10];
  int k=0;
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<5;i++)
  {
    if(a[i]==a[9-i])
    {
      k++;
    }
  }
  if(k==5)
  {
    printf("Equal");
  }
  else
  {
    printf("Not Equal");
  }
    return 0;
}