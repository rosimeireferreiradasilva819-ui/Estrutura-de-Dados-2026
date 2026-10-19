#include <stdio.h>

int main(void)
{
    float numero1;
    float numero2;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
        case '+':
            printf("Resultado: %.2f\n", numero1 + numero2);
            break;

        case '-':
            printf("Resultado: %.2f\n", numero1 - numero2);
            break;

        case '*':
            printf("Resultado: %.2f\n", numero1 * numero2);
            break;

        case '/':
            if (numero2 != 0)
            {
                printf("Resultado: %.2f\n", numero1 / numero2);
            }
            else
            {
                printf("Erro: nao e possivel dividir por zero.\n");
            }
            break;

        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}
