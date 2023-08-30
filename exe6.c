#include <stdio.h>

int main()
{

  char sexo;
  float peso_ideal;
  float altura;

  printf("Diga o seu sexo (h para homem, m para mulher): \n");
  scanf("%c", &sexo);
  printf("diga o sua altura em metros: \n");
  scanf("%f", &altura);

  if (sexo == 'h' || sexo == 'H')
  {
    peso_ideal = 72.2 * altura - 58;
    printf("para o sexo masculino o peso ideal e: %.2f \n", peso_ideal);
  }
  else if (sexo == 'm' || sexo == 'M')
  {
    peso_ideal = 62.1 * altura - 44.7;
    printf("para o sexo feminino o peso ideal e: %.2f \n", peso_ideal);
  }
  else
  {
    printf("Sexo desconhecido. \n");
  }
}