#include <stdio.h>
#include <stdlib.h>
#define MAX 138
void abbrev (char *name);

int main(){
	char *full_name = (char *) malloc(MAX*sizeof(char));
	if (full_name == NULL){printf("falta de memoria"); exit(1);}

	printf("Insira nome completo: ");
	scanf("%[A-Z a-z]",full_name);
	abbrev(full_name);
	free(full_name);
    return 0;
}

void abbrev (char *name){
    char *abbrev_name = (char *) malloc(MAX*sizeof(char));
	if (abbrev_name == NULL){printf("falta de memoria"); exit(1);}
    int aux = 0;

    for (int i = 0; name[i] != '\0'; i++){
        if(name[i] <= 'Z' && name[i] >= 'A'){
            abbrev_name[aux]=name[i];
            aux++;
            abbrev_name[aux]='.';
            aux++;
        }
    }
    printf("\nNome abreviado:\n");
    for (int i = 0; abbrev_name[i] != '\0'; i++){
        printf("%c",abbrev_name[i]);
    }
    printf("\n");
    free(abbrev_name);
}
