#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, z;
    scanf("%d", &x);
    scanf("%d", &z);
    while (z < x){
        scanf("%d", &z);
    }
    printf("%d %d\n", x, z);
    int soma = x;
    int numero = x;
    int contador = 0;
    while (soma <= z){
        soma = soma + (numero + 1);
        contador = contador + 1;
        numero = numero + 1;
    }
    int numerosSomados[contador];
    int qtdNumerosSomados = contador + 1;
    int i;
    printf("X   Z    RESPOSTA\n");
    printf("%d   %d   %d (%d", x, z, qtdNumerosSomados, x);
    for(i = 1; i <= contador; i++){
        numerosSomados[i] = x + i;
        printf("+%d", numerosSomados[i]);
    }
    printf("=%d)\n", soma);
    return 0;
}
