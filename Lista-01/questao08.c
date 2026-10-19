#include <stdio.h>

int main(void)
{
    float numero1;
    float numero2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    if (numero1 > numero2)
    {
        printf("O maior numero e: %.2f\n", numero1);
    }
    else
    {
        printf("O maior numero e: %.2f\n", numero2);
    }

    return 0;
}
