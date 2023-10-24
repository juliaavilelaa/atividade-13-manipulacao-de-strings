#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char alunos[5][50];
    int numAlunos = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d (ou 'FIM' pra encerrar): ", i + 1);
        scanf(" %s", alunos[i]);
        numAlunos++;

        if (strcmp(alunos[i], "FIM") == 0) {
            numAlunos--;
            break;
        }
    }

    char nomeBusca[50];
    printf("Digite o nome (ou parte do nome) que deseja buscar: ");
    scanf(" %s", nomeBusca);

    int encontrado = 0;
    for (int i = 0; i < numAlunos; i++) {
        if (strstr(alunos[i], nomeBusca) != NULL) {
            printf("Nome encontrado: %s (indice %d)\n", alunos[i], i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nome nao encontrado na lista\n");
    }

    return 0;
}
