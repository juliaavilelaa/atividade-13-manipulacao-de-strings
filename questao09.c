#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[30];

    printf("Digite um nome: ");
    scanf("%s", nome);

    char primeiraLetra = nome[0];

    if (primeiraLetra == 'a' || primeiraLetra == 'A') {
        printf("Nome: %s\n", nome);
    }

    return 0;
}
