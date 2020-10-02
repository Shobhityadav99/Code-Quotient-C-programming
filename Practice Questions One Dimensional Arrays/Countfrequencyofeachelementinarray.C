void frequency(int arr[100],int t)
{
    int a=0,c,d;
    for(int i=0;i<t;i++)
    {
        if(arr[i]!=0)
        {
        for(int j=i+1;j<t;j++)
        {
            if(arr[i]==arr[j])
            {
              a++;
              arr[j]=0;
            }
        }
        printf("%d-%d\n",arr[i],a+1);
        a=0;
        }
    }
 
}
