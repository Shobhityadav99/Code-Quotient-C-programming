#include<stdio.h>
int main()
{
  	int Number, Reminder, Product;
  	scanf("%d", & Number);
  	 	
  	for(Product = 1; Number > 0; Number = Number / 10)
  	{
  		Reminder = Number % 10;
		Product = Product * Reminder;
	}
  
	printf(" %d", Product);
 
  	return 0;
}