#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100];
    int cont = 0;

    printf("Digite uma string com zeros (0) e uns (1): ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '1') {
            cont++;
        }
    }

    printf("Quantidade de 1s na string: %d\n", cont);

    return 0;
}
