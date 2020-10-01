void rotateArray(int *arr,int SIZE,int N)
{
  int i,j,l,b[N];
  int k=0;
  for(j=0;j<N;j++)
  {
    b[j]=arr[j];
  }
  for(i=0;i<SIZE;i++)
  {
    arr[i]=arr[i+N];
  }
  for(l=SIZE-N;l<SIZE;l++)
    {
      arr[l]=b[k];
    k++;
    }
  
}