#include <stdio.h>
#include <stdio.h>
#define N 20

void tabela (void);
float modulo (float n1, float n2);

 int main(){
    char nota;
    float otimo=0, maiorOtimo=0, bom=0, regular=0, ruim=0, maiorRuim=0, pessimo=0, maiorPessimo=0;
    float idade=0, maior_dif=0, i=0, somaIdadeRuim=0, perc_dif=0;

    tabela();

    for( i=1; i<=N; i++ ){
        printf("\n%.0f - Idade: ", i);
        scanf("%f", &idade);
        printf("Nota: ");
        scanf(" %c", &nota);
        if( nota == 'a' ){
            otimo++;
            if( idade >= maiorOtimo )
                maiorOtimo = idade;
        }

        else if( nota == 'b' )
            bom++;

        else if( nota == 'c' )
            regular++;

        else if( nota == 'd' ){
            ruim++;
            somaIdadeRuim = somaIdadeRuim + idade;
            if( idade >= maiorRuim )
                maiorRuim = idade;
        }
        else{
            pessimo++;
            if( idade >= maiorPessimo)
                maiorPessimo = idade;
        }
    }

    bom = (bom / N)* 100;
    regular = (regular / N)* 100;
    pessimo = (pessimo / N)* 100;

    perc_dif = modulo(bom, regular);
    maior_dif = modulo(maiorOtimo, maiorRuim);

    printf("\n\nQuantidade de respostas otimo: %.0f", otimo);
    printf("\nDifer. perc. entre respostas bom e regular: %.2f%%", perc_dif);
    printf("\nMedia de idade das pessoas que responderam ruim: %.2f", (somaIdadeRuim / ruim));
    printf("\nPorcentagem de respostas pessimo: %.2f%%", pessimo);
    printf("\nMaior idade que utilizou a opcao pessimo: %.0f", maiorPessimo);
    printf("\n\nDiferenca de idade entre a maior idade que respondeu ");
    printf("otimo e a maior idade que respondeu ruim: %.0f", (maior_dif));
    return 0;
}

void tabela(void){
    printf("Avaliacoes");
    printf("\n a  -   otimo");
    printf("\n b  -   bom");
    printf("\n c  -   regular");
    printf("\n d  -   ruim");
    printf("\n e  -   pessimo\n\n");

}

float modulo (float n1, float n2){
    float result;
    if (n1 - n2 < 0){
        result = n2 - n1;
    }
    else{
        result = n1 - n2;
    }
    return result;
}
