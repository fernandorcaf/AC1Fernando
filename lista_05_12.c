#include <stdio.h>
#define MAX 50

int busca(char letra, char*letras){

    for (int i=0; letras[i]!='\0'; i++){
        if(letras[i]==letra)
            return i;
    }
    return -1;
}

void recorrenciaChar(char *frase){
    char letras[MAX];
    int todasLetras[MAX];
    int ax=0;
    int resp;
    for (int i=0; frase[i]!='\0'; i++){
        resp=busca(frase[i],letras);
        if(resp==-1){
            letras[ax]=frase[i];
            todasLetras[ax]=1;
            ax++;
        }
        else{
            todasLetras[resp]+=1;
        }
    }

    for (int i=0; letras[i]!='\0'; i++){
        printf("'%c' = %d\n",letras[i],todasLetras[i]);
    }
}

int main(){
	char caracteres[MAX];
	printf("Informe uma frase: ");
	scanf("%[A-Z a-z]",&caracteres);
	recorrenciaChar(caracteres);
    return 0;
}
