// Proponha um programa em C que leia um número inteiro positivo ne em seguida exiba n linhas do chamado Triângulo de Floyd, conforme exemplificado abaixo:
//n = 3
//1
//23
//456

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero = 10;
    int numerodelinhas;
    int numerosporlinha;
    int acrescentanumero;

    for (numerodelinhas = 1; numerodelinhas <= numero; numerodelinhas++) {
        for (numerosporlinha = 1; numerosporlinha <= numerodelinhas; numerosporlinha++){
            acrescentanumero++;
            printf("%d", acrescentanumero);

        }
        printf("\n");
    }
    
    printf("Operação finalizada.");
}