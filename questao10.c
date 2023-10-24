#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    printf("Palavra de tras para frente: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    
    return 0;
}
