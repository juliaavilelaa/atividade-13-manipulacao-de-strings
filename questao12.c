#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[100];
    char caractereSubstituto;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &caractereSubstituto); 

    int numeroDeVogais = 0;

    for (int i = 0; palavra[i] != '\0'; i++) {
        char c = palavra[i];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            numeroDeVogais++;
            palavra[i] = caractereSubstituto;
        }
    }

    printf("Numero de vogais na palavra: %d\n", numeroDeVogais);
    printf("Palavra com vogais substituidas: %s\n", palavra);

    return 0;
}
