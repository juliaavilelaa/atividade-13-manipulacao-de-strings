#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra1[100];
    char palavra2[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    int comparacao = strcmp(palavra1, palavra2);

    if (comparacao < 0) {
        printf("A palavra %s vem antes na ordem alfabetica\n", palavra1);
    } else if (comparacao > 0) {
        printf("A palavra %s vem antes na ordem alfabetica\n", palavra2);
    } else {
        printf("As palavras sao iguais na ordem alfabetica\n");
    }

    return 0;
}
