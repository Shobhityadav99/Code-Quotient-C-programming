  #include<stdio.h>
int main()
{
    int m,n,sum=0;
    scanf("%d",&n);
    int a[n][n];
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            scanf("%d",&a[i][j]);
        }
        }    
          for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(i==j)
            sum=sum+a[i][i];
        }
        } 
  printf("%d",sum);
  return 0;
}