/*Crie uma matriz de dimensões 3x3 a partir de números inteiros positivos lidos pelo usuário. Seu programa deve controlar que essa leitura para aceitar apenas valores válidos. Em seguida, exiba os elementos da diagonal principal e os elementos da diagonal secundária.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Informe o valor referente da coluna %d, linha %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    /*Diagonal principal*/
    printf("Os elementos da diagonal principal são: %d %d %d\n", matriz[0][0], matriz[1][1], matriz[2][2]);

    /*Diagonal secundária*/
    printf("Os elementos da diagonal secundária são: %d %d %d\n", matriz[0][2], matriz[1][1], matriz[2][0]);

    system("PAUSE");
}