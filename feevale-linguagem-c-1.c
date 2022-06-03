/*Proponha um algoritmo em C que peça ao usuário que digite 2 números, obtenha esses dois valores,
calcule e exiba: a soma, o produto, a diferença e a divisão.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int n1, n2;

    printf("Soma, produto, diferença e divisão entre dois números inteiros:\n");

    printf("Digite o primeiro número\n");
    scanf("%d", &n1);
    printf("Digite o segundo número\n");
    scanf("%d", &n2);

    printf("Você escolheu os números %d e %d\n", n1, n2);
    printf("Soma = %d\n", n1 + n2);
    printf("Produto = %d\n", n1 * n2);
    printf("Diferença = %d\n", n1 - n2);

    if (n1 && n2 != 0)
    {
        printf("Divisão = %d\n", n1 / n2);
    }
    else
    {
        printf("Impossível de efetuar a divisão. Escolha números diferentes de 0.");
    }
}