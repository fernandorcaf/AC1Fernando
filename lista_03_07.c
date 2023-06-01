#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pti;
    int veti[]={10,7,2,6,3};
    pti = veti;
    printf("%d\n", *pti);
    /*Verdadeiro. Imprime-se o valor alocado no endereço atribuído ao ponteiro, como veti = veti[0], *pti = 10*/
    printf("%d\n", *(pti+2));
    /*Verdadeiro. Imprime-se o valor de (veti+ 2) ou veti[2] que é igual a 2*/
    printf("%d\n", pti[4]);
    /* Verdadeiro. Imprime-se o valor de veti[4] que é igual a 3*/
    printf("%d\n", pti[1]);
    /* Falso. Imprime-se o valor de veti[1] que é igual a 7*/
    printf("%d\n", *(veti + 3));
    /* Verdadeiro. imprime-se o valor de veti[3] que é igual a 6*/

    return 0;
}
