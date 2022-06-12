/*Faça um programa que preencha um vetor de 10 números reais. Em seguida, calculee mostre na tela a quantidade de números negativos e a soma dos números positivosdesse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float array[10];
    int i;

    for (i = 0; i < 10; i++) /*Capturando dados do usuário*/
    {
        printf("Digite o número correspondente à posição %d da array: \n", i);
        scanf("%f", &array[i]);
    }

    int qtdNegativos = 0;
    for (i = 0; i < 10; i++) /*Quantidade de números negativos*/
    {
        if (array[i] < 0)
        {
            qtdNegativos++;
        }
    }

    float somaPositivos = 0;
    float numPositivo;
    for (i = 0; i < 10; i++) /*Soma de números positivos*/
    {
        if (array[i] > 0)
        {

            numPositivo = array[i];
            somaPositivos += numPositivo;
        }
    }

    printf("A quantidade de números negativos é: %d\n", qtdNegativos);
    printf("A soma dos números positivos é: %.2f\n", somaPositivos);

    system("PAUSE");
    return 0;
}