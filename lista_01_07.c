#include <stdio.h>
#include <math.h>

void arredondamento(float x);

int main(void) {

    float x;

    printf("Digite um float: ");
    scanf("%f", &x);
    arredondamento(x);

    return 0;
}

void arredondamento(float x) {
    int result;
    result = round(x);
    printf("%d", result);
}
