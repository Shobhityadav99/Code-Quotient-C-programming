#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int a;
  scanf("%d",&a);
    int b=a/100;
    int c=a/10;
    int d=c%10;
    int f=a%100;
    int g=f%10;
    int e=b+d+g;
    printf("%d",e);


    return 0;
}