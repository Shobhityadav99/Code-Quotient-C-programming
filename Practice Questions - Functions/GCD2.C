int gcd(int a, int b)
{
    int d,c=0;
  if((b>=0)&&(a>=0))
  {
  for(int i=1;i<=a;i++)
  {
    if((a%i==0)&&(b%i==0))
    {
		c=i;
    }
  }
    return c;
  }
  if(b<0)
  {
    d=-a;
    printf("%d",d);
  }

}