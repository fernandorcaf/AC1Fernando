#include <stdio.h>
#include <stdlib.h>
float max_vet(int n, float *vet);

int main()
{
    float *vet;
    int n, i;

    printf("Digite o numero de elementos e depois os valores do vetor ");
    scanf("%d", &n);
    vet = (float*) malloc(n*sizeof(float));
    if (vet==NULL) {printf("Falta memoria\n"); exit(1);}
    for (i = 0; i < n; i++){
        scanf("%f", &vet[i]);
        }
    printf("O maior numero foi %.2f", max_vet(n, vet));
    free(vet);

    return 0;
}

float max_vet(int n, float *vet){
    float maior = vet[0];
    int i;
    for (i = 0; i < n; i++){
        if (maior < vet[i]){
            maior = vet[i];
        }
    }
    return maior;
}
