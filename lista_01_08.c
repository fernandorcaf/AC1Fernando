#include <stdio.h>
#include <stdlib.h>

int total_de_notas(int valor){
    int notas = 0;
    if (valor >= 100) {
        notas = notas + (int) (valor / 100);
        valor = valor % 100;
    }
    if (valor >= 50) {
        notas = notas + (int) (valor / 50);
        valor = valor % 50;
    }
    if (valor >= 20) {
        notas = notas + (int) (valor / 20);
        valor = valor % 20;
    }
    if (valor >= 10) {
        notas = notas + (int) (valor / 10);
        valor = valor % 10;
    }
    if (valor >= 5) {
        notas = notas + (int) (valor / 5);
        valor = valor % 5;
    }
    if (valor >= 2) {
        notas = notas + (int) (valor / 2);
        valor = valor % 2;
    }
    if (valor >= 1) {
        notas = notas + (int) (valor / 1);
        valor = valor % 1;
    }
    return notas;
}

int main()
{
    int v = 0;
    int n = 0;
    scanf("%d", &v);
    n = total_de_notas(v);
    printf("%d", n);

    return 0;
}

