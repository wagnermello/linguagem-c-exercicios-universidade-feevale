// Uma escola de idiomas tem como critério de aprovação em um módulo que a média do aluno seja maior ou igual a 7,0 e que seu número de faltas não ultrapasse a 25% das aulas. A média é calculada a partir da média aritmética das duas melhores notas de três notas recebidas durante o módulo. Assim, faça um programa em C que calcule e exiba a porcentagem de alunos:-aprovados,-reprovados por nota,-reprovados por falta, a partir da leitura dos seguintes dados: quantidade de alunos no módulo, quantidade de aulas do módulo, as três notas de cada aluno, a quantidade de faltas de cada aluno. Lembre-se de garantir que os dados lidos estejam adequados ao problema.

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main(){
    int qtdalunos, qtdaulas;
    float n1, n2, n3, media, menor, percentualfaltas;
    int qtdfaltas;
    int aprovados, reprovados, reprovadosfalta;
    printf("*********************************************\n");
    printf("*             Escola da Idiomas             *\n");
    printf("*********************************************\n");
    do{
      printf("Informe a quantidade de alunos do modulo:");
      scanf("%d",&qtdalunos);
      if(qtdalunos <=0)
            printf("\aErro! O modulo deve ter pelo menos 1 aluno!\n\n");
    }while(qtdalunos<=0);
       do{
      printf("Informe a quantidade de aulas do modulo:");
      scanf("%d",&qtdaulas);
      if(qtdaulas <=0)
            printf("\aErro! O modulo deve ter pelo menos 4 aulas!\n\n");
    }while(qtdaulas<=0);

    printf("Informe as notas de cada aluno:\n");
    //contadores
    aprovados = reprovados = reprovadosfalta = 0;
    for(int i=1;i<=qtdalunos;i++){
        printf("\nAluno %d:\n",i);
        do{
            printf("Informe a nota 1 (0-10):");
            scanf("%f",&n1);
        }while(n1<0 || n1>10);
        do{
            printf("Informe a nota 2 (0-10):");
            scanf("%f",&n2);
        }while(n2<0 || n2>10);
        do{
            printf("Informe a nota 3 (0-10):");
            scanf("%f",&n3);
        }while(n3<0 || n3>10);
        do{
            printf("Informe a quantidade de faltas (0 - %d):",qtdaulas);
            scanf("%d",&qtdfaltas);
        }while(qtdfaltas<0 || qtdfaltas>qtdaulas);
        //Achando a menor nota
        menor = n1;
        if(n2<menor)
            menor = n2;
        if(n3<menor)
            menor = n3;
        media = (n1+n2+n3-menor)/2;
        ///Achando percentual de faltas
        percentualfaltas = (qtdfaltas*100)/qtdaulas;
        //Encontrando as análises
        if(media>=7.0 && percentualfaltas<=25.0)
            aprovados++;
        if (media < 7.0)
            reprovados++;
        if (percentualfaltas>25.0)
            reprovadosfalta++;
    }
    printf("Total de aprovados: %d - %.2f %%\n",aprovados,(aprovados*100.0)/qtdalunos);
    printf("Total de reprovados por nota: %d - %.2f %%\n",reprovados,(reprovados*100.0)/qtdalunos);
    printf("Total de reprovados por falta: %d - %.2f %%\n",reprovadosfalta,(reprovadosfalta*100.0)/qtdalunos);
    getch();
    
}