#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[30];
    char sexo;
    int idade;

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (sexo == 'F' && idade < 25) {
        printf("Nome: %s\n", nome);
        printf("ACEITA\n");
    } else {
        printf("NAO ACEITA\n");
    }

    return 0;
}
