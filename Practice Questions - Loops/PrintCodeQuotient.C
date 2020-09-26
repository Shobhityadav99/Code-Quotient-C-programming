#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int a,b;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++)
  {
    if((i%3==0)&&(i%5==0))
    {
      printf("CodeQuotient\n");
    }
    else if(i%3==0)
    {
      printf("Code\n");
    }
    else if(i%5==0)
    {
      printf("Quotient\n");
    }
    
        if((i%3!=0)&&(i%5!=0))
    {
      printf("%d\n",i);
    }
   
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}