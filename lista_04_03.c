#include <stdio.h>

int main(void) {

	int numbers[5];
	int *p;
	int n;

	p = numbers;
	//p = 0, pois p = numbers[0] porque numbers é um vetor vazio (possui apenas lixo) e p passa a referenciar o vetor numbers (qualquer alteração em p acarreta modificação em numbers)
	*p = 10;
	//p[0] = 10
	p++;
	//p[1]
	*p = 20;
	//p[1] = 20
	p = &numbers[2];
	//p[2]
	*p = 30;
	//p[2] = 30
	p = numbers + 3;
	//0 + 3 = p[3]
	*p = 40;
	//coloca 40 em p[3]
	p = numbers;
	// p = numbers = [10, 20, 30, 40 e lixo]
	*(p + 4) = 50;
	//p[0 + 4] = p[4] = 50

	for (n = 0; n < 5; n++)
		printf("%d", numbers[n]);

}

//valores 10, 20, 30, 40 e 50 sao printados na tela
