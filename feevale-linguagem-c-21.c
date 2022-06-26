#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    struct Alunos
    {
        char nome[50];
        float notaMatematica;
        float notaFisica;
        float media;
    };

    struct Alunos alunos[5];

    int count;

    for (count = 0; count < 5; count++)
    {
        fflush(stdin);
        printf("\nNome do aluno %d: ", count + 1);
        gets(alunos[count].nome);
        printf("Nota de matematica: ");
        scanf("%f", &alunos[count].notaMatematica);
        printf("Nota de fisica: ");
        scanf("%f", &alunos[count].notaFisica);
        alunos[count].media = (alunos[count].notaMatematica + alunos[count].notaFisica) / 2;

        if (alunos[count].notaMatematica > 10 || alunos[count].notaMatematica < 0 || alunos[count].notaFisica > 10 || alunos[count].notaFisica < 0)
        {
            printf("As notas não podem ser menor que zero, nem maior que 10. Repita a operação.\n\n");
            return main();
        }
    }
    printf("\nExibindo nomes e medias:\n");

    for (count = 0; count < 5; count++)
    {
        printf("A média do aluno %s é: %.2f\n", alunos[count].nome, alunos[count].media);
    }

    system("PAUSE");
    return 0;
}
