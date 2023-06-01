#include <stdio.h> 
#include <stdlib.h>

int main (void) {
	
	int vetorP[20];
	int vetorS[20];
	char vetorOp[20];
	int vetorResp[20];
	int i;
	
	for (i = 0; i < 20; i++) {
		printf("Informe o valor da posicao %d do vetor 1:\n ", i+1);
		scanf("%d", &vetorP[i]);
	}
	
	for (i = 0; i < 20; i ++) {
	    printf("Informe o valor da posicao %d do vetor 2:\n ", i+1);
		scanf("%d", &vetorS[i]);
	}
	
	for (i = 0; i < 20; i++) {
	    printf("Informe a operacao para ser realizada entre o %d do vetor 1 e %d do vetor 2:\n ", vetorP[i], vetorS[i]);
		scanf(" %c", &vetorOp[i]);
	}
	
	int j, op;
	for (j = 0; j < 20; j++) {
	    op = vetorOp[j];
		switch(op) {
		    case '+': (vetorResp[j] = (vetorP[j] + vetorS[j])); break;
		    case '-': (vetorResp[j] = (vetorP[j] - vetorS[j])); break;
		    case '*': (vetorResp[j] = (vetorP[j] * vetorS[j])); break;
		    case '/': (vetorResp[j] = (vetorP[j] / vetorS[j])); break;
		}
	}
	
	int k;
	for (k = 0; k < 20; k++) {
		printf("%d\n", vetorResp[k]);
	}
	
	return 0;
}
