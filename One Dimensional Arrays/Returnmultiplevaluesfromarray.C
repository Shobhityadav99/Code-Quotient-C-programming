#include<limits.h>
void multiReturnArray(int *a, int size, int *min, int *max, int *sum)
{
  int i=0;
  *sum=0;
  *min=*(a+i);
  for(i=0;i<size;i++)
  {
    if(*(a+i)<*min)
    {
      *min=*(a+i);
    }
  }
  *max=*(a+i);
  for(i=0;i<size;i++)
  {
    if(*(a+i)>*(max))
    {
      *max=*(a+i);
    }
       }  for(int i=0;i<size;i++)
    *sum+=*(a+i);
  
}