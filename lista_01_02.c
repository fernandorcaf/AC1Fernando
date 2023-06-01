#include <stdio.h>

int main() {
    int a, b, c, maior, menor;
    float media;

    printf("Digite três inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    // Maior
    maior = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    printf("Maior é %d\n", maior);

    // Menor
    menor = a;
    if (b < menor)
        menor = b;
    if (c < menor)
        menor = c;
    printf("Menor é %d\n", menor);

    // Média
    media = (a + b + c) / 3.0;
    printf("Média é %.2f\n", media);

    // Pares
    if (a % 2 == 0)
        printf("%d é par\n", a);
    if (b % 2 == 0)
        printf("%d é par\n", b);
    if (c % 2 == 0)
        printf("%d é par\n", c);
}
