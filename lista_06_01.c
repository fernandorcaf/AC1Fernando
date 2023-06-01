#include <stdio.h>
#include <stdlib.h>

float *acima_da_media(int n, float *vet, int *tam){
    int tamanho = 0;
    float media = 0;
    int i;
    for(i=0; i < n; i++){
        media = media + vet[i];
    }
    media = media/n;
    for(i = 0; i < n; i++){
        if (vet[i] > media) {
            tamanho = tamanho + 1;
        }
    }
    *tam = tamanho;
    float *vetresposta;
    vetresposta = (float *) malloc(tamanho * sizeof(float) );
     if (vetresposta==NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    int t = 0;
    for(i = 0; i < n; i++){
        if (vet[i] > media) {
            vetresposta[t] = vet[i];
            t++;
        }
    }
    return vetresposta;
}

int main()
{
    int tamanhoStringOrig, tamanhoStringSub;
    float *stringOrig, *stringNova;
    printf("Digite o numero de elementos que o vetor tera: ");
    scanf("%d", &tamanhoStringOrig);
    stringOrig = (float *) malloc(tamanhoStringOrig * sizeof(float));
    if (stringOrig==NULL) {
        printf("Memoria insuficiente.\n");
        return 1;
    }
    int i;
    for(i=0; i < tamanhoStringOrig; i++){
        printf("Digite o %d elemento do vetor: ", i+1);
        scanf("%f", &stringOrig[i]);
    }
    stringNova = acima_da_media(tamanhoStringOrig, stringOrig, &tamanhoStringSub);
    printf("Numero(s) acima da media: ");
    for(i = 0; i < tamanhoStringSub; i++){
        printf("%g \n", stringNova[i]);
    }
    free(stringOrig);
    return 0;
}
