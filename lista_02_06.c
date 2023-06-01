#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numeroSorteado = rand() % 101;
    setlocale(LC_ALL, "Portuguese");
    int numeroTentativa = 0;
    scanf("%d", &numeroTentativa);
    while (numeroTentativa != numeroSorteado){
        if (numeroTentativa < numeroSorteado){
            printf("Número de tentativa é menor que o número sorteado. Tente novamente.\n");
        }
        if (numeroTentativa > numeroSorteado){
            printf("Número de tentativa é maior que o número sorteado. Tente novamente.\n");
        }
        scanf("%d", &numeroTentativa);
    }
    printf("Parabéns, você acertou!");
    return 0;
}
