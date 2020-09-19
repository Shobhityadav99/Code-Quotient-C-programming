#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int c,s,p,l;
  scanf("%d\n",&c);
  scanf("%d\n",&s);
  if(c<s)
  {
    int p=s-c;
    printf("Profit\n");
    printf("%d\n",p);
  }
  if(c>s)
  {
    int l=c-s;
    printf("Loss\n");
    printf("%d\n",l);
  }
  if(c==s)
    printf("No Profit No Loss");
  
    return 0;
}