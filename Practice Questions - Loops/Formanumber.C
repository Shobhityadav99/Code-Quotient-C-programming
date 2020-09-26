  #include <stdio.h>
#include <math.h>

int formNumber()
{

  int a,c,d=0;
  int b=1;
  int f=0;
scanf("%d",&a);
for(b=1;b<=a;b++)
{
  c=0;
  scanf("%d",&c);
  d=(d*10)+c;
}
return d;
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

