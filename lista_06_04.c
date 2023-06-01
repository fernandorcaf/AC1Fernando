#include <stdio.h>
#include <stdlib.h>

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam){
    float *medias;
    medias = (float *)malloc(n * sizeof(float));
    if (medias == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    int i;
    for (i = 0; i < n; i++){
        medias[i] = ((t1[i] * p1) + (t2[i] * p2))/(p1 + p2);
        printf("%.1f \n", medias[i]);
    }
    int maior = 0, qtdMaiores = 0;
    for (i = 1; i < n; i++){
        if (medias[i] >= medias[maior]){
            maior = i;
        }
    }
    for (i = 0; i < n; i++){
        if (medias[maior] == medias[i]){
            qtdMaiores++;
        }
    }
    int *inscricaoMaioresMedias;
    inscricaoMaioresMedias = (int*)malloc(qtdMaiores * (sizeof(int)));
    if (inscricaoMaioresMedias == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    printf("A ou as inscricoes ");
    int x = 0;
    for (i = 0; i < n; i++){
        if (medias[maior] == medias[i]){
            inscricaoMaioresMedias[x] = inscr[i];
            printf("%d ", inscricaoMaioresMedias[x]);
            x++;
        }
    }
    printf("sao as de maior media.");
    *tam = qtdMaiores;
    free(medias);
    return inscricaoMaioresMedias;
}

int main() {
    int qtdConcorrentes;
    printf("Insira a quantidade de alunos concorrentes: \n");
    scanf("%d", &qtdConcorrentes);
    int tamanho = qtdConcorrentes;
    int *inscricoes;
    float *notasT1, *notasT2;
    inscricoes = (int*)malloc(qtdConcorrentes * (sizeof(int)));
    if (inscricoes == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    notasT1 = (float *)malloc(qtdConcorrentes * sizeof(float));
    if (notasT1 == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    notasT2 = (float *)malloc(qtdConcorrentes * sizeof(float));
    if (notasT2 == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    int i;
    for (i = 0; i < qtdConcorrentes; i++){
        printf("Insira a inscricao do aluno: \n");
        scanf("%d", &inscricoes[i]);
        printf("Digite sua nota na T1: \n");
        scanf("%f", &notasT1[i]);
        printf("Digite sua nota na T2: \n");
        scanf("%f", &notasT2[i]);
    }
    int peso1, peso2;
    printf("Insira o peso da T1: \n");
    scanf("%d", &peso1);
    printf("Insira o peso da T2: \n");
    scanf("%d", &peso2);
    int *vetorMedias = premiados(qtdConcorrentes, inscricoes, notasT1, peso1, notasT2, peso2, &tamanho);
    free(inscricoes);
    free(notasT2);
    free(notasT2);
    return 0;
}
