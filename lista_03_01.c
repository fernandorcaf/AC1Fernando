#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void calcula_circulo(float raio, float *circunferencia, float *area) {
    *circunferencia = 2 * PI * raio;
    *area = PI * pow(raio, 2);
}

int main() {
    float raio;
    float circunferencia;
    float area;

    printf("Raio: ");
    scanf("%g", &raio);

    calcula_circulo(raio, &circunferencia, &area);
    printf("Circunferência: %g\n", circunferencia);
    printf("Área: %g\n", area);
    return 0;
}
