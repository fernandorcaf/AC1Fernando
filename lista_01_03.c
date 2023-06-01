#include <stdio.h>

float calculadora(float a, float b, char operacao);

int main(void) {

    float a, b;
    char operacao;
    printf("Digite: número operação número: \n");
    scanf("%f %c %f", &a, &operacao, &b);

    calculadora(a, b, operacao);
    return 0;
}

float calculadora(float a, float b, char operacao) {

    switch (operacao) {
        case '+': printf("%f + %f = %f", a, b, a+b); break;
        case '-': printf("%f - %f = %f", a, b, a-b); break;
        case '*': printf("%f * %f = %f", a, b, a*b); break;
        case '/': printf("%f / %f = %f", a, b, a/b); break;
    }

}
