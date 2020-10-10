#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d",&n);
    int a[n][n],sum=0;
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            scanf("%d",&a[i][j]);
        }}    

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
           {
             if(i+j==n-1)
        {
            sum=sum+a[i][j];
        }}
        
        }
        printf("%d",sum);
            
          

        }
