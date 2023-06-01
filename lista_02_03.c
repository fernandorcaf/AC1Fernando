#include <stdio.h>

void fibonacci(int termos) {
    if (termos < 1)
        return;
    int ultimo = 0;
    int penultimo = 0;
    for (int i = 1; i <= termos; i++) {
        int atual = i > 2? ultimo + penultimo : 1;
        printf("%d ", atual);
        penultimo = ultimo;
        ultimo = atual;
    }
    printf("\n");
}

int main() {
    int termos;
    printf("Termos: ");
    scanf("%d", &termos);
    fibonacci(termos);
    return 0;
}
