#include <stdio.h>

void main() {
    int pulo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Valores
    printf("a) *(pulo + 2) = %d\n", *(pulo + 2));
    printf("b) *(pulo + 4) = %d\n", *(pulo + 4));

    // Endereços
    printf("c) pulo + 4 = %p\n", pulo + 4);
    printf("d) pulo + 2 = %p\n", pulo + 2);
    printf("Resposta: letra a\n");
}
