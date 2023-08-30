#include<stdio.h>

int main(){
      
   float conta;

   printf("digite o valor da conta: \n");
   scanf("%f" , &conta);

   float dez_por_cento = conta * 0.1;
   float total_da_conta=conta+dez_por_cento;

   printf("o valor total com os 10 por cento: %.2f", total_da_conta);
   
   return 0;

}