#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[100];
    char resultado[100];
    int j = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] != ' ') {
            resultado[j] = string[i];
            j++;
        }
    }

    resultado[j] = '\0';

    printf("String sem espacos em branco: %s\n", resultado);

    return 0;
}
