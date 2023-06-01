#include <stdio.h>
#include <stdlib.h>

char *strstr(char *main, char *sub); 
int strcmp(char *nome1, char* nome2); 

int main()
{
    char nome1[80], nome2[80];
    char *substring;
        printf("Insira palavra[1]: ");
        scanf(" %[^\n]", nome1);
        printf("Insira palavra[2]: ");
        scanf(" %[^\n]", nome2);

    if (strcmp(nome1, nome2) == 0){
        printf("Essas palavras sao iguais");
    }

    else if (strcmp(nome1, nome2) == 1){
        substring = strstr(nome1, nome2);
        if (substring){
            printf("%s eh sub-string de %s", nome2, nome1);
        }
        else
            printf("Essas palavras sao completamente diferentes\n");
    }

    else if (strcmp(nome1, nome2) == -1){
        substring = strstr(nome2, nome1);
        if (substring){
            printf("%s é sub-string de %s", nome1, nome2);
        }
        else
            printf("Essas palavras sao completamente diferentes\n");
    }
    return 0;
}
int strcmp(char *nome1, char *nome2){
    int i;
    for (i= 0; nome1[i]!= 0 && nome2[i]!= 0; i++){
        if (nome1[i] < nome2[i]){
            return -1;
        }
        else if (nome1[i] > nome2[i]){
            return 1;
        }
    }
    if (nome1[i]==nome2[i]){
        return 0;
    }
    else if (nome2[i]!= 0){
        return -1;
    }
    else{
        return 1;
    }
}

char *strstr(char *main, char *sub){
    int i;
    for(i = 0; main[i]; i++){
        int j;
        for (j = 0; sub[j] && main[i + j] && sub[j] == main[i + j]; j++);
        if (sub[j] == '\0')
                return &(main[i]);
    }
    return NULL;
}
