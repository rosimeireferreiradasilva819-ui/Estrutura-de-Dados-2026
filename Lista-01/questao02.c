#include <stdio.h>

int main(void)
{
    float distancia;
    float litros;
    float consumo;

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    if (litros > 0)
    {
        consumo = distancia / litros;
        printf("Consumo medio: %.2f km/l\n", consumo);
    }
    else
    {
        printf("A quantidade de litros deve ser maior que zero.\n");
    }

    return 0;
}