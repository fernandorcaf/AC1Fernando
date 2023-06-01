#include <stdio.h>
#include <math.h>

int potencia (int a, int b);

int main(void) {

    int a, b;
    int resultado;

    do {
        printf("Digite dois valores inteiros: ");
        scanf("%d %d", &a, &b);
    } while ((a < 0) || (b < 0));

    resultado = potencia(a,b);
    printf("%d elevado %d = %d", a, b, resultado);

    return 0;
}

int potencia(int a, int b) {
    int pot;
    pot = pow(a, b);

    return pot;
}
