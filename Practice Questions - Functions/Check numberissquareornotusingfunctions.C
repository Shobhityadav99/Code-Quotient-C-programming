void isSquare(int n)
{
    int a,k=0;
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            printf("yes");
          k++;
        }
    }
      if(k==0)
      {
        printf("no");
      }
    
    
}
