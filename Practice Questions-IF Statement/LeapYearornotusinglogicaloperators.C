#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a;
  scanf("%d",&a);
  (a%4==0&&a%100!=0||a%400==0)?printf("Leap Year"):printf("Not a Leap Year");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}