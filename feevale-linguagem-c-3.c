/*Escreva um algoritmo em C que leia 3 números inteiros diferentes,
e depois apresente a soma, o produto, o menor e o maior desses números.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    printf("Soma, produto e comparação de maior e menor entre 3 números:\n");

    int n1, n2, n3;

    printf("Digite o primeiro número\n");
    scanf("%d", &n1);
    printf("Digite o segundo número\n");
    scanf("%d", &n2);
    printf("Digite o terceiro número\n");
    scanf("%d", &n3);

    printf("Você escolheu os números %d, %d e %d\n", n1, n2, n3);

    printf("A soma dos números escolhidos é: %d\n", n1 + n2 + n3);
    printf("O produto dos números escolhidos é: %d\n", n1 * n2 * n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("%d é o número maior.\n", n1);
    }

    if (n2 > n1 && n2 > n3)
    {
        printf("%d é o número maior.\n", n2);
    }

    if (n3 > n1 && n3 > n2)
    {
        printf("%d é o número maior.\n", n3);
    }

    if (n1 < n2 && n1 < n3)
    {
        printf("%d é o número menor.\n", n1);
    }

    if (n2 < n1 && n2 < n3)
    {
        printf("%d é o número menor.\n", n2);
    }

    if (n3 < n1 && n3 < n2)
    {
        printf("%d é o número menor.\n", n3);
    }
}