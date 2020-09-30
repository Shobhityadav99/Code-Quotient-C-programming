int howManyDuplicates(int numbers_count, int* numbers)
{
  int arr[numbers_count],ctr=1,ctrn=0;
  int n=numbers_count;
  for(int i=0;i<n;i++)
  {
    arr[i]=numbers[i];
  }
  for(int i=0;i<n;i++)
  {
    numbers[i]=-1;
  }
  for(int i=0;i<n;i++)
  {
    ctr=0;
    for(int j=i+1;j<n;j++)
    {
      if(numbers[i]==-1)
      {
        if(arr[i]==arr[j])
        {
          numbers[j]=0;
          ctr++;
        }
      }
    }
    if(ctr>0)
    {
      ctrn++;
    }

  }
   return ctrn;
}