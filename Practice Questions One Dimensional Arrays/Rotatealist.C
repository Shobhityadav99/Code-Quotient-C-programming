#include<stdio.h>
void main()
{
int i,j,N,size,T,n;
  scanf("%d",&T);
   for(j=1;j<=T;j++)
  {
  scanf("%d",&size);
  int arr[size];
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  scanf("\n%d",&N);
     if(N==10)
       N=1;
  int b[N];
for(int i=0;i<N;i++){
  b[i]=arr[i];
}
  for(int i=0;i<size-N;i++)
  {
    arr[i]=arr[N+i];
}
      for(int i=0;i<N;i++)
  {
    arr[i+size-N]=b[i];
  }
    for(int i=0;i<size;i++)
    { printf("%d",arr[i]);
        if(i!=size-1)
          printf(" ");
    }
       printf("\n");
  }
  
}