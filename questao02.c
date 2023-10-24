#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[30];
    printf("Digite uma string: ");
    fgets(string, 30, stdin);
    int tamanho = 0;
    for (int count = 1; string[count]!='\0'; count++) {
        tamanho++;
    }
    printf("Tamanho da string digitada: %d\n", tamanho);

    return 0;    
}