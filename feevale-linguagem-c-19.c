/*Proponha um algoritmo, em pseudocódigo, que realize a inicialização da matriz de inteiros x (apresentada abaixo) com os valores estabelecidos na figura.

10 16 22 28 34 40 46 52 58
12 18 24 30 36 42 48 54 60
14 20 26 32 38 44 50 56 62
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[3][9];
    int valorMatriz = 10;
    int i, j;

    for (j = 0; j < 9; j++)
    {
        for (i = 0; i < 3; i++)
        {
            matriz[i][j] = valorMatriz;
            valorMatriz = valorMatriz + 2;
        }
    }

    /*Imprimindo a matriz*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
