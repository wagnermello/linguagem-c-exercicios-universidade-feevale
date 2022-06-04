// Proponha um programa em C que lê uma variável n, inteira e maior que zero, que representa o número de linhas da figura que segue o padrão a seguir:

// n= 5
// *
// **
// ***
// ****
// *****


#include <stdio.h>
#include <stdlib.h>


int main() {

    int numero;

    printf("Insira um número abaixo. Este número irá imprimir um número de linhas formadas por asteriscos equivalente ao seu valor. Cada linha acrescentará um asterisco a mais.\n");

    scanf("%d", &numero);
    printf("Número: %d\n", numero);

    for (int numerodelinhas = 1; numerodelinhas <= numero; numerodelinhas++) {
        for (int numerodeasteriscos = 1; numerodeasteriscos <= numerodelinhas; numerodeasteriscos++) {
            printf("*");
        }
        printf("\n");
    } 

    printf("Operação finalizada.");
}