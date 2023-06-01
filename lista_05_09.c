#include <stdio.h>
#include <stdlib.h>

void contatena (char *d, char *n, char *t, char *e);

int main()
{
    char *nome = (char *) malloc(138*sizeof(char));
    if (nome == NULL){printf("falta espaço para o nome"); exit(1);}
    char *telefone = (char *) malloc(14*sizeof(char));
    if (telefone == NULL){printf("falta espaço para o telefone"); exit(1);}
    char *endereco = (char *) malloc(138*sizeof(char));
    if (endereco == NULL){printf("falta espaço para o endereco"); exit(1);}
    char *dados = (char *) malloc(290*sizeof(char));

    printf("Insira nome: ");
    scanf(" %[^\n]", nome);
    printf("insira telefone: ");
    scanf(" %[^\n]", telefone);
    printf("Insira endereco: ");
    scanf(" %[^\n]", endereco);
    contatena(dados, nome, telefone, endereco);
    printf("\nDados coletados: %s\n", dados);
    return 0;
}

void contatena (char *d, char *n, char *t, char *e){
    int i = 0, j;

    for (j = 0; n[j] != '\0'; j++){
        d[i] = n[j];
        i++;
    }
    for (j = 0; t[j] != '\0'; j++){
        d[i] = t[j];
        i++;
    }
    for (j = 0; e[j] != '\0'; j++){
        d[i] = e[j];
        i++;
    }
    d[i] = '\0';
}
