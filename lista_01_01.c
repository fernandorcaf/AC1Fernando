#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Segundos: ");
    scanf("%d", &segundos);

    // Horas, minutos e segundos
    horas = segundos / 60 / 60;
    minutos = (segundos / 60) % 60;
    segundos = segundos % 60;
    printf("%d hora(s) %d minuto(s) %d segundo(s)\n", horas, minutos, segundos);
}
