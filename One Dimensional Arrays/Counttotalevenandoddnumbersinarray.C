void count(int a[], int T)
{
  int k=0,l=0;
  for(int i=0;i<T;i++)
  {
    if(a[i]%2==0)
    {
      k=k+1;
    }
    else
    {
      l=l+1;
    }
  }
  printf("%d %d",k,l);
}
