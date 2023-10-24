#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[100];
    char L1, L2;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite a letra que deseja substituir: ");
    scanf(" %c", &L1);

    printf("Agora, digite a letra que ira substitui-la: ");
    scanf(" %c", &L2);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == L1) {
            string[i] = L2;
        }
    }

    printf("String apos a substituicao: %s", string);

    return 0;
}
