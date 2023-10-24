#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100];

    printf("Digite uma string de numeros: ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '0') {
            string[i] = '1';
        }
    }

    printf("String modificada: %s\n", string);

    return 0;
}
