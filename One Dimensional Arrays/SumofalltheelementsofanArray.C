#include <stdio.h>
/* Include other headers as needed */
int main()
{
int a[12];
  int s=0;
  for(int i=1;i<=10;i++)
  {
  scanf("%d\n",&a[i]);
    s=s+a[i];
  }
  printf("%d\n",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}