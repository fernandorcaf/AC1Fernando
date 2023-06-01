#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_caractere(char *frase, char caractere);

int main (void) {
    
    char frase[20];
    char caractere;
    
    printf("Informe uma string: ");
    scanf("%19[^\n]%c", frase);
    printf("Agora informe um caractere para remover da string: ");
    scanf(" %c", &caractere);
    
    remove_caractere(frase, caractere);
    
    return 0;
}

void remove_caractere(char *frase, char caractere) {
    
    int i, j, tamanho = strlen(frase);
    
    for (i = 0; i < tamanho; i++ ) {
        if (frase[i] == caractere) {
            for (j = i; j < tamanho; j++) {
                frase[j] = frase[j+1];
            }
            tamanho--;
            i--;
        }
    }
    
    printf("%s", frase);
}
