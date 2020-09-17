#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int a;
  scanf("%d",&a);
  int b=a/1000;
  int c=a%1000;
  int d=c/100;
  int e=a%100;
  int f=e/10;
  int g=a%10;
 int k=g*1000 +f*100 +d*10 +b;
  printf("%d",k);
    return 0;
}