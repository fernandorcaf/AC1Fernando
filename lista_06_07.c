#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_NUMEROS 10

int repeticao(int *numeros, int tamanho) {
    bool repetidos[MAX_NUMEROS];

    for (int i = 0; i < MAX_NUMEROS; i++)
        repetidos[i] = false;

    printf("Repetidos:\n");
    for (int i = 0; i < tamanho; i++) {
        if (repetidos[numeros[i]])
            continue;
        for (int j = i + 1; j < tamanho; j++) {
            if (numeros[i] == numeros[j]) {
                repetidos[numeros[i]] = true;
                printf("%d\n", numeros[i]);
                break;
            }
        }
    }
}

int main() {
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

    repeticao(numeros, tamanho);
    free(numeros);
}
