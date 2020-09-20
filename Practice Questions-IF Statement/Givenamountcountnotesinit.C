#include <stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  int t= a/2000;
  int b= a%2000;
  int f= b/500;
  int c= b%500;
  int h= c/100;
  int d= c%100;
  int fif= d/50;
  int l= d%50;
  int tw= l/20;
  int e= l%20;
  int te= e/10;
  int g= e%10;
  int fi= g/5;
  int k= g%5;
  int two= k/2;
  int o= k%2;
  printf("%d %d %d %d %d %d %d %d %d",t,f,h,fif,tw,te,fi,two,o);

    return 0;
}