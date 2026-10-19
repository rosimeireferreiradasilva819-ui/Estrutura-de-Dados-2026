#include <stdio.h>
#include <math.h>

int main(void)
{
    double cateto1;
    double cateto2;
    double hipotenusa;

    printf("Digite a medida do primeiro cateto: ");
    scanf("%lf", &cateto1);

    printf("Digite a medida do segundo cateto: ");
    scanf("%lf", &cateto2);

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}