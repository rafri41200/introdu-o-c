#include <stdio.h>

int main()
{
  int horas_trabalhadas;
  float salario_liquido, salario_bruto, valor_hora_aula;

  printf("diga a quantidade de horas trabalhadas esse mes:\n");
  scanf("%d", &horas_trabalhadas);
  printf("qual o valor da sua hora aula\n");
  scanf("%f", &valor_hora_aula);

  salario_bruto = horas_trabalhadas * valor_hora_aula;
  salario_liquido = salario_bruto * 0.90;

  printf(" o seu salário bruto is %.2f e o seu salario liquido is %.2f\n", salario_bruto, salario_liquido);

  return 0;
}