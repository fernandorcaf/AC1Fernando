#include <stdio.h>
#include <stdlib.h>

int *aprovados(int n, int *mat, float *notas, int *tam){
    int *matriculasAprovados;
    int i;
    for (i = 0; i < n; i++) {
        if (notas[i] >= 5) {
            *tam += 1;
        }
    }
    matriculasAprovados = (int *) malloc(*tam * sizeof(int));
    if (matriculasAprovados == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    int x = 0;
    for (i = 0; i <= *tam; i++) {
        if (notas[i] >= 5){
            matriculasAprovados[x] = mat[i];
            x++;
        }
    }
    tam = matriculasAprovados;
    return matriculasAprovados;
}

int main() {
    int *matriculas, matricula;
    float *vetorNotas, nota;
    int tamanho = 0;
    printf("Digite o numero de alunos: ");
    scanf("%d", &tamanho);
    matriculas = (int *) malloc(tamanho * sizeof(int));
    if (matriculas == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    vetorNotas = (float *)malloc(tamanho * sizeof(float));
    if (vetorNotas == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    int i;
    int x = 0;
    for (i = 0; i < tamanho; i++) {
        printf("Digite a matricula do aluno: ");
        scanf("%d", &matriculas[i]);
        printf("Digite a nota do aluno: ");
        scanf("%f", &vetorNotas[i]);
        if (vetorNotas[i] >= 5){
            x += 1;
        }
    }
    int *alunosAprovados = aprovados(tamanho, matriculas, vetorNotas, &tamanho);
    free(matriculas);
    free(vetorNotas);
    printf("Matricula(s) dos alunos aprovados: ");
    for (i = 0; i < x; i++) {
        if (i == x - 1)        {
            printf("%d\n", alunosAprovados[i]);
        }
        else {
            printf("%d, ", alunosAprovados[i]);
        }
    }
    free(alunosAprovados);
    return 0;
}
