#include <stdio.h>
void prime(int n)
{
  if(n==0)
    return;
  if(n%2==0)
  {
    printf("2\n");
  return prime(n/2);
  }
  else if(n%3==0)
  {
    printf("3\n");
    return prime(n/3);
  }
  else if(n%5==0)
  {
    printf("5\n");
    return prime(n/5);
  }
  else if(n%7==0)
  {
    printf("7\n");
    return prime(n/7);
  }
  else if(n%11==0)
  {
    printf("11\n");
    return prime(n/11);
  }
}
int main()
{
   int no;
   scanf("%d",&no);
prime(no);
   return 0;
}
