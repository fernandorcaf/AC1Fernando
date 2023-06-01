#include <stdio.h>

int main(void) {

	int vetorx[10];
	int i;
	for (i = 0; i < 10; i++) {
		printf("Informe o %dº elemento da lista: ", i);
		scanf("%d", &vetorx[i]);
	}

	int vetory[10];
	int j, k = 0;
	for (j = 9; j >= 0; j--) {
		vetory[k] = vetorx[j];
		k++;
	}

	int m;
	for (m = 0; m < 10; m++) {
		printf("%d\n", vetory[m]);
	}

	return 0;
}

