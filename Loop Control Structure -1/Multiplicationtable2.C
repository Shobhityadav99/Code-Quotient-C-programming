#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int a,b,d;
  scanf("%d %d",&a,&b);
  for(int i=1;i<=b;i++)
  {
    d=a*i;
    printf("%d\n",d);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}