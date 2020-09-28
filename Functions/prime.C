int prime(int n)
{
  int c;
  if (n==0 || n==1)
  {
    return 0;
  }
 else
   for ( c = 2 ; c <= n - 1 ; c++ )
   { 
      if ( n%c == 0 )
     return 0;
   }
   return 1;
}