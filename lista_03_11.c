#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    
    int n;
    do {
        printf("Informe o numero de pessoas: ");
        scanf("%d", &n);
    } while (n < 0);
    
    int *vet_idade;
    float *vet_altura;
    int *vet_sexo;
    
    vet_idade = (int *) malloc(n * sizeof(int));
    vet_altura = (float *) malloc(n * sizeof(float));
    vet_sexo = (int *) malloc(n * sizeof(int));
    
    if ((vet_idade == NULL) && (vet_altura == NULL) && (vet_sexo == NULL)) {
        printf("Falta de memoria");
        exit(1);
    }
    
    int i;
    for (i = 0; i < n; i++) {
        printf("idade: ");
        scanf("%d", &vet_idade[i]);
        printf("altura: ");
        scanf("%f", &vet_altura[i]);
        printf("Digite 0 para feminino e 1 para masculino : ");
        scanf("%d", &vet_sexo[i]);
    }
    
    int j, n_mulheres = 0, n_homens = 0;
    for (j = 0; j < n; j++) {
        if ((vet_sexo[j] == 0) && (vet_idade[j] > 20) && (vet_idade[j] <= 35)) {
            n_mulheres ++;
        }
        if ((vet_sexo[j] == 1) && (vet_altura[j] > 1.8)) {
            n_homens ++;
        }
    }
    
    printf("Mulheres com idade entre 20 e 35: %d\n", n_mulheres);
    printf("Homens com altura acima de 1.8: %d\n ", n_homens);
    
    float acumulador = 0, media_altura;
    int contagem;
    while (contagem < n) {
        acumulador += vet_altura[contagem];
        contagem ++;
    }
    media_altura = (acumulador/n);
    
    float variancia, seiLa = 0;
    int k;
    for(k = 0; k < n; k++) {
        seiLa += ((vet_altura[k] - media_altura) * (vet_altura[k] - media_altura));
    }
    variancia = (seiLa/n);
    printf("Variancia das alturas = %f", variancia);
    
    free(vet_idade);
    free(vet_altura);
    free(vet_sexo);
    
    return 0;
}
