/* Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C, correspondente a A – B, mostre na tela os dados do array C. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;

    /* Coletando dados do array A */
    int A[10];
    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posição %d do array A: ", i);
        scanf("%d", &A[i]);
    }

    /* Coletando dados do array B */
    printf("\n");
    int B[10];
    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posição %d do array B: ", i);
        scanf("%d", &B[i]);
    }

    /* Array C */
    int C[10];
    printf("\nNúmeros do array C: ");
    for (i = 0; i < 10; i++)
    {
        C[i] = A[i] - B[i];
        printf("%d ", C[i]);
    }

    printf("\n");

    system("PAUSE");
    return 0;
}