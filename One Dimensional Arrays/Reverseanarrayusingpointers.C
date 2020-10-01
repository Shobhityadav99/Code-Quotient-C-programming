void reverseArray(int *a, int size)
{
  int temp,j,i;
for(i=0,j=size-1;i<j;i++,j--)
	{
		temp=*(a+i);
		*(a+i)=*(a+j);
		*(a+j)=temp;
	}
}
