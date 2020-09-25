#include <stdio.h>
 
int main()
{
    int n, r, s = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= (n - 1); i++)
    {
        r = n % i;
	if (r == 0)
        {
            s = s + i;
        }
    }
    if (s == n)
        printf("yes");
    else
        printf("no");
    return 0;
}