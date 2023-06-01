#include <stdio.h>
#include <stdlib.h>

int inverte(int n);

int main()
{
    unsigned int n;
    unsigned int r;
    printf("escreva um numero sem sinal: ");
    scanf("%d", &n);
    r = inverte(n);
    printf("O inverso de %d seria %d ", n, r);
    return 0;
}
int inverte(int n)
{
    unsigned int cifra = 0;

    while (n != 0)
    {

    cifra += n % 10;
    cifra *= 10;
    n = n / 10;

    }

    cifra /= 10;

    return cifra;
}
