// Proponha um programa em C que lê uma variável n, inteira e maior que zero, que representa o número de linhas da figura que segue o padrão a seguir:
// n= 5
// *****
// *****
// *****
// *****
// *****


#include <stdio.h>
#include <stdlib.h>


int main() {

    int numero;

    printf("Insira um número abaixo. Este número irá imprimir um número de linhas equivalente ao seu valor logo abaixo dele.\n");

    scanf("%d", &numero);

    printf("Número: %d\n", numero);

    for (int numerodelinhas = 1; numerodelinhas <= numero; numerodelinhas++) {               
    printf("******\n");    
    }

    printf("Operação finalizada.\n");

}