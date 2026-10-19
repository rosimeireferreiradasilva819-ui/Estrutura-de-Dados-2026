#include <stdio.h>

int main(void)
{
    int n;
    int contador;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (contador = n; contador >= 0; contador--)
    {
        printf("%d\n", contador);
    }

    return 0;
}