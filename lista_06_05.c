#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* cifra_cesar(char* msg){
    int i, tam = strlen(msg) + 1;
    char *codigo;
    codigo = (char *) malloc(tam * sizeof(char));
    for (i = 0; i < tam; i++)
    {
        if (i == tam - 1) {
            codigo[i] = '\0';
        }
        else if (msg[i] >= 65 && msg[i] <= 87) {
            codigo[i] = msg[i] + 3;
        }
        else if (msg[i] >= 88 && msg[i] <= 90){
            codigo[i] = msg[i] - 23;
        }
        else if (msg[i] >= 97 && msg[i] <= 119){
            codigo[i] = msg[i] + 3;
        }
        else if (msg[i] >= 120 && msg[i] <= 122){
            codigo[i] = msg[i] - 23;
        }
        else{
            codigo[i] = msg[i];
        }
    }
    return codigo;
}

int main() {
    char msgOriginal[256], *msgCriptografada;
    printf("Digite a mensagem que deseja criptografar com a cifra de Cesar: \n");
    scanf("%255[^\n]", msgOriginal);
    msgCriptografada = cifra_cesar(msgOriginal);
    printf("Mensagem criptografada: %s \n", msgCriptografada);
    free(msgCriptografada);
    return 0;
}
