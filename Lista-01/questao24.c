#include <stdio.h>

int main(void)
{
    int n;
    int contador;
    unsigned long long anterior = 1;
    unsigned long long atual = 1;
    unsigned long long proximo;

    printf("Digite a posicao n (de 3 a 93): ");
    scanf("%d", &n);

    if (n < 3 || n > 93)
    {
        printf("Digite uma posicao entre 3 e 93.\n");
        return 0;
    }

    for (contador = 3; contador <= n; contador++)
    {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("O termo %d da sequencia e: %llu\n", n, atual);

    return 0;
}