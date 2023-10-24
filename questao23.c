#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    int I, J;
    int tamanho;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite o valor de I: ");
    scanf("%d", &I);
    printf("Digite o valor de J: ");
    scanf("%d", &J);

    tamanho = strlen(str);

    if (I >= 0 && J >= I && J < tamanho) {
        for (int i = I; i <= J; i++) {
            printf("%c", str[i]);
        }
        printf("\n");
    } else {
        printf("Indices fora dos limites da string\n");
    }

    return 0;
}
