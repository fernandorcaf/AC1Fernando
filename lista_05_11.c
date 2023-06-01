#include <stdio.h>
#include <stdlib.h>

void inverte(char *f);

int main()
{
    char f[21];

    printf("Insira uma frase de ate %d caracteres: ", 20);
    scanf(" %20[^\n]", f);
    inverte(f);
    printf("A string invertida eh: %s\n", f);
    return 0;
}

void inverte(char *f)
{
    int i, temp, j, n = 0;

    while(f[i] != '\0'){
        i++;
        n++;
    }
    for(j = 0, i = i - 1; j < i; i--, j++){
        temp = f[j];
        f[j] = f[i];
        f[i] = temp;
    }
    f[n] = '\0';
}
