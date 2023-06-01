#include <stdio.h>
#include <stdlib.h>

float salario(float sal, float tempo);

int main()
{
    float sal, tempo, x  = 0;

    do{
    printf("Digite seu salario por hora: ");
    scanf("%f", &sal );
    printf("Digite seu tempo de trabalho semanal: ");
    scanf("%f", &tempo);
    } while(sal <= 0 || tempo <= 0);
    x = salario(sal, tempo);
    printf("Seu salario semanal sera de R$%.2f", x);

    return 0;
}
float salario(float s, float t)
{
    float total, extra = 0;

    if (t <= 40){
        total = s * t;
    }
    if (t > 40 && t <= 60){
        extra = t - 40;
        total = (s * 40) + (1.5 * s * extra);
    }
    if (t > 60){
        extra = t - 60;
        total = (s * 40) + (1.5 * s * 20) + (2 * s * extra);
    }

    return total;
}
