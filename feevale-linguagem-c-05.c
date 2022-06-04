/*Elabore um algoritmo em C que, uma vez que o usuário informe a idade de um atleta,
o programa o classifique em uma das modalidades a seguir dos jogos da primavera:

Infantil A = 6 a 8 anos
Infantil B = 9 a 12 anos
Juvenil A = 13 a 14 anos
Juvenil B = 15 a 18 anos

Pessoas com menos de 6 anos ou maiores de 18 anos não podem participar da competição.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    printf("Classificação para os Jogos de Primavera (somente serão aceitas pessoas entre 6 e 18 anos):\n");

    int idade;

    printf("Digite uma idade:\n");
    scanf("%d", &idade);

    if (idade >= 6 && idade <= 8)
    {
        printf("Você está classificado (a) para a modalidade Infantil A");
    }
    else if (idade >= 9 && idade <= 12)
    {
        printf("Você está classificado (a) para a modalidade Infantil B");
    }
    else if (idade >= 13 && idade <= 14)
    {
        printf("Você está classificado (a) para a modalidade Juvenil A");
    }
    else if (idade >= 15 && idade <= 18)
    {
        printf("Você está classificado (a) para a modalidade Juvenil B");
    }
    else
    {
        printf("Você não tem idade apropriada para os Jogos de Primavera");
    }
}
