#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void registra_nome(char *nome);
void registro_senha(char *senha);

int main()
{
    char nome1[9],nome2[9], senha1[9], senha2[9];
    printf("Ola, digite o nome do seu usuario: ");
    registra_nome(nome1);
    printf("\nDigite a senha: ");
    registro_senha(senha1);
    printf("\nUsuario: ");
    printf("%s", nome1);
    printf("\nSenha: ");
    printf("%s", senha1);
    printf("\nConfirme seu nome e senha");
    printf("\nUsuario: ");
    registra_nome(nome2);
    printf("\nSenha: ");
    registro_senha(senha2);
    if(strcmp(nome1, nome2) == 0 && strcmp(senha1, senha2) == 0){
        printf("\nOK");
    }
    else{
        printf("\nAcesso negado");
    }
    return 0;
}

void registro_senha(char *senha){
    char c;
    int a = 0;
    do{
        c=getch();
        if(c <= '9' &&  c >= '0'){
            senha[a]=c;
            a++;
            printf("*");
        }
        else if(c <= 'Z' && c >= 'A'){
            senha[a]=c;
            a++;
            printf("*");
        }
        else if(c <= 'z' && c >= 'a'){
            senha[a]=c;
            a++;
            printf("*");
        }
        else if(c==8&&a){
            senha[a]=0;
            a--;
            printf("\b");
        }
        else{
            senha[a]='\0';
        }
    }while(c!=13 && a < 8);
    senha[a]='\0';
}

void registra_nome(char *nome){
    char c;
    int a = 0;
    do{
        c = getch();
        if(c <= '9' &&  c >= '0'){
            nome[a]=c;
            a++;
            printf("%c", c);
        }
        else if(c <= 'Z' && c >= 'A'){
            nome[a]=c;
            a++;
            printf("%c", c);
        }
        else if(c <= 'z' && c >= 'a'){
            nome[a]=c;
            a++;
            printf("%c", c);
        }
        else if(c==8&&a){
            nome[a]=0;
            a--;
            printf("\b");
        }
        else{
            nome[a]='\0';
        }
    }while(c!=13 && a < 8);
    nome[a]='\0';
}
