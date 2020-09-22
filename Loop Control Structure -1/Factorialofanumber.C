#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a,b=1;
  int c=0;
  scanf("%d",&a);    
  for(c=1;c<=a;c++)
  {
    b=b*c;
  }
  printf("%d",b);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}