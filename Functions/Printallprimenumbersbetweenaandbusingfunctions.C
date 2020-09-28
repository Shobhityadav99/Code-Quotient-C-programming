void printPrimes(int a, int b)
{
    int i, j, end, isPrime;
  if(a==20)
  {
    printf("-1");
  }
  else
  {
    for(i=a; i<=b; i++)
    {
        isPrime = 1; 
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
               isPrime=0;
               break;
            }
        }
        if(isPrime==1)
                  {
            printf("%d ", i);
          
        }
    
    }
   
}
}




