#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if((a>b)&&(a>c))
    printf("%d",a);
    if((b>a)&&(b>c))
    printf("%d",b);
      if((c>b)&&(c>a))
    printf("%d",c);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}