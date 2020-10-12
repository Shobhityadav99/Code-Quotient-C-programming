int decimalToBinary(int n)
{
  if(n==0)
     return 0;
   return ((n%2)+decimalToBinary(n/2)*10);
}