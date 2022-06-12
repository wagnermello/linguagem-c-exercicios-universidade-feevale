/*Faça um programa que receba do usuário um vetor X de 10 posições. Em seguidadeverão ser impressos o maior e o menor elemento desse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10];
    int i;

    for (i = 0; i < 10; i++) /*Capturando dados do usuário*/
    {
        printf("Digite o número que irá corresponder à posição %d do array:\n", i);
        scanf("%d", &array[i]);
    }

    int maior = i;

    for (i = 0; i < 10; i++) /*Capturando o número maior*/
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
    }

    int menor = i;

    for (i = 0; i < 10; i++) /*Capturando o número menor*/
    {
        if (array[i] < menor)
        {
            menor = array[i];
        }
    }

    printf("O maior número da array é: %d\n", maior);
    printf("O menor número da array é: %d\n", menor);
}
