#include <stdio.h>

int main(void)
{
    float salario;
    float novoSalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    novoSalario = salario + (salario * 0.05f);

    if (salario <= 750)
    {
        novoSalario = novoSalario + 100;
    }

    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}