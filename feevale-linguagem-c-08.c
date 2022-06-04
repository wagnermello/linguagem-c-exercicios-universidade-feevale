// Proponha um programa em C que lê uma variável n, inteira e maior que zero, que representa o número de linhas da figura que segue o padrão a seguir:

// n= 5
// *****
// ****
// ***
// **
// *


#include <stdio.h>
#include <stdlib.h>


int main() {

    int numero;

    printf("Insira um número abaixo. Este número irá imprimir um número de linhas formadas por asteriscos equivalente ao seu valor. Cada linha começará com o valor de asteriscos igual ao número selecionado. Cada linha irá diminuir um asterisco.\n");

    scanf("%d", &numero);
    printf("Número: %d\n", numero);

  
    for (int numerodeasteriscos = numero; numerodeasteriscos > 0; numerodeasteriscos--) {
        for (int numerodelinhas = numerodeasteriscos; numerodelinhas > 0; numerodelinhas--) {
         printf("*");   
        }       
        printf("\n"); 
    } 

    printf("Operação finalizada.");
}