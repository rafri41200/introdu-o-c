#include<stdio.h>

int main(){
  
  int x;

  printf( " Digite um valor inteiro: \n " );
  scanf("%d",&x);
  
  int a=(x*2);
  int b=(x*x);
  double c=(x/2.0);

  printf("%d\n",a);
  printf("%d\n",b);
  printf("%.2f\n",c);

  return 0;

}