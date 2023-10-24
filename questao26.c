#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void codificarCesar(char *string, int deslocamento) {
    for (int i = 0; string[i] != '\0'; i++) {
        char c = string[i];
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + deslocamento) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + deslocamento) % 26;
        }
        string[i] = c;
    }
}

int main() {
    char string[100];

    printf("Digite uma string para ser codificada: ");
    fgets(string, sizeof(string), stdin);

    int deslocamento = 3;

    codificarCesar(string, deslocamento);

    printf("String codificada: %s\n", string);

    return 0;
}
