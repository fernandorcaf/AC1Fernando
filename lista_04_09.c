#include <stdio.h>
#include <stdlib.h>

void printvet(int *v);
int search(int *v, int valor);
void acumulation(int *v);

int main(){
    int vet[7];
    for (int i=0; i<7; i++){
        printf("Insira um inteiro[%d]: ",i+1);
        scanf("%d",&vet[i]);
    }
    printvet(vet);

    int search_val;
    printf("\nProcure um inteiro no vetor: ");
    scanf("%d",&search_val);
    if (search(vet, search_val)==-1)
        printf("\nValor %d nao encontrado no vetor\n",search_val);
    acumulation(vet);

    return 0;
}

void printvet(int *v){
    for (int i=0; i< 7; i++){
        printf("vetor[%d] = %d\n",i,v[i]);
    }
}

int search(int *v, int valor){
    int occur = 0;
    for (int i=0; i < 7; i++){
        if(v[i]==valor){
            printf("\nValor (%d) encontrado na posicao %d\n",valor, i);
            occur += 1;
        }
    }
    if (occur != 0){
        printf("\nO valor %d foi encontrado %d vez(es)\n", valor, occur);
        return 0;
    }
    else
        return -1;
}

void acumulation(int *v){
    int vaux[7];
    int soma=v[0];
    for (int i=0; i<7; i++){
        vaux[i]=soma;
        soma+=v[i+1];
    }
    printvet(vaux);
}
