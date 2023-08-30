#include <stdio.h>

int main()
{

  int seg;

  printf("digite um tempo em segundos\n");
  scanf("%d", &seg);

  int horas = seg / 3600.0;
  int minutos = seg / 60.0;
  int mod = seg/60.0;
  

  printf("quantidade de horas %d , quantidade de minutos %d , quantidade de segundos %d", horas, minutos, mod);
}