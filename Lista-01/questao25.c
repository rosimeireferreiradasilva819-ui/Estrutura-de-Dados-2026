#include <stdio.h>

int main(void)
{
    int n;
    int contador;
    int impar = 1;
    int soma = 0;

    printf("Digite um numero natural n: ");
    scanf("%d", &n);

    for (contador = 1; contador <= n; contador++)
    {
        soma = soma + impar;
        impar = impar + 2;
    }

    printf("O quadrado de %d e: %d\n", n, soma);

    return 0;
}
