#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[30];

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("As 4 primeiras letras do nome sao: ");
    for (int i = 0; i < 4 && nome[i] != '\0'; i++) {
        printf("%c", nome[i]);
    }

    printf("\n");

    return 0;
}
