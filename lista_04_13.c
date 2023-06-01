#include <stdio.h>
#include <string.h>

#define MAX_CARACTERES 256

void contagem_caracteres(char *frase) {
    int contagem[MAX_CARACTERES];
    int tamanho = strlen(frase);

    for (int i = 0; i < MAX_CARACTERES; i++)
        contagem[i] = 0;

    for (int i = 0; i < tamanho; i++) {
        unsigned char caractere = frase[i];
        if (contagem[caractere] > 0)
            continue;

        contagem[caractere] = 1;
        for (int j = i + 1; j < tamanho; j++)
            if (frase[i] == frase[j])
                contagem[caractere]++;

        printf("'%c' = ", frase[i]);
        printf("%d\n", contagem[caractere]);
    }
}

int main(void) {
    char frase[51];
    printf("Informe uma frase: ");
    scanf("%50[^\n]", frase);
    contagem_caracteres(frase);
    return 0;
}
