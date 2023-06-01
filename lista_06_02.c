#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *compactar(char *s){
    int i, primeiraLetra = 0, t = 0;
    for (i = 0; s[i] == ' '; i++) {
    }
    primeiraLetra = i;
    int tamanho = strlen(s), ultimaLetra = tamanho;
    for (i = tamanho - 1; s[i] == ' '; i--){
        ultimaLetra = i;
    }
    ultimaLetra -= 1;
    int espacos = primeiraLetra + (tamanho - i);
    char *formatada;
    formatada = (char *) malloc( ((tamanho - espacos) + 1) * sizeof(char));
    if (formatada == NULL){
        return NULL;
    }
    for (i = primeiraLetra; i <= ultimaLetra; i++) {
        formatada[t] = s[i];
        t++;
    }
    formatada[t] = '\0';
    return formatada;
}

int main() {
    char stringOriginal[256], *stringNova;
    printf("Digite sua string: ");
    scanf(" %[^\n]", stringOriginal);
    stringNova = compactar(stringOriginal);
    printf("%s", stringNova);
    free(stringNova);

    return 0;
}
