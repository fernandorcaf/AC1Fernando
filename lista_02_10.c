#include <stdio.h>

int mdc(int x, int y);

int main(void) {

    int x, y;
    int resultado;

    do {
        printf("Digite dois valores inteiros: ");
        scanf("%d %d", &x, &y);
    } while ((x < 0) || (y < 0));

    resultado = mdc(x, y);
    printf("MDC de %d e %d = %d", x, y, resultado);

    return 0;
}

int mdc(int x, int y) {

    int maxdiv;

    if (x > y) {
        maxdiv = x % y;
    }
    else {
        maxdiv = y % x;
    }

    if (maxdiv == 0) {
        maxdiv++;
    }

    return maxdiv;
}
