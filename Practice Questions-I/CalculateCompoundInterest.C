#include <stdio.h>
#include <math.h>
int main()
{
int p,t;
  float r;
  scanf("%d %f %d",&p,&r,&t);
  float f=(float)r/100;
  float k=(float)1+f;
  float a=(float)pow(k,t);
  float c= p*a ;
  printf("%.1f",c);
    return 0;
}