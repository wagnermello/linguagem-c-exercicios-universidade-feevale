// Faça um programa que leia um vetor de oito posições. Em seguida, leia também doisvalores X e Y quaisquer correspondentes as duas posições no vetor. Seu programadeverá exibir a soma dos valores encontrados nas respectivas posições X e Y.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main() {

    printf("* Soma de dois elementos de uma array *\n");

    int array[8] = {1, 22, 3, 7, 5, 99, 6, 12};
    int x, y;
    x = array[0];
    y = array[7];

    printf("array[8] = {1, 22, 3, 7, 5, 99, 6, 12}\n");
    printf("X: %d\n", x);
    printf("Y: %d\n", y);

    printf("A soma de X e Y é: %d", x + y);
    
}