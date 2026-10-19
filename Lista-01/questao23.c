#include <stdio.h>

int main(void)
{
    int n;
    int numero;

    printf("Digite um numero natural n: ");
    scanf("%d", &n);

    for (numero = 1; numero <= n; numero++)
    {
        printf("%d -> %d\n", numero, numero * numero);
    }

    return 0;
}
