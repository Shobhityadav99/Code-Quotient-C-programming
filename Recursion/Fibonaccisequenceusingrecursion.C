#include <stdio.h>
int fib(int n)
{
  if(n==1||n==0)
    return n;
  else
  return (fib(n-1)+fib(n-2));
}
int main()
{
int i,n,c;
  scanf("%d",&n);
  c=n-1;
  for(i=1;i<=n;i++)
  {
    printf("%d\n",fib(c));
    c--;
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}