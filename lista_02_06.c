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
            printf("N�mero de tentativa � menor que o n�mero sorteado. Tente novamente.\n");
        }
        if (numeroTentativa > numeroSorteado){
            printf("N�mero de tentativa � maior que o n�mero sorteado. Tente novamente.\n");
        }
        scanf("%d", &numeroTentativa);
    }
    printf("Parab�ns, voc� acertou!");
    return 0;
}
