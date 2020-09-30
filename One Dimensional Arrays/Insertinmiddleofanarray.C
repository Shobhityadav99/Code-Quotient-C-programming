int insert(int arr[], int size, int n, int pos)
{
  int c;
for(c = size-1; c >= pos-1; c--)
        arr[c+1] = arr[c];

    arr[pos] = n;    // inserting the given value
}

