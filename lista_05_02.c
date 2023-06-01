#include<stdio.h>
#include<string.h>

int main(void) {

    char texto[]= "foi muito facil"; //uma cadeia de caracteres foi iniciada com a frase "foi muito facil"

    int i; //variavel inteira i

    for (i = 0; texto[i]!='\0'; i++) { //loop que vai percorrer toda a string
        if (texto[i] == ' ')
            break; //assim que o loop se deparar com espaço em branco, ele para de ser executado
        }
        i++; //pega o caractere que vem depois do espaço em branco

        for ( ; texto[i]!='\0'; i++) { //o loop vai percorrer toda a string a partir do caractere após o espaço em branco ate o final

            printf("%c", texto[i]); // printa na tela toda a frase do caractere até o final
        }
}
