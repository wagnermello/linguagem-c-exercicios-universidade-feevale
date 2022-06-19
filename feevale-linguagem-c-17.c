/*Desenvolva um programa em C em que o usuário informa 12 números inteiros, os quais devem ser armazenados em uma matriz. Com os dados armazenados em memória, seu programa deve exibir a matriz, e o menor elemento de cada linha, e o maior elemento de cada coluna.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[3][4];
    int i, j;

    for (i = 0; i < 3; i++) // linhas
    {
        for (j = 0; j < 4; j++) // colunas
        {
            printf("Digite um número inteiro para a coluna %d, linha %d da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    int maior;
    int menor;

    // Menor elemento de cada linha:
    for (i = 0; i < 3; i++)
    {
        menor = matriz[i][0];
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
        printf("O menor número da linha %d é: %d\n", i, menor);
    }

    // Maior elemento de cada coluna:

    for (j = 0; j < 4; j++)
    {
        maior = matriz[0][j];
        for (i = 0; i < 3; i++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
        printf("O maior número da coluna %d é: %d\n", j, maior);
    }

    system("PAUSE");
    return 0;
}
