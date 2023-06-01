#include <stdio.h>
#include <stdlib.h>

int testa_PA(int n, int* v);
int main() {

    int n, i, k, *v;

    printf("Vamos construir uma PA. Insira o numero de elementos: ");

    do{
        scanf("%d", &n);
    } while (n < 3);

    do{
        printf("Insira elementos da PA:\n");
        for (i = 0; i < n; i++){
        scanf("%d",(v+i));
        k = testa_PA(n, v);
        }
    } while(k == 0);

    printf("O valor do coefiente eh %d", k);

    return 0;
}

int testa_PA(int n, int* v){
    int coef, i;
    coef = v[1] - v[0];
    for (i = 2; i < n;i++){
        if (v[i] - v[i-1] != coef){
            return 0;
        }
    }
    return coef;
}
