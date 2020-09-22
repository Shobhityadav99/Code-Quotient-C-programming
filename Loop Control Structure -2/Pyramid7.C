#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a;
  int t=1;
  scanf( "%d", &a);
  for(int i=1;i<=a;i++)
  {
    for(int k=1;k<=i;k++)
    {
      printf("%d", t);
      if((t!=1)&&(t!=3)&&(t!=6)&&(t!=10)&&(t!=15))
      {
        printf(" ");
      }
      t++;
    }
    printf( "\n" );
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}