#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void calcula_caractere(char *frase, char caractere);

int main (void) {
    
    char frase[20];
    char caractere;
    printf("Informe uma frase: ");
    scanf("%19[^\n]%c", frase);
    printf("Informe um caractere: ");
    scanf(" %c", &caractere);
    
    calcula_caractere(frase, caractere);
    
    return 0;
}

void calcula_caractere(char *frase, char caractere) {
    
    int i, n = 0, tamanho = strlen(frase);
    for (i = 0; i < tamanho; i++) {
        if (frase[i] == caractere) {
            n++;
        }
    }
    printf("%d ocorrencias de %c", n, caractere);
    
}
