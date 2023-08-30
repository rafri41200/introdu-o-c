#include <stdio.h>

int main()
{
  float cotacaodolar, valoremreais, valoremdolar; // valoremdolar=valoremreais/valoremdolar

  printf("Quanto esta a cotacao do dolar atualmeente?\n");
  scanf("%f", &cotacaodolar);

  printf("ok\n\n");
  printf("agora, qual o valor em reais que voce deseja converter para dolar?\n\n");
  scanf("%f", &valoremreais);

  valoremdolar = valoremreais / cotacaodolar;

  printf("o Valor em dolares dessa quantia de reais IS US$%.2f", valoremdolar);

  return 0;
}