/*
Proponha um programa em C que lê uma matriz A, com 2 linhas e 2 colunas. A matriz A deve aceitar apenas números positivos. O programa também deve ter uma matriz B com as mesmas dimensões de A, por sua vez, inicializada como valor 2 em todas as posições. A partir das duas matrizes, crie a matriz R, correspondente ao resto da divisão inteira dos elementos correspondentes nas matrizes A e B, e a exiba no formato de matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matrizA[2][2];
    int matrizB[2][2];
    int matrizR[2][2];
    int i;
    int j;

    /*Matriz A*/
    for (i = 0; i < 2; i++) /*linha*/
    {
        for (j = 0; j < 2; j++) /*coluna*/
        {
            printf("Digite o valor correspondente à linha %d, coluna %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            if (matrizA[i][j] <= 0)
            {
                printf("Somente números positivos são aceitos. Tente novamente.\n");
                return main();
            }
        }
    }

    /*Imprimindo Matriz A*/
    printf("\nImprimindo a Matriz A\n");
    for (i = 0; i < 2; i++) /*linha*/
    {
        for (j = 0; j < 2; j++) /*coluna*/
        {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    /*Matriz B*/
    for (i = 0; i < 2; i++) /*linhas*/
    {
        for (j = 0; j < 2; j++)
        {
            matrizB[i][j] = 2;
        }
    }

    /*Imprimindo Matriz B*/
    printf("\nImprimindo a Matriz B\n");
    for (i = 0; i < 2; i++) /*linha*/
    {
        for (j = 0; j < 2; j++) /*coluna*/
        {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }

    /*Matriz R*/
    for (i = 0; i < 2; i++) /*linhas*/
    {
        for (j = 0; j < 2; j++) /*colunas*/
        {
            matrizR[i][j] = matrizA[i][j] % matrizB[i][j];
        }
    }

    /*Imprimindo a Matriz R*/
    printf("\nImprimindo a Matriz R\n");
    for (i = 0; i < 2; i++) /*linhas*/
    {
        for (j = 0; j < 2; j++ /*colunas*/)
        {
            printf("%d\t", matrizR[i][j]);
        }
        printf("\n");
    }

    printf("\nFim do algorítmo.\n\n");
    system("PAUSE");
    return 0;
}