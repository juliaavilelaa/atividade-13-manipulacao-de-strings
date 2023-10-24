#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("String sem as vogais: ");
    
    for (int i = 0; string[i] != '\0'; i++) {
        char c = string[i];
        if ((c != 'a' && c != 'A' && c != 'e' && c != 'E' && c != 'i' && c != 'I' && c != 'o' && c != 'O' && c != 'u' && c != 'U')) {
            printf("%c", c);
        }
    }
    
    return 0;
}
