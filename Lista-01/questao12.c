#include <stdio.h>

int main(void)
{
    float nota1;
    float nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media: %.2f\n", media);

    if (media >= 7)
    {
        printf("Situacao: aprovado\n");
    }
    else if (media < 3)
    {
        printf("Situacao: reprovado\n");
    }
    else
    {
        printf("Situacao: recuperacao\n");
    }

    return 0;
}
