#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a;
  scanf("%d",&a);
  if(a<3)
    printf("10");
  if((a>3)&&(a<10))
     printf("20");
     if((a>10)&&(a<30))
     printf("50");
     if(a>30)
     printf("Membership cancelled");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}