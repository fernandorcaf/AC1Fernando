#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int size;

    do{
        printf("Insira tamanho do vetor: ");
        scanf(" %d", &size);
    } while (size % 2 != 0);

    int vetor[size];
    int *pinicio = &vetor[0];
    int *pfim = &vetor[size-1];
    int meio = size/2;

    for(i=0; i < size; i++){
        printf("Insira inteiro do vetor[%d]: ", (i+1));
        scanf(" %d", &vetor[i]);
    }

    printf("\nVetor:");
    for (i = 0; i < size; i++){
        printf(" %d", vetor[i]);
    }

    printf("\ncaminho do ponteiro do inicio\n");
    for(int i = 0; i < meio; i++){
        printf(" %d",*pinicio);
        pinicio = pinicio+1;
        }
    printf("\ncaminho do ponteiro do fim:\n");
    for(int i = 0; i < meio; i++){
    printf(" %d",*pfim);
    pfim = pfim-1;
    }
    return 0;
}
