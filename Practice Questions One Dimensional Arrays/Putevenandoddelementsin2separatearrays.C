void separate(int a[], int T)
{ int even[T],odd[T],i,j,k;
  for (i=0,j=0,k=0; i<T; i++)
  {
    if (a[i]%2==0)
    {
      even[j]=a[i];
      j++;
    }
    else
    {
      odd[k]=a[i];
      k++;
    }
  }
 printf("Even:");
 for (int l=1,i=0; i<j; i++)
 {printf("%d",even[i]);
 if (l<j)
 {printf(" ");
 l++;}}
 printf("\n");
 printf("Odd:");
 for (int l=1,i=0; i<k; i++)
 {printf("%d",odd[i]);
  if (l<k)
  {printf(" ");
 l++;}}
}