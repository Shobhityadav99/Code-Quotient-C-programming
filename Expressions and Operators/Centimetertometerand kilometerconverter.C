#include <stdio.h>
int main()
{
    int c;
  float m,k;
  scanf("%d",&c);
  m=(float)c/100;
  k=(float)m/1000;
  printf("%.2f %.2f",m,k);
    return 0;
}