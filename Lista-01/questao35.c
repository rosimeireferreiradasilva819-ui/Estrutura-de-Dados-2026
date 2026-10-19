#include <stdio.h>

int main(void)
{
    int categoria;
    int conversao;
    double valor;
    double resultado;

    do
    {
        printf("\n=== CONVERSOR DE UNIDADES ===\n");
        printf("1 - Peso\n");
        printf("2 - Volume\n");
        printf("3 - Comprimento\n");
        printf("4 - Sair\n");
        printf("Escolha uma categoria: ");
        scanf("%d", &categoria);

        if (categoria == 1)
        {
            printf("\n1 - Libra para quilograma\n");
            printf("2 - Quilograma para libra\n");
            printf("3 - Onca para grama\n");
            printf("4 - Grama para onca\n");
        }
        else if (categoria == 2)
        {
            printf("\n1 - Galao para litro\n");
            printf("2 - Litro para galao\n");
            printf("3 - Onca liquida para mililitro\n");
            printf("4 - Mililitro para onca liquida\n");
        }
        else if (categoria == 3)
        {
            printf("\n1 - Milha para quilometro\n");
            printf("2 - Quilometro para milha\n");
            printf("3 - Jarda para metro\n");
            printf("4 - Metro para jarda\n");
        }
        else if (categoria != 4)
        {
            printf("Categoria invalida.\n");
        }

        if (categoria >= 1 && categoria <= 3)
        {
            printf("Escolha uma conversao: ");
            scanf("%d", &conversao);

            if (conversao < 1 || conversao > 4)
            {
                printf("Conversao invalida.\n");
            }
            else
            {
                printf("Digite o valor a converter: ");
                scanf("%lf", &valor);

                switch (categoria)
                {
                    case 1:
                        switch (conversao)
                        {
                            case 1:
                                resultado = valor * 0.4536;
                                break;
                            case 2:
                                resultado = valor / 0.4536;
                                break;
                            case 3:
                                resultado = valor * 28.3495;
                                break;
                            case 4:
                                resultado = valor / 28.3495;
                                break;
                        }
                        break;

                    case 2:
                        switch (conversao)
                        {
                            case 1:
                                resultado = valor * 3.7854;
                                break;
                            case 2:
                                resultado = valor / 3.7854;
                                break;
                            case 3:
                                resultado = valor * 29.5735;
                                break;
                            case 4:
                                resultado = valor / 29.5735;
                                break;
                        }
                        break;

                    case 3:
                        switch (conversao)
                        {
                            case 1:
                                resultado = valor * 1.6093;
                                break;
                            case 2:
                                resultado = valor / 1.6093;
                                break;
                            case 3:
                                resultado = valor * 0.9144;
                                break;
                            case 4:
                                resultado = valor / 0.9144;
                                break;
                        }
                        break;
                }

                printf("Resultado: %.4f\n", resultado);
            }
        }
        else if (categoria == 4)
        {
            printf("Programa encerrado.\n");
        }

    } while (categoria != 4);

    return 0;
}