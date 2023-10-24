#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    int tamanho1 = strlen(string1);
    int tamanho2 = strlen(string2);

    if (tamanho2 > tamanho1) {
        printf("A segunda string eh maior que a primeira...\n");
    } else {
        const char *finalString1 = string1 + (tamanho1 - tamanho2);

        if (strcmp(finalString1, string2) == 0) {
            printf("A segunda string esta contida no final da primeira\n");
        } else {
            printf("A segunda string nao esta no final da primeira\n");
        }
    }

    return 0;
}
