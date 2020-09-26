#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a=0;
  int b=1;
  int n;
  
  scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
       printf("%d\n", a);
       int k= a+b;
        a=b;
       b=k;
      
    }
    return 0;
}