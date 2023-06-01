#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char sorteio() {
    srand(time(NULL));
    return 'a' + (rand() % 26);
}

int main() {
    char sorteado = sorteio();
    char chute;

    // Chute
    printf("Chute: ");
    scanf("%c", &chute);
    if (chute < 'a' || chute > 'z')
        return 1;

    // Acertou?
    if (chute < sorteado)
        printf("O chute %c é menor que a letra sorteada %c\n", chute, sorteado);
    else if (chute > sorteado)
        printf("O chute %c é maior que a letra sorteada %c\n", chute, sorteado);
    else
        printf("Você acertou a letra sorteada %c\n", sorteado);

    return 0;
}
