#include <stdio.h>
/* Include other headers as needed */
int main()
{
   int a,b=0;
  int c;
   scanf("%d %d",&a,&b);
  for(int i=1;i<=b;i++)
  {
    c=a*i;
    printf("%d\n",c);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}