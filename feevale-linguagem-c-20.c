/*Faça um programa em C que leia dois vetores, denominados A e B, de 5 elementos cada um, respeitando as seguintes regras:

- Vetor A deve conter apenas valores pares;
- Vetor B deve conter apenas valores ímpares.

A partir dos dois vetores, crie uma matriz que:

a) Na primeira linha armazene o vetor A
b) Na segunda linha armazene o vetor B
c) Na terceira linha, contenha para cada coluna a soma dos elementos da primeira e da segunda linha correspondentes à mesma coluna.

Por fim, exiba a matriz resultante organizada em linhas e colunas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetorA[5];
    int vetorB[5];
    int matriz[3][5];
    int i, j;

    /*Vetor A*/
    for (i = 0; i < 5; i++)
    {
        printf("Digite um NÚMERO PAR a posição %d do Vetor A: ", i);
        scanf("%d", &vetorA[i]);
        if (vetorA[i] % 2 != 0)
        {
            printf("O Vetor A deve receber apenas números pares, reinicie a operação.\n");
            return main();
        }
    }

    /*Imprimindo Vetor A*/
    printf("Vetor A =\t");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", vetorA[i]);
    }
    printf("\n\n");

    /*Vetor B*/
    for (i = 0; i < 5; i++)
    {
        printf("Digite um NÚMERO ÍMPAR a posição %d do Vetor B: ", i);
        scanf("%d", &vetorB[i]);
        if (vetorB[i] % 2 != 1)
        {
            printf("O Vetor B deve receber apenas números ímpares, reinicie a operação.\n");
            return main();
        }
    }

    /*Imprimindo Vetor B*/
    printf("Vetor B =\t");
    for (j = 0; j < 5; j++)
    {
        printf("%d\t", vetorB[j]);
    }
    printf("\n\n");

    /*Matriz Linha 1 Vetor A*/
    for (j = 0; j < 5; j++) /*linha*/
    {
        for (i = 0; i < 3; i++) /*coluna*/
        {
            matriz[0][j] = vetorA[j];
        }
    }

    /*Matriz Linha 2 Vetor B*/

    for (j = 0; j < 5; j++) /*linha*/
    {
        for (i = 0; i < 3; i++) /*coluna*/
        {
            matriz[1][j] = vetorB[j];
        }
    }

    /*Matriz Linha 3 Soma Vetor A + Vetor B*/

    for (j = 0; j < 5; j++) /*linha*/
    {
        for (i = 0; i < 3; i++) /*coluna*/
        {
            matriz[2][j] = vetorA[j] + vetorB[j];
        }
    }

    /*Imprimindo Matriz*/
    printf("Matriz:\n\n");
    for (i = 0; i < 3; i++) /*linha*/
    {
        for (j = 0; j < 5; j++) /*coluna*/
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    system("PAUSE");
    return 0;
}
