#include <stdio.h>
#include <stdlib.h>

int main() {
    char frase[100];
    int cont = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            cont++;
        }
    }

    printf("Quantidade de espacos em branco: %d\n", cont);

    return 0;
}
