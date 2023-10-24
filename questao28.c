#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[21];
    char string2[21];
    char c1, c2;

    while (1) {
        printf("\nMenu:\n");
        printf("a. Ler uma string S1\n");
        printf("b. Imprimir o tamanho da string S1\n");
        printf("c. Comparar S1 com uma nova string S2\n");
        printf("d. Concatenar S1 com uma nova string S2\n");
        printf("e. Imprimir S1 de forma reversa\n");
        printf("f. Contar quantas vezes um caractere aparece em S1\n");
        printf("g. Substituir a primeira ocorrência de C1 por C2 em S1\n");
        printf("h. Verificar se S2 é substring de S1\n");
        printf("i. Retornar uma substring de S1\n");
        printf("q. Sair\n");

        printf("Escolha uma opção: ");
        char escolha;
        scanf(" %c", &escolha);

        switch (escolha) {
            case 'a':
                printf("Digite a string S1: ");
                scanf(" %20s", string1);
                break;
            case 'b':
                printf("Tamanho da string S1: %d\n", (int)strlen(string1));
                break;
            case 'c':
                printf("Digite a string S2: ");
                scanf(" %20s", string2);
                if (strcmp(string1, string2) == 0) {
                    printf("S1 eh igual a S2\n");
                } else {
                    printf("S1 eh diferente de S2\n");
                }
                break;
            case 'd':
                printf("Digite a string S2 para concatenar: ");
                scanf(" %20s", string2);
                strcat(string1, string2);
                printf("Concatenacao: %s\n", string1);
                break;
            case 'e':
                printf("String S1 de forma reversa: ");
                for (int i = strlen(string1) - 1; i >= 0; i--) {
                    printf("%c", string1[i]);
                }
                printf("\n");
                break;
            case 'f':
                printf("Digite o caractere a ser contado em S1: ");
                scanf(" %c", &c1);
                int count = 0;
                for (int i = 0; i < strlen(string1); i++) {
                    if (string1[i] == c1) {
                        count++;
                    }
                }
                printf("O caractere %c aparece %d vezes em S1\n", c1, count);
                break;
            case 'g':
                printf("Digite o caractere C1 a ser substituido: ");
                scanf(" %c", &c1);
                printf("Digite o caractere C2 de substituicao: ");
                scanf(" %c", &c2);
                for (int i = 0; i < strlen(string1); i++) {
                    if (string1[i] == c1) {
                        string1[i] = c2;
                        break;
                    }
                }
                printf("String S1 apos substituicao: %s\n", string1);
                break;
            case 'h':
                printf("Digite a string S2 a ser verificada como substring: ");
                scanf(" %20s", string2);
                if (strstr(string1, string2) != NULL) {
                    printf("S2 eh uma substring de S1\n");
                } else {
                    printf("S2 nao eh uma substring de S1\n");
                }
                break;
            case 'i':
                int posicao, tamanho;
                printf("Digite a posicao inicial para a substring: ");
                scanf("%d", &posicao);
                printf("Digite o tamanho da substring: ");
                scanf("%d", &tamanho);
                if (posicao < 0 || posicao >= strlen(string1) || posicao + tamanho > strlen(string1)) {
                    printf("Posicao ou tamanho invalido.\n");
                } else {
                    char substring[21];
                    strncpy(substring, string1 + posicao, tamanho);
                    substring[tamanho] = '\0';
                    printf("Substring de S1: %s\n", substring);
                }
                break;
            case 'q':
                exit(0);
               
        }
    }
}