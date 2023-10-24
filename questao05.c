#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[30];

    printf("Digite um nome: ");
    scanf("%s", nome);

    int numeroDeLetras = strlen(nome);

    printf("O nome %s tem %d letras\n", nome, numeroDeLetras);

    return 0;
}
