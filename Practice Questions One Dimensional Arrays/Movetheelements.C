void moveElements(int arr[], int n)
{
  int i,p=0,r=0,j;
  int positive[p],negative[r];
  
  for(i=0;i<n;i++)
  {
    if(arr[i]>=0){
      
      positive[p]=arr[i];
      p++;
    }
    else
    {
      
      negative[r]=arr[i];
      r++;
    }
  }
  for(i=0;i<p;i++){
    arr[i]=positive[i];
  }
  for(i=p,j=0;i<n,j<r;i++,j++){
    arr[i]=negative[j];
}
}
