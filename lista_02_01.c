#include <stdio.h>
#include <locale.h>

void primo(int valor);

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    int valor;
    printf("Informe um valor: ");
    scanf("%d", &valor);

    primo(valor);

    return 0;
}


void primo(int valor) {

    int inicio;
    int divisores = 0;
    for (inicio = 1; inicio <= valor; inicio++){
        if (valor % inicio == 0) {
            divisores += 1;
        }
    }

    if (divisores == 2) {
        printf("NÚMERO PRIMO");
    }
    else {
        printf("NÚMERO NÃO PRIMO");
    }

}
