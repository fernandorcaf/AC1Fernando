#include <stdio.h>
#include <stdlib.h>

float media(int n, float *v);

int main (void) {
    
    int n;
    do {
        printf("Informe a quantidade de provas: ");
        scanf("%d", &n);
    } while (n < 0);
    
    float *v;
    
    float situacao;
    situacao = media(n, v);
    printf("%.1f", situacao);
    
    return 0;
}

float media(int n, float *v) {
    
    float acumulador = 0, media_acumulada = 0, media_final;
    int contagem = 0;
    
    while (contagem < n) {
        printf("Informe a %d nota: ", contagem);
        scanf("%f", &acumulador);
        media_acumulada += acumulador;
        contagem++;
    }
    
    media_final = (media_acumulada / n);
    
    return media_final;
}
