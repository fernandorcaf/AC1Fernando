#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_NUMEROS 10

int *repeticao(int *numeros, int tamanho, int *tamanho_repetidos) {
    bool repetidos[MAX_NUMEROS];
    int *resultado = NULL;

    for (int i = 0; i < MAX_NUMEROS; i++)
        repetidos[i] = false;

    for (int i = 0; i < tamanho; i++) {
        if (repetidos[numeros[i]])
            continue;
        for (int j = i + 1; j < tamanho; j++) {
            if (numeros[i] == numeros[j]) {
                repetidos[numeros[i]] = true;
                break;
            }
        }
    }

    *tamanho_repetidos = 0;
    for (int i = 0; i < MAX_NUMEROS; i++)
        if (repetidos[i])
            (*tamanho_repetidos)++;

    if (*tamanho_repetidos > 0)
        resultado = malloc(*tamanho_repetidos * (sizeof *resultado));

    if (!resultado)
        return NULL;

    for (int i = 0, j = 0; i < MAX_NUMEROS; i++)
        if (repetidos[i])
            resultado[j++] = i;

    return resultado;
}

int main() {
    int *tamanho_repetidos;
    int *repetidos;
    int *numeros;
    int tamanho;

    printf("Tamanho: ");
    scanf("%d", &tamanho);

    // Números aleatórios
    numeros = malloc(tamanho * (sizeof *numeros));
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++)
        numeros[i] = rand() % MAX_NUMEROS;
    for (int i = 0; i < tamanho; i++)
        printf("[%d]=%d\n", i, numeros[i]);

    // Repetidos
    repetidos = repeticao(numeros, tamanho, tamanho_repetidos);
    if (repetidos) {
        printf("Repetidos:\n");
        for (int i = 0; i < *tamanho_repetidos; i++)
            printf("%d\n", repetidos[i]);
        free(repetidos);
    }

    free(numeros);
}
