#include <stdio.h>
int main()
{
 int a;
  scanf("%d",&a);
  float b,c;
  if((a<=50))
    b= a*2.5;
  if((a<=150)&&(a>50))
    b=(a-50)*2.75 +50*2.5;
  if((a<=250)&&(a>150))
    b=(a-150)*4.2 +100*2.75 +50*2.5;
  if(a>250)
    b=(a-250)*4.50 +100*4.2 +100*2.75 +50*2.5;
  c = b+.1*b;
  printf("%.2f",c);
    return 0;
}