#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcula_vogais(char *frase, int *n);

int main (void) {
    
    char frase[100];
    int n_vogais = 0;
    printf("Informe uma string: ");
    scanf("%[^\n]%c", frase);
    
    calcula_vogais(frase, &n_vogais);
    
    printf("Numero de vogais = %d", n_vogais);
    
    return 0;
}

void calcula_vogais(char *frase, int *n) {
    
    int tamanho = strlen(frase), i;
    for (i = 0; i < tamanho; i++) {
        if ((frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'i') || (frase[i] == 'o') || (frase[i] == 'u')) {
            (*n)++;
        }
    }
}
