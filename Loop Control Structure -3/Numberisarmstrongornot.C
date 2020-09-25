#include <stdio.h>
#include <math.h>

int main()
{
  int N, T, R, Ti =0, S = 0;
  scanf("%d", &N);
  T = N;
  while (T != 0) 
   {
      Ti = Ti + 1;
      T = T / 10;
   }
   
  T = N;
  while( T > 0)
   {
     R = T%10;
     S = S + pow(R, Ti);
     T = T/10;
   }

  if ( N == S)
      printf("yes");
  else
      printf("no");
 
  return 0;
}