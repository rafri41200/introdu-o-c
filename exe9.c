#include <stdio.h>

int main()
{

  int x,b,c;

  printf("digite um valor:\n");
  scanf("%d",&x);
  
  b=x+1;
  c=x-1;

  printf("o valor sucessor e antecessor de %d e, respectivamente, %d e %d\n", x,b,c);

  return 0;
}