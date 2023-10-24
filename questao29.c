#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%s", data);

    if (strlen(data) != 10 || data[2] != '/' || data[5] != '/') {
        printf("Formato invalido\n");
        return 1;
    }

    char *p = data;
    while (*p) {
        if (!isdigit(*p) && *p != '/') {
            printf("A data so pode ter numeros e barras\n");
            return 1;
        }
        p++;
    }

    if (sscanf(data, "%d/%d/%d", &dia, &mes, &ano) != 3) {
        printf("Formato invalido\n");
        return 1;
    }

    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
