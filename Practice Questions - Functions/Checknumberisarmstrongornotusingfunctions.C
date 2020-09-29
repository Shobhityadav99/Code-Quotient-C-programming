#include <math.h>
void isArmstrong(int n)
{
  int T, R, Ti =0, S = 0;
  T = n;
  while (T != 0) 
   {
      Ti = Ti + 1;
      T = T / 10;
   }
   
  T = n;
  while( T > 0)
   {
     R = T%10;
     S = S + pow(R, Ti);
     T = T/10;
   }

  if ( n== S)
      printf("yes");
  else
      printf("no");
}
