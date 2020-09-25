#include <stdio.h>
/* Include other headers as needed */
int main()
{
int t,no,sum;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&no);
	sum=0;
	while(no!=0)
	{
		sum=sum+(no%10);
		no=no/10;
	
	}
	printf("%d\n",sum);
	
}	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}