#include<stdio.h>

int main(){

  int x1,x2,x3;

  x1 = 7+3*6/2-1; // primeiro multiplicação e divisão
  x2 = 2%2 + 2*2-2/2; // Primeiro são os operadores de modulo, multiplicação e divisão e só depois a subtração
  x3 = (3*9*(3+(9*3/(3)))); // primeiro o que está mais interno nos parenteses e vai executando os parenteses de fora a cada conta feita
  printf("o valor de x1 is %d de x2 is %d de x3 is %d",x1,x2,x3);

  return 0;
}