#include <stdio.h>

int main(void)
{
    int n;
    int contador;
    unsigned long long fatorial = 1;

    printf("Digite um numero natural entre 0 e 20: ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Digite um numero entre 0 e 20.\n");
        return 0;
    }

    for (contador = 1; contador <= n; contador++)
    {
        fatorial = fatorial * contador;
    }

    printf("%d! = %llu\n", n, fatorial);

    return 0;
}