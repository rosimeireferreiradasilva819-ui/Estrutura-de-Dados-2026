#include <stdio.h>

int main(void)
{
    float numero1;
    float numero2;
    float numero3;
    float maior;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);

    maior = numero1;

    if (numero2 > maior)
    {
        maior = numero2;
    }

    if (numero3 > maior)
    {
        maior = numero3;
    }

    printf("O maior numero e: %.2f\n", maior);

    return 0;
}