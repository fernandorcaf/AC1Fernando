#include <stdio.h>
#include <conio.h>

int main()
{
    int i, tamanhoDoVetor = 0;
    char vtr[80], temp;
    for (i = 0; i < 80; i++) {
        temp = getch();
        if (temp == '\r') {
            break;
        }
        else {
            vtr[i] = temp;
            ++tamanhoDoVetor;
        }
    }

    for (i = 0; i < tamanhoDoVetor; i++) {
        if (vtr[i] == ' ') {
            printf("\n");
        }
        else {
            printf("%c", vtr[i]);
        }
    }

    return 0;
}
