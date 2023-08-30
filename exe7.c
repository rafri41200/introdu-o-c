#include <stdio.h>

int main()
{

   int horas;
   int minutos;
   int segundos;
   int horas_em_segundos;
   int minutos_em_segundos;
   int total_de_segundos;

   printf("Diga-me a quantidade de horas.\n");
   scanf("%d", &horas);
   printf("Diga-me a quantidade de minutos\n");
   scanf("%d", &minutos);
   printf("diga-me a quantidade de segundos.\n");
   scanf("%d", &segundos);

   horas_em_segundos = horas * 3600;
   minutos_em_segundos = minutos * 60;
   total_de_segundos = horas_em_segundos + minutos_em_segundos + segundos;

   printf(" O total de segundos desse tempo e: %d\n", total_de_segundos);
}