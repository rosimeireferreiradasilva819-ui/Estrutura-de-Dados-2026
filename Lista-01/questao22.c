#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;
    double resultadoRepeticao = 1;
    double resultadoPow;
    int n;
    int contador;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o expoente natural n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("O expoente deve ser um numero natural.\n");
        return 0;
    }

    for (contador = 1; contador <= n; contador++)
    {
        resultadoRepeticao = resultadoRepeticao * x;
    }

    resultadoPow = pow(x, n);

    printf("Resultado com repeticao: %.2f\n", resultadoRepeticao);
    printf("Resultado com pow(): %.2f\n", resultadoPow);

    return 0;
}