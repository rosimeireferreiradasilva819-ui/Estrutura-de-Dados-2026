#include <stdio.h>

int main(void)
{
    float preco;
    float total = 0;
    float percentualDesconto;
    float valorDesconto;
    float valorFinal;

    printf("Digite o preco da mercadoria (0 para encerrar): ");
    scanf("%f", &preco);

    while (preco != 0)
    {
        total = total + preco;

        printf("Digite outro preco (0 para encerrar): ");
        scanf("%f", &preco);
    }

    if (total < 50)
    {
        percentualDesconto = 5;
    }
    else if (total < 100)
    {
        percentualDesconto = 10;
    }
    else if (total <= 200)
    {
        percentualDesconto = 15;
    }
    else
    {
        percentualDesconto = 20;
    }

    valorDesconto = total * percentualDesconto / 100;
    valorFinal = total - valorDesconto;

    printf("Total da compra: R$ %.2f\n", total);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
}