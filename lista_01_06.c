#include <stdio.h>
#include <locale.h>
#include <math.h>

int funcao_delta(int a, int b, int c);
int raizes(int a, int b, int delta_da_funcao);

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    int delta_da_funcao, raizes_da_funcao;
    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    delta_da_funcao = funcao_delta(a,b,c);
    raizes_da_funcao = raizes(a, b, delta_da_funcao);

    return 0;
}

int funcao_delta(int a, int b, int c) {

    int n, delta;
    n = ((b*b)-4*a*c);
    delta = sqrt(n);

    return delta;
}

int raizes(int a, int b, int delta_da_funcao) {

    int x1, x2;
    if (b < 0) {
        x1 = ((b + delta_da_funcao)/2*a);
        x2 = ((b - delta_da_funcao)/2*a);
    }
    else {
        x1 = ((-b + delta_da_funcao)/2*a);
        x2 = ((-b - delta_da_funcao)/2*a);
    }

    printf("As raizes da função são: %d e %d", x1, x2);
}
