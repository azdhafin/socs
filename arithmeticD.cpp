#include <stdio.h>

int main()
{
  int a , b , i;
  
  scanf("%d%d", &a, &b);

  for (int i=a; i<=a+b; i++)
  {
    //sum += a;
    printf("%d\n", i);
  }
  //printf("%d\n", sum);
  return 0;
}
