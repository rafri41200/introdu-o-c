#include <stdio.h>

int main()
{

  int diasdetrabalho;
  float totalganho;

  printf("quantos dias voce trabalhou?\n");
  scanf("%d", &diasdetrabalho);

  if (diasdetrabalho <= 10)
  {
    totalganho = (diasdetrabalho * 50.25)*0.90;
    printf("voce não dirreito a bonus. o seu salario liquido,descontado os 10 por cento is %.2f\n", totalganho);
  }
  else if (diasdetrabalho > 10 && diasdetrabalho <= 20)
  {
    totalganho = ((diasdetrabalho * 50.25) * 1.20)*0.90;
    printf("voce tem direito a bonus de 20 por cento. o seu salario liquido,descontado os 10 por cento is %.2f\n", totalganho);
  }
  else if (diasdetrabalho > 20)
  {
    totalganho = ((diasdetrabalho * 50.25) * 1.30)*0.90;
    printf("voce tem direito a bonus de 30 por cento. o seu salario liquido,descontado os 10 por cento is %.2f\n", totalganho);
  }

  return 0;
}