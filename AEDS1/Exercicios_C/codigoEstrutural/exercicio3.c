/*
Exercício: Faça um programa que calcule, o perímetro de um quadrado de lado igual a sete.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("=== Calc perimetro de um quadrado === \n");

    float ladoQuadrado = 7;
    float perimetroQuadrado = ladoQuadrado * 4;

    printf("O perimetro de um quadrado de lado igual a %.2f equivale a: %.2f" , ladoQuadrado, perimetroQuadrado);

    return 0;
}