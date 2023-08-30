#include<stdio.h>

int main()
{
  int x,y;
  
  printf("digite dois valores inteiros\n");

  scanf("%d %d",&x,&y);

 int isMultiple = (y != 0) && (x % y == 0);

 printf("%d %s  multiplo de %d\n",x,isMultiple ? "e" : "nao e" , y);

 return 0;
  
}