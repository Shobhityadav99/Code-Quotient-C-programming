void numDigits(int n)
{
  if(n==0)
  {
    printf("1");
  }
  else
  {
    int c = 0;
    while(n != 0)
    {
        n /= 10;
        ++c;
    }
    printf("%d", c);
  }
}

