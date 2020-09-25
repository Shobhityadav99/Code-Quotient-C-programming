#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(char i=97;i<97+a;i++)
    {
      printf("%c ",i);
    }
    return 0;
}