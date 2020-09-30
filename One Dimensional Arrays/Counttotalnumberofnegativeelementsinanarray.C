int count(int arr[], int T)
{
  int k=0;
  for(int i=0;i<T;i++)
  {
    if(arr[i]<0)
    {
      k=k+1;
    }
  }
  return k;
}