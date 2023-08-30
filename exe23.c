#include<stdio.h>

int main(){

  int input,digito1,digito2,digito3;

  printf("digite um numero de 3 digitos\n");
  scanf("%d",&input);
  
  digito1 = input/100;
  digito2 = (input/10) % 10;
  digito3 = input % 10;

  printf(" o seu número invertido is %d%d%d\n",digito3,digito2,digito1);
  
  return 0;
}