#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a;
  scanf("%d",&a);
  int rev=0;
  while(a!=0)
  {
    rev=(rev*10)+(a%10);
    a=a/10;
  }
  printf("%d",rev);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}