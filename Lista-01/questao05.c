#include <stdio.h>

int main(void)
{
    int totalSegundos;
    int horas;
    int minutos;
    int segundosRestantes;
    int resto;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    resto = totalSegundos % 3600;
    minutos = resto / 60;
    segundosRestantes = resto % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n",
           horas, minutos, segundosRestantes);

    return 0;
}