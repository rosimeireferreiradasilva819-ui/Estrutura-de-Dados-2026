#include <stdio.h>

void draw_torre(int n);
void turbinar_torre(int *torre, int bonus);
void swap_torres(int *a, int *b);

int main(void)
{
    int alfa = 0;
    int beta = 0;

    printf("=== PAINEL DE CONTROLE DE TORRES ===\n");

    printf("Digite o nivel inicial da Torre Alfa: ");
    scanf("%d", &alfa);

    printf("Digite o nivel inicial da Torre Beta: ");
    scanf("%d", &beta);

    if (alfa <= 0 || beta <= 0) {
        printf("Aviso: os niveis das torres devem ser maiores que zero.\n");
        return 1;
    }

    printf("\n--- ESTADO INICIAL ---\n");
    printf("Torre Alfa (Nivel %d):\n", alfa);
    draw_torre(alfa);

    printf("Torre Beta (Nivel %d):\n", beta);
    draw_torre(beta);

    turbinar_torre(&alfa, 2);
    swap_torres(&alfa, &beta);

    printf("\n--- ESTADO FINAL APOS PONTEIROS ---\n");
    printf("Torre Alfa Agora (Nivel %d):\n", alfa);
    draw_torre(alfa);

    printf("Torre Beta Agora (Nivel %d):\n", beta);
    draw_torre(beta);

    return 0;
}

void draw_torre(int n)
{
    if (n <= 0) {
        return;
    }

    draw_torre(n - 1);

    for (int i = 0; i < n; i++) {
        printf("# ");
    }
    printf("\n");
}

void turbinar_torre(int *torre, int bonus)
{
    if (torre != NULL) {
        *torre = *torre + bonus;
    }
}

void swap_torres(int *a, int *b)
{
    if (a == NULL || b == NULL) {
        return;
    }

    int temp = *a;
    *a = *b;
    *b = temp;
}