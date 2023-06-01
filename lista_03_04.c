#include <stdio.h>
#include <stdlib.h>

int divs(int n);
void max_min(int n, int *pmax, int *pmin);
int main()
{
    int n, min, max = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    max_min(n, &max, &min);

    if(divs(n) != 0){
        printf("O maior divisor comum eh %d\nO menor divisor eh %d", max, min);
    }
    else{
        printf("Este numero eh primo, logo, so eh divisivel por 1 e ele mesmo");
    }
    return 0;
}

void max_min(int n, int *pmax, int *pmin){
    int i;

    for(i = 2; i < n; i++){
        if (n % i == 0){
            *pmax = i;
        }
    }
    for (i = n; i > 1; i--){
        if (n % i == 0){
            *pmin = i;
        }
    }
}

int divs(int n){
    int i, cont = 0;
    for (i = 1; i <= n; i++){
        if (n % i == 0){
            cont += 1;
        }
    }
    if (cont == 2){
        return 0;
    }
    else{
        return 1;
    }
}
