int delete(int arr[], int T, int n)
{
 for(int i=0;i<T;i++)
 {
   if(arr[i]==n)
   {
     for(;i<T;i++)
     {
       arr[i]=arr[i+1];
     }
   }
 }
}
