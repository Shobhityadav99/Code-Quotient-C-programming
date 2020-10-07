#include <stdio.h>
/* Include other headers as needed */
int main()
{
char c[100],f;
  int k=0;
  int i=0;
  scanf("%s\n",c);
  scanf("%c",&f);
  for( i=0;i<30;i++)
  {
    if(c[i]==f)
    {
    printf("%d",i+1);
      k=k+1;
    }
  }
  if(k==0)
  {
    printf("Not Present");
  }
    return 0;
}