#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a;
  int k=0;
  scanf("%d",&a);
  for(int i=a;i>=0;i--)
  {
    k=k+i;
  }
  printf("%d",k);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}