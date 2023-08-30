#include <stdio.h>

int main()
{

   int x;
   float a;

   printf("digite um valor: \n");
   scanf("%d", &x);

   a = x * x;

   printf("o quadrado de %d e %.1lf", x, a);

   return 0;
}