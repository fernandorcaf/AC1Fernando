#include <stdio.h>
#include <stdlib.h>

void CamelCase (char* s);

int main(){
    char txt[20];
    printf("Informe o texto: ");
    scanf(" %[ a-z]",&txt);
    CamelCase(txt);
    return 0;
}

void CamelCase (char* s) {
    char cameltxt[20];
    int aux=1;
    cameltxt[0]=s[0]-32;

    for (int i=1; s[i]!='\0'; i++){
        if(s[i]!=' '){
            cameltxt[aux]=s[i];
            aux++;
        }
        else{
            cameltxt[aux]=s[i+1]-32;
            aux++;
            i++;
        }
    }
    for (int i=0; cameltxt[i]!='\0'; i++){
        printf("%c",cameltxt[i]);
    }
}
