int power(int num, int pow)
{
  int i,c=1;
  if(pow<0)
  {
    return -1;
  }
  if(pow>=0)
  {
  for(i=1;i<=pow;i++)
  {
    c=c*num;
  }
  return c;
  }
}