#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomeMercadoria[100];
    float valorTotal, valorDesconto, valorAVista;

    printf("Digite o nome da mercadoria: ");
    fgets(nomeMercadoria, sizeof(nomeMercadoria), stdin);

    printf("Digite o valor total da mercadoria: ");
    scanf("%f", &valorTotal);

    valorDesconto = 0.10 * valorTotal;

    valorAVista = valorTotal - valorDesconto;

    printf("Nome da mercadoria: %s\n", nomeMercadoria);
    printf("Valor total: R$%.2f\n", valorTotal);
    printf("Valor do desconto: R$%.2f\n", valorDesconto);
    printf("Valor a ser pago a vista: R$%.2f\n", valorAVista);

    return 0;
}
