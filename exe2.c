#include <stdio.h>

int main(){

    int x;

    printf("digite um valor inteiro: \n");
    scanf("%d", &x);
    puts("=======\n");
    printf("numero em decimal  %d\n",x);
    printf("hexadecimal %x\n", x);
    printf("octal %o\n", x);
    printf("char %c\n",x);

}