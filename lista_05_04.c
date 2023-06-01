#include <stdio.h>
#include <stdlib.h>

void p_caractere(char *palavra);
void u_caractere(char *palavra);
void n_caracteres(char *frase);

int main (void) {
    
    char palavra[20];
    int i;
    printf("Informe uma palavra: ");
    scanf("%19[^\n]%c", palavra);
    
    p_caractere(palavra);
    u_caractere(palavra);
    n_caracteres(palavra);
    
    return 0;
}

void p_caractere(char *palavra) {
    printf("Primeiro caractere: %c\n", palavra[0]);
}

void u_caractere(char *palavra) {
    
    int i, comprimento = (sizeof(palavra)/sizeof(char));
    for (i = 0; i < comprimento; i++) {
        if (palavra[i] == '\0') {
            printf("Ultimo caractere: %c\n", (palavra[i-1]));
            break;
        }
    }
    
}

void n_caracteres(char *palavra) {
    
    int i, n = 0;
    for (i = 0; palavra[i] != '\0'; i++) {
        n++;
    }
    printf("%d letras na palavra", n);
}
