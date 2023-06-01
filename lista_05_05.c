#include <string.h>
#include <stdio.h>

int main(void) {

    char frase[80]="o rato roeu a roupa do rei de roma";
    char *p;
    p = frase;

    p[2]='m';
    p[6]='\0';
    printf("%s\n", frase); //o mato
    p = p + 3;
    printf("%s\n",p); //ato
    printf("%d\n",strlen(frase)); //6
}
