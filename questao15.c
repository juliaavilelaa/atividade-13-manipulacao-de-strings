#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 32;
        }
    }

    printf("Em maiusculo: %s\n", string);

    return 0;
}
