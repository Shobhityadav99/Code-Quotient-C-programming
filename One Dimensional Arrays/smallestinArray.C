int smallestinArray (int a[], int n)
{
 int minimum, c;
    for (c = 0; c <n; c++)
    minimum = a[0];
    for (c = 1; c < n; c++)
    {
        if (a[c] < minimum)
        {
           minimum = a[c];
           
        }
    }
  return minimum;
}

