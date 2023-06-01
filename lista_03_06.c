#include <stdio.h>
#include <stdlib.h>
int maiores(int n, int * vet, int x);

int main()
{
    int i, n, x, *vet;

    printf("Digite o tamanho do vetor e depois os seus elementos(numeros inteiros): ");
    scanf("%d", &n);
    vet = (int *)malloc(n*sizeof(int));
    for (i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    printf("Digite um valor para comparacao com os elementos do vetor: ");
    scanf("%d", &x);
    int maior =  maiores(n, vet, x);
    free(vet);
    printf("Ha %d valor(es) maior(es) que %d", maior, x);
    return 0;
}
int maiores(int n, int *vet, int x){
    int i, count = 0;

    for (i = 0; i < n; i++){
        if (vet[i] > x){
            count += 1;
        }
    }
    return count;
}
