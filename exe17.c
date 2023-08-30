#include <stdio.h>
#include<stdlib.h>

int main()
{
   int valor_inteiro;
   
   printf("digite um valor inteiro:\n");
   scanf("%d",&valor_inteiro);
   
   int valor_absoluto=abs(valor_inteiro);
   
   printf("%d",valor_absoluto);

   return 0;
}