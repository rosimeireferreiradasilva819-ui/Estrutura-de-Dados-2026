#include <stdio.h>

int main(void)
{
    int valor;
    int menor;
    int maior;

    printf("Digite um valor positivo (0 para encerrar): ");
    scanf("%d", &valor);

    menor = valor;
    maior = valor;

    while (valor != 0)
    {
        if (valor < menor)
        {
            menor = valor;
        }

        if (valor > maior)
        {
            maior = valor;
        }

        printf("Digite outro valor positivo (0 para encerrar): ");
        scanf("%d", &valor);
    }

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}