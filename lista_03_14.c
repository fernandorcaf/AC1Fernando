#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float diferencaDoPercentual(int qtd_bom, int qtd_regular);
float mediaRuim(int qtd_ruim, int total_idades);
void infoPessimo(int qtd_pessoas, int qtd_pessimo, int maior_pessimo);
int diferencaOtimoRuim(int qtd_otimo, int qtd_ruim);

int main() {

    int *vtr_total;
    int total_pessoas, i;
    printf("Quantas pessoas foram ao cinema: ");
    scanf("%d", &total_pessoas);
    // alocacao dinamica
    vtr_total = (int *) malloc(total_pessoas * sizeof(int));
    if (vtr_total == NULL){
        printf("Memoria insuficinte");
        return 1;
    }

    int idade, qtd_otimo = 0, qtd_bom = 0, qtd_regular = 0, soma_idades_ruim = 0, qtd_idades_ruim = 0, qtd_pessimo = 0, maior_pessimo = 0, maior_otimo = 0, maior_ruim = 0;
    char opiniao[8];
    for(i=0; i < total_pessoas; i++){
        printf("Digite sua idade: ");
        scanf(" %d", &idade);
        printf("Digite a opniao (sem acento): ");
        scanf(" %s", opiniao);
        if (strcmp(opiniao, "bom") == 0)
        {
            ++qtd_bom;
        }
        else if (strcmp(opiniao, "regular") == 0)
        {
            ++qtd_regular;
        }
        else if (strcmp(opiniao, "ruim") == 0)
        {
            ++qtd_idades_ruim;
            soma_idades_ruim += idade;  // Cria total das idades dos que avaliam como ruim para cÃ¡lculo da mÃ©dia posteriormente
            if (maior_ruim < idade) {  // Atualiza a maior idade dentre aqueles que avaliam como ruim
                maior_ruim = idade;
            }
        }
        else if (strcmp(opiniao, "pessimo") == 0)
        {
            ++qtd_pessimo;
            if (maior_pessimo < idade) {  // Atualiza a maior idade dentre aqueles que avaliam como pÃ©ssimo
                maior_pessimo = idade;
            }
        }
        else if (strcmp(opiniao, "otimo") == 0)
        {
            ++qtd_otimo;
            if (maior_otimo < idade) {  // Atualiza a maior idade dentre aqueles que avaliam como Ã³timo
                maior_otimo = idade;
            }
        }
    }
    printf("a. A quantidade de respostas otimo: %d", qtd_otimo);
    printf("b. A diferenca percentual entre respostas bom e regular: %g por cento\n", diferencaDoPercentual(qtd_bom, qtd_regular));
    printf("c. A media de idade das pessoas que responderam ruim: ");
    if (qtd_idades_ruim == 0) {
        printf("Nenhuma pessoa respondeu ruim.\n");
    }
    else {
        printf("%g\n", mediaRuim(qtd_idades_ruim, soma_idades_ruim));
    }
    infoPessimo(total_pessoas, qtd_pessimo, maior_pessimo);
    printf("e. A diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim eh de %d pessoas", diferencaOtimoRuim(qtd_otimo, qtd_idades_ruim));
    return 0;
}

float diferencaDoPercentual(int qtd_bom, int qtd_regular) {
    float diferenca;
    int maior, menor;
    // Define qual das opiniões tem a maior adesão e qual tem a menor
    if ((qtd_bom > qtd_regular) || (qtd_bom == qtd_regular))
    {
        maior = qtd_bom;
        menor = qtd_regular;

    }
    else if (qtd_bom < qtd_regular)
    {
        menor = qtd_bom;
        maior = qtd_regular;
    }
    if (menor == 0) {  // Evita que retorne nan se um dos valores for 0
        diferenca = 0;
    }
    else {
        diferenca = ((float) (maior - menor) / menor)  * 100;
    }
    return diferenca;
}

float mediaRuim(int qtd_ruim, int total_idades) {
    float resultado = (float) total_idades / qtd_ruim;  // (float) evita que o resultado venha como um inteiro
    return resultado;
}

void infoPessimo(int qtd_pessoas, int qtd_pessimo, int maior_pessimo) {
    float porcentagem = (float) qtd_pessimo / qtd_pessoas;  // (float) evita que o resultado venha como um inteiro
    porcentagem *= 100;
    printf("d. A porcentagem de respostas pessimo e a maior idade que utilizou esta opcao:\nA porcentagem foi %g por cento ", porcentagem);
    if (qtd_pessimo == 0) {
        printf("pois nenhuma pessoa respondeu pessimo.\n");
    }
    else {
        printf("e a maior idade foi %d\n", maior_pessimo);
    }
}

int diferencaOtimoRuim(int qtd_otimo, int qtd_ruim) {
    int diferenca = (qtd_otimo - qtd_ruim);
    if (diferenca < 0) {
        diferenca *= -1;
    }
    return diferenca;
}
