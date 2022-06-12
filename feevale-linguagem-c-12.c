/*Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na telaquantos valores pares foram armazenados nesse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10];
    int i;
    int totalNumerosPares = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número do índice %d da array:", i);
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
        {
            totalNumerosPares++;
        }
    }
    printf("%d", totalNumerosPares);
}