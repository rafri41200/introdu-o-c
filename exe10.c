#include <stdio.h>

int main()
{
  
  int vol, comprimeto, altura, largura;

  printf("digite o valor do do comprimento, largura e altura\n");
  scanf("%d %d %d",&comprimeto,&altura,&largura);

  vol=comprimeto*altura*largura;

  printf(" o valor do volume is: %d ", vol);

  return 0;

}