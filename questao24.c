#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primeiraOcorrencia(char *str, char c, int inicio) {
    int i = inicio;
    
    for (i; str[i]!='\0'; i++) {
        if (str[i] == c) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    char str[100];
    char c;
    int i;
    int resultado;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    printf("Digite a posicao de inicio: ");
    scanf("%d", &i);
    
    if (i < 0 || i >= strlen(str)) {
        printf("Posicao de inicio fora dos limites da string\n");
    } else {
        resultado = primeiraOcorrencia(str, c, i);
        
        if (resultado != -1) {
            printf("A primeira ocorrencia de '%c' a partir da posicao %d foi encontrada no indice %d\n", c, i, resultado);
        } else {
            printf("Caractere '%c' nao encontrado a partir da posicao %d\n", c, i);
        }
    }
    
    return 0;
}
