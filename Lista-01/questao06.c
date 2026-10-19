#include <stdio.h>

int main(void)
{
    int valor;
    int notas100;
    int notas50;
    int notas20;
    int notas10;
    int notas5;
    int notas2;
    int notas1;

    printf("Digite um valor inteiro em reais: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor = valor % 100;

    notas50 = valor / 50;
    valor = valor % 50;

    notas20 = valor / 20;
    valor = valor % 20;

    notas10 = valor / 10;
    valor = valor % 10;

    notas5 = valor / 5;
    valor = valor % 5;

    notas2 = valor / 2;
    valor = valor % 2;

    notas1 = valor;

    printf("Cedulas de R$ 100: %d\n", notas100);
    printf("Cedulas de R$ 50: %d\n", notas50);
    printf("Cedulas de R$ 20: %d\n", notas20);
    printf("Cedulas de R$ 10: %d\n", notas10);
    printf("Cedulas de R$ 5: %d\n", notas5);
    printf("Cedulas de R$ 2: %d\n", notas2);
    printf("Cedulas de R$ 1: %d\n", notas1);

    return 0;
}