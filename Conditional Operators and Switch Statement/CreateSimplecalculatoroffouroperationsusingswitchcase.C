#include <stdio.h>
int main()
{
   float a,b;
  char c;
  float d;
  scanf("%f %c %f",&a,&c,&b);
  switch(c)
  {
    case '+':
     d=a+b;
    break;
        case '-':
     d=a-b;
    break;
        case '*':
     d=(float)a*b;
    break;
        case '/':
     d=(float)a/b;
    break;
    
    
  }
  printf("%.2f",d);
    return 0;
}