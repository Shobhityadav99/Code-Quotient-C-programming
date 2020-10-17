int gcd(int i, int j)
{
  if(i%j==0)
    return j;
  else
    return gcd(j,i%j);
}