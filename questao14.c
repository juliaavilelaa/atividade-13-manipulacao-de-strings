#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavra[51];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("String resultante:\n");

    for (int i = 0; palavra[i] != '\0'; i++) {
        int ascii = (int)palavra[i] + 1;
        printf("%c", (char)ascii);
    }

    return 0;
}
