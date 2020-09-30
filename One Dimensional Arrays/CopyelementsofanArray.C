#include <stdio.h>
int main()
{
  int c,b[10],a[10],d;
for (c = 0; c < 10 ; c++)
      scanf("%d\n", &a[c]);
   for (c = 10 - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];
   for (c = 0; c < 10; c++)
      a[c] = b[c];
   for (c = 0; c < 10; c++)
      printf("%d\n", a[c]);
    return 0;
}