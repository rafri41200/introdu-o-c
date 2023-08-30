#include <stdio.h>

int main()
{
   
   float a,b, soma,subtracao, produto, divisao, resto;

   printf("digite dois números:\n\n");
   scanf("%f %f",&a , &b);

   soma=a+b;
   subtracao=a-b;
   produto=a*b;
   divisao=a/b;

   int intA = (int)a; // Converter para inteiro
    int intB = (int)b; 
   resto=(intA%intB);

   printf("a soma entre %.2f e %.2f is %.2f, e a subtracao is %.2f e  produto is %.2f",a,b,soma,subtracao,produto);
   printf("a divisao is %.2f e o resto se for entre números inteiros is %.2f", divisao,resto);

   return 0;


}