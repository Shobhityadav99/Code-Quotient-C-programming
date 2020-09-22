#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a;
  int b=0;
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
  scanf("%d",&a);
    if(a>=50)
    {
      b=b+1;
    }
  }
  printf("%d",b);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}