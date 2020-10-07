#include <stdio.h>
#include <string.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
char a[100];
  int k=0;
  for(int i=0;i<n;i++)
  {
  scanf("%s",a);
    k=strlen(a);
    printf("%d\n",k);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}