int evenSum(int a[], int T)
{
  int s=0;
 for (int i = 0; i <=T; i++) 
        {
            if (i% 2 == 0) 
            {
                s=s+a[i];
            }
        }
  return s;
}
