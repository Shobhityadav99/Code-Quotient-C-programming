void removeDuplicates(int *arr, int *size)
{
for(int i=0;i < *size;i++)
{
        int j=i+1;
        for(int j=i+1;j<*size;)
        {
          if(arr[i]==arr[j])
          {
                *size =*size-1;
                for(int k=j;k<*size;k++)
                {
                    arr[k]=arr[k+1];
                }
           }
          else
          {
                break;
            }
        }
    }  
}