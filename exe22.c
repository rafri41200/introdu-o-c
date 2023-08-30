#include <stdio.h>

int main() {
    // Conjunto de caracteres: A BCabc 0 12 * +
    char characters[] = "ABCabc012$*+";
    
    printf("Caracteres e seus valores inteiros equivalentes:\n");
    
    for (int i = 0; characters[i] != '\0'; i++) {
        printf("'%c' : %d\n", characters[i], characters[i]);
    }
    
    return 0;
}