#include<stdio.h>


int main(){

  int x,n,produto,potencia;

  printf(" digite um valor x e um valor n\n");
  scanf("%d %d", &x, &n);
  
  potencia = (2<<n-1);
  produto = potencia*x;

  printf("o produto entre %d e 2 elevado a %d is %d\n",x,n,produto);

  return 0;
//2,4,,8,16
}