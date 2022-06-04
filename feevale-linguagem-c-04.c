/*roponha um algoritmo em C para calcular a nota de um candidato em um concurso.
Para isso, você deve ler as três notas do candidato entre 0 e 10.
Em seguida, calcule a nota final dele no concurso, a qual corresponde à média ponderada,
considerando que a primeira nota tem peso 2, a segunda tem peso 3 e a terceira tem peso 5.
Exibir uma mensagem dizendo qual a média do aluno e se ele foi aprovado ou reprovado.
A média para aprovação é 7.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    printf("Cálculo da média ponderada entre 3 notas:\n");

    float nota1, nota2, nota3;

    printf("Digite a sua primeira nota\n");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota\n");
    scanf("%f", &nota2);
    printf("Digite a sua terceira nota\n");
    scanf("%f", &nota3);

    float somanotas = (nota1 * 2) + (nota2 * 3) + (nota3 * 5);
    float media = somanotas / 10;

    if (media > 7)
    {
        printf("Sua nota final é: %.2f. Você está aprovado.", media);
    }
    else
    {
        printf("Sua nota final é: %.2f. Você está reprovado.", media);
    }
}