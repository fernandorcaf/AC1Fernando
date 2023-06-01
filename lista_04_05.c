#include <stdio.h>
#define v_inicial 4.95

void calcula_corrida(float dist, float *b1, float *b2);

int main(void) {

	float dist, *b1, *b2;
	printf("Informe a distancia percorrida: ");
	scanf("%f", &dist);

	float valorB1, valorB2;
	b1 = &valorB1, b2 = &valorB2;
	calcula_corrida(dist, b1, b2);

	printf("Valor na bandeira 1 = R$%1.2f\n", valorB1);
	printf("Valor na bandeira 2 = R$%1.2f\n", valorB2);

	return 0;
}

void calcula_corrida(float dist, float *b1, float *b2) {

	*b1 = ((dist * 2.5) + v_inicial);
	*b2 = ((dist * 3) + v_inicial);

}
