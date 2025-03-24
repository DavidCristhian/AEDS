/*
Leia o raio de um círculo e mostrar o seu perímetro e área.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("=== Calc perimetro / area de um circulo ===\n");

    float raio_Circulo, perimetro_Circulo, area_Circulo;
    float pi = 3.14;

    printf("\nDigite o raio do circulo: ");
    scanf("%f" , &raio_Circulo);

    area_Circulo = pi * pow(raio_Circulo , 2);
    perimetro_Circulo = pow(pi , 2) * raio_Circulo;

    printf("O circulo cujo raio equivale: %.2f possui a area: %.2f" , raio_Circulo, area_Circulo);
    printf("O circulo cujo raio equivale: %.2f possui o perimetro: %.2f" , raio_Circulo, perimetro_Circulo);

    return 0;
}