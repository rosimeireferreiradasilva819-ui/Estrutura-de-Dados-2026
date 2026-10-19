#include <stdio.h>

int main(void)
{
    float saldoInicial;
    float operacao;
    float totalCreditos = 0;
    float totalDebitos = 0;
    float taxa;
    float saldoFinal;

    printf("Digite o saldo inicial: ");
    scanf("%f", &saldoInicial);

    printf("Digite uma operacao (0 para encerrar): ");
    scanf("%f", &operacao);

    while (operacao != 0)
    {
        if (operacao > 0)
        {
            totalCreditos = totalCreditos + operacao;
        }
        else
        {
            totalDebitos = totalDebitos - operacao;
        }

        printf("Digite outra operacao (0 para encerrar): ");
        scanf("%f", &operacao);
    }

    taxa = totalDebitos * 0.0035f;
    saldoFinal = saldoInicial + totalCreditos - totalDebitos - taxa;

    printf("Total de creditos: R$ %.2f\n", totalCreditos);
    printf("Total de debitos: R$ %.2f\n", totalDebitos);
    printf("Taxa paga: R$ %.2f\n", taxa);
    printf("Saldo final: R$ %.2f\n", saldoFinal);

    return 0;
}
