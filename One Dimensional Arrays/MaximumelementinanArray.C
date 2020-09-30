#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int ar[5];
for(int i=1;i<=5;i++)
{
  scanf("%d\n",&ar[i]);
}
int max = ar[1];
		for(int i = 1; i <=5;i++)
		{
			if(ar[i] > max)
			{
				max = ar[i];
			}
		}
  printf("%d",max);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}