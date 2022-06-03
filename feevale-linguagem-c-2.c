/*Escreva um algoritmo em C que a partir de 2 inteiros informados pelo usuário,
identifique qual o maior valor entre eles e o exibe seguido das palavras “valor maior“.
Caso os números sejam iguais, exiba a mensagem “valores iguais”.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    printf("Comparação entre dois números inteiros (maior que, menor que, igual a):\n");

    int n1, n2;

    printf("Digite o primeiro número\n");
    scanf("%d", &n1);
    printf("Digite o segundo número\n");
    scanf("%d", &n2);

    printf("Você escolheu os números %d e %d\n", n1, n2);

    if (n1 == n2)
    {
        printf("Os números são iguais.\n");
        return 0;
    }

    if (n1 > n2)
    {
        printf("%d é maior que %d\n", n1, n2);
    }
    else
    {
        printf("%d é maior que %d\n", n2, n1);
        return 0;
    }
}