#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[100];
    int idade;
    int idadeMaisJovem = 999;
    int idadeMaisVelha = -1;

    char nomeMaisJovem[100] = "";
    char nomeMaisVelha[100] = "";

    while (1) {
        printf("Digite um nome: ");
        scanf("%s", nome);

        printf("Digite a idade (ou uma idade negativa para sair): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        if (idade < idadeMaisJovem) {
            idadeMaisJovem = idade;
            for (int i = 0; nome[i] != '\0'; i++) {
                nomeMaisJovem[i] = nome[i];
            }
        }

        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
            for (int i = 0; nome[i] != '\0'; i++) {
                nomeMaisVelha[i] = nome[i];
            }
        }
    }

    printf("Pessoa mais jovem: %s, idade: %d\n", nomeMaisJovem, idadeMaisJovem);
    printf("Pessoa mais velha: %s, idade: %d\n", nomeMaisVelha, idadeMaisVelha);

    return 0;
}
