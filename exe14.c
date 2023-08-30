#include <stdio.h>

int main()
{
  double F,C;

  printf("diga-me o valor da temperatura em graus celcius\n");
  scanf("%lf",&C);

  F = (9*C+160)/5;

  printf("o valor dessa temperatura em farinrhaith is %.2f \n",F);

  return 0;
}