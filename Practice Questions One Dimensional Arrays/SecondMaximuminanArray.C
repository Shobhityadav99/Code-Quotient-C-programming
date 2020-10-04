#include <stdio.h>
int main()
{
  int i;
  int max1=-32768,max2=0;
  int arr[5];
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
   max1=arr[0];
  }
  for(i=0;i<5;i++)
  {
    if(arr[i]>max1)
    {
max2=max1;
      max1=arr[i];
      
    }
    else
    {
      if(arr[i]==max2)
      {
        continue;
      }
      else if((arr[i]>max2)&&(arr[i]<max1))
      {
        max2=arr[i];
      }
    }
  }
  printf("%d",max2);
  
  
    return 0;
}