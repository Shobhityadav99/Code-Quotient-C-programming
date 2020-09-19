#include <stdio.h>
/* Include other headers as needed */
int main()
{
int a;
  scanf("%d",&a);
  if(a>=75)
    printf("A");
  if((a>=60)&&(a<75))
     printf("B");
     if((a>=55)&&(a<60))
     printf("C");
     if((a>=50)&&(a<55))
     printf("D");
        if(a<50)
     printf("E");
    return 0;
}