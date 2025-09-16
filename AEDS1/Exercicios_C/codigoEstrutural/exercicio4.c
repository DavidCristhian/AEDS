/*
Área de um círculo de raio igual a um.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("=== Calc a área de um circulo ===\n");

    float raio = 1;
    float pi = 3.14;
    float areaCirculo = pi * pow(raio , 2);

    printf("O circulo de raio %.1f possui a area equivalente a: %.2f" , raio, areaCirculo);

    return 0;
}