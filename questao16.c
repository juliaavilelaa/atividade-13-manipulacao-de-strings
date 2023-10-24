#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("String em minusculo: ");

    for (int i = 0; string[i] != '\0'; i++) {
        char caractere = string[i];
        char convertido = tolower(caractere);
        printf("%c", convertido);
    }

    return 0;
}
