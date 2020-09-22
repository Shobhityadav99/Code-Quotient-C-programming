#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int a,b;
  int i;
  int k;
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    for(k=1;k<=i;k++)
    {
      printf("%d",k);
    }
  printf("\n");
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}